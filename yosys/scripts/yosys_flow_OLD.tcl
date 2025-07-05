# Import library file from library IHP-SG13G2
yosys read_liberty -lib /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_stdcell/lib/sg13g2_stdcell_typ_1p20V_25C.lib
yosys read_liberty -lib /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_io/lib/sg13g2_io_typ_1p2V_3p3V_25C.lib
yosys read_liberty -lib /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_64x64_c2_bm_bist_typ_1p20V_25C.lib
yosys read_liberty -lib /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_256x48_c2_bm_bist_typ_1p20V_25C.lib
yosys read_liberty -lib /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_256x64_c2_bm_bist_typ_1p20V_25C.lib
yosys read_liberty -lib /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_512x64_c2_bm_bist_typ_1p20V_25C.lib
yosys read_liberty -lib /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_1024x8_c2_bm_bist_typ_1p20V_25C.lib
yosys read_liberty -lib /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_1024x16_c2_bm_bist_typ_1p20V_25C.lib
yosys read_liberty -lib /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_2048x64_c2_bm_bist_typ_1p20V_25C.lib
yosys read_liberty -lib /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_4096x8_c3_bm_bist_typ_1p20V_25C.lib
yosys read_liberty -lib /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_4096x16_c3_bm_bist_typ_1p20V_25C.lib

# Activate the plugin
yosys plugin -i slang.so

# Use the plugin to import the design.
#yosys read_slang --top croc_chip -F /home/vlsi/Documents/VLSI_ETH/Project/croc/croc.flist
#yosys tee -q -o "./croc_wo_keep-hierarchy.rpt" stat
#yosys write_verilog "./croc_wo_keep-hierarchy.v"

# Redoing synthesys with the keep-hierarchy flag enable to better read output
yosys read_slang --top croc_chip -F /home/vlsi/Documents/VLSI_ETH/Project/croc/croc.flist --keep-hierarchy

# print the report in the Yosys interactive shell
#yosys stat
# export the report into a file named 'croc.rpt'
yosys tee -q -o "./reports/croc.rpt" stat
# export the netlist
#yosys write_verilog "./out/croc.v" 

# Check, expand, and clean up the design hierarchy
yosys hierarchy -check -top croc_chip

# Translate the behavioral logic into a RTL netlist
yosys proc

# Optimazing the design BEFORE handling FSMs
yosys opt -noff
# Converting finite states machines (FSMs) and memories from higher-level
# behavioral descriptions into hardware-friendly representations
# 1. extract and optimize Finite State Machines
yosys fsm
# 2. reduces the bit-width of operations
yosys wreduce
# 3. Appling a collection of peephole optimizers
yosys peepopt
# 4. Consolidates shareable resources into a single instance
yosys share
# Optimazing the design AFTER handling FSMs
yosys opt -full
# 5. Infer memory blocks from the design
yosys memory
# Optimizin the design with FlipFlops
yosys opt_dff

# Synthesis constrains
set period_ps 10000

# Exclude modules from flattening for better clarity (example)
yosys setattr -set keep_hierarchy 1 soc_ctrl_reg_top

# Flatten the design before mapping tech to improve ABC speed (but makes the design more complicated)
yosys flatten

# Replace RTL cells in the design with Yosys’s internal gate-level cells
yosys techmap

# Mapping register cells to the registers available in the target technology
yosys dfflibmap -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_stdcell/lib/sg13g2_stdcell_typ_1p20V_25C.lib
yosys dfflibmap -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_io/lib/sg13g2_io_typ_1p2V_3p3V_25C.lib
yosys dfflibmap -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_64x64_c2_bm_bist_typ_1p20V_25C.lib
yosys dfflibmap -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_256x48_c2_bm_bist_typ_1p20V_25C.lib
yosys dfflibmap -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_256x64_c2_bm_bist_typ_1p20V_25C.lib
yosys dfflibmap -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_512x64_c2_bm_bist_typ_1p20V_25C.lib
yosys dfflibmap -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_1024x8_c2_bm_bist_typ_1p20V_25C.lib
yosys dfflibmap -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_1024x16_c2_bm_bist_typ_1p20V_25C.lib
yosys dfflibmap -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_2048x64_c2_bm_bist_typ_1p20V_25C.lib
yosys dfflibmap -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_4096x8_c3_bm_bist_typ_1p20V_25C.lib
yosys dfflibmap -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_4096x16_c3_bm_bist_typ_1p20V_25C.lib



