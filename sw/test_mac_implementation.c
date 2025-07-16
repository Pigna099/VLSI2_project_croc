#include "config.h"
#include "uart.h"
#include "print.h"
#include "gpio.h"
#include "util.h"

// Helper to encode R-type instruction
#define ENCODE_MAC(rd, rs1, rs2) \
    ( (0x40 << 25) | ((rs2) << 20) | ((rs1) << 15) | (0x0 << 12) | ((rd) << 7) | 0x33 )

static inline int mac(int a, int b, int c) {
    register int ra asm("a0") = a;
    register int rb asm("a1") = b;
    register int rc asm("a2") = c;
    asm volatile (
        ".word %0"
        :
        : "i"(ENCODE_MAC(12, 10, 11))
        : "a0", "a1", "a2"
    );
    return rc;
}

int main() {
    uart_init();
    printf("Hello from main!\n");
    uart_write_flush();

    int a = 7, b = 6, c = 5;
    int expected = a * b + c;
    int result = mac(a, b, c);

    printf("MAC test: %d * %d + %d = %d (expected %d)\n", a, b, c, result, expected);
    uart_write_flush();

    if (result == expected) {
        printf("MAC instruction works!\n");
        uart_write_flush();
        return 0;
    } else {
        printf("MAC instruction FAILED!\n");
        uart_write_flush();
        return 1;
    }
}