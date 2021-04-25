
# PlanAhead Launch Script for Post-Synthesis floorplanning, created by Project Navigator

create_project -name Connect4 -dir "C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/planAhead_run_1" -part xc3s500efg320-4
set_property design_mode GateLvl [get_property srcset [current_run -impl]]
set_property edif_top_file "C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/connect4_top.ngc" [ get_property srcset [ current_run ] ]
add_files -norecurse { {C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4} }
set_property target_constrs_file "Connect4.ucf" [current_fileset -constrset]
add_files [list {Connect4.ucf}] -fileset [get_property constrset [current_run]]
link_design
