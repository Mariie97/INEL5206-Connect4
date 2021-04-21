/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003726751932_4020927633_init();
    work_m_00000000000331610855_1968518892_init();
    work_m_00000000001058067421_3391422663_init();
    work_m_00000000003357041890_3348356461_init();
    work_m_00000000001746136028_0039947654_init();
    work_m_00000000001695550644_1835803111_init();
    work_m_00000000002874122798_0749205668_init();
    work_m_00000000003555773131_2890857277_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003555773131_2890857277");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
