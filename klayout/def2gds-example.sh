#! /bin/csh -f

# klayout batch mode for transferring def to gds
#
# v1 Zerun Tue 27 Feb 13:49:08 CET 2024
# - initial version

### modify variables ###
set topcell = croc_chip
set defpath = ../openroad/out/${topcell}.def
#########################

klayout -zz -rd design_name=$topcell \
            -rd in_def=$defpath \
            -rd in_files=" ../technology/gds/sg13g2_stdcell.gds \
  ../technology/gds/sg13g2_io.gds \
  ../technology/gds/RM_IHPSG13_1P_1024x64_c2_bm_bist.gds \
  ../technology/gds/RM_IHPSG13_1P_2048x64_c2_bm_bist.gds \
  ../technology/gds/RM_IHPSG13_1P_256x48_c2_bm_bist.gds \
  ../technology/gds/RM_IHPSG13_1P_256x64_c2_bm_bist.gds \
  ../technology/gds/RM_IHPSG13_1P_512x64_c2_bm_bist.gds \
  ../technology/gds/RM_IHPSG13_1P_64x64_c2_bm_bist.gds \
" \
            -rd out_file=${topcell}.gds\
            -rd tech_file=.klayout/tech/sg13g2.lyt \
            -rd layer_map='' \
            -rd seal_file='' \
            -rd config_file='' \
            -rm .klayout/def2stream.py