# Combinational logic is mapped to the target technology cells via the ABC tool for every liberty
yosys abc -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_stdcell/lib/sg13g2_stdcell_typ_1p20V_25C.lib -D ${period_ps} -constr src/abc.constr -script scripts/abc-opt.script
yosys abc -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_io/lib/sg13g2_io_typ_1p2V_3p3V_25C.lib -D ${period_ps} -constr src/abc.constr -script scripts/abc-opt.script
yosys abc -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_64x64_c2_bm_bist_typ_1p20V_25C.lib -D ${period_ps} -constr src/abc.constr -script scripts/abc-opt.script
yosys abc -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_256x48_c2_bm_bist_typ_1p20V_25C.lib -D ${period_ps} -constr src/abc.constr -script scripts/abc-opt.script
yosys abc -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_256x64_c2_bm_bist_typ_1p20V_25C.lib -D ${period_ps} -constr src/abc.constr -script scripts/abc-opt.script
yosys abc -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_512x64_c2_bm_bist_typ_1p20V_25C.lib -D ${period_ps} -constr src/abc.constr -script scripts/abc-opt.script
yosys abc -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_1024x8_c2_bm_bist_typ_1p20V_25C.lib -D ${period_ps} -constr src/abc.constr -script scripts/abc-opt.script
yosys abc -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_1024x16_c2_bm_bist_typ_1p20V_25C.lib -D ${period_ps} -constr src/abc.constr -script scripts/abc-opt.script
yosys abc -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_2048x64_c2_bm_bist_typ_1p20V_25C.lib -D ${period_ps} -constr src/abc.constr -script scripts/abc-opt.script
yosys abc -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_4096x8_c3_bm_bist_typ_1p20V_25C.lib -D ${period_ps} -constr src/abc.constr -script scripts/abc-opt.script
yosys abc -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_4096x16_c3_bm_bist_typ_1p20V_25C.lib -D ${period_ps} -constr src/abc.constr -script scripts/abc-opt.script



# Print stats
yosys stat -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_stdcell/lib/sg13g2_stdcell_typ_1p20V_25C.lib
yosys stat -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_io/lib/sg13g2_io_typ_1p2V_3p3V_25C.lib
yosys stat -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_64x64_c2_bm_bist_typ_1p20V_25C.lib
yosys stat -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_256x48_c2_bm_bist_typ_1p20V_25C.lib
yosys stat -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_256x64_c2_bm_bist_typ_1p20V_25C.lib
yosys stat -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_512x64_c2_bm_bist_typ_1p20V_25C.lib
yosys stat -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_1024x8_c2_bm_bist_typ_1p20V_25C.lib
yosys stat -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_1024x16_c2_bm_bist_typ_1p20V_25C.lib
yosys stat -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_2048x64_c2_bm_bist_typ_1p20V_25C.lib
yosys stat -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_4096x8_c3_bm_bist_typ_1p20V_25C.lib
yosys stat -liberty /home/vlsi/Documents/VLSI_ETH/Project/croc/ihp13/pdk/ihp-sg13g2/libs.ref/sg13g2_sram/lib/RM_IHPSG13_1P_4096x16_c3_bm_bist_typ_1p20V_25C.lib


# Prepare for OpenRoad
# Split multi-bit nets into single-bit nets
yosys splitnets -ports
# Set undefined ports to zero
yosys setundef -zero
# Replace constant hi and lo bits with corresponding driver cells from the technology library
yosys hilomap -hicell TIEHI Z -locell TIELO Z

# export the netlist
yosys write_verilog out/croc.v