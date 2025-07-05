

# Thomas: ChatGPT eheh

set top    "croc_chip"
set libdir "./ihp13/pdk/ihp-sg13g2/libs.ref"
set outdir "./openroad/out"

# === Load Technology LEF First ===
read_lef ${libdir}/sg13g2_stdcell/lef/sg13g2_tech.lef
read_lef ${libdir}/sg13g2_io/lef/sg13g2_io_notracks.lef


read_lef ${libdir}/sg13g2_stdcell/lef/sg13g2_stdcell.lef
read_lef ${libdir}/sg13g2_sram/lef/RM_IHPSG13_1P_256x64_c2_bm_bist.lef
read_lef ${libdir}/sg13g2_io/lef/sg13g2_io.lef

# === Load Liberty Timing Info ===
read_liberty ${libdir}/sg13g2_stdcell/lib/sg13g2_stdcell_typ_1p20V_25C.lib
read_liberty ${libdir}/sg13g2_sram/lib/RM_IHPSG13_1P_256x64_c2_bm_bist_typ_1p20V_25C.lib
read_liberty ${libdir}/sg13g2_io/lib/sg13g2_io_typ_1p2V_3p3V_25C.lib

# === Read Synthesized Netlist ===
read_verilog yosys/out/04_${top}_yosys.v

# === Link Top Module ===
link_design ${top}  

# === Optional SDC Constraints ===
read_sdc ./openroad/src/constraints.sdc

# === Floorplan (basic for now) ===
initialize_floorplan \
  -die_area "0 0 1200 1200" \
  -core_area "100 100 1100 1100" \
  -site CoreSite
# === Cells Placement ===
global_placement
tapcell
detailed_placement

# === Save to ODB ===
write_db ${outdir}/croc.odb










