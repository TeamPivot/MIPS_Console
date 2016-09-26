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
    work_m_00000000002076040134_2138213552_init();
    work_m_00000000002908347451_1938225339_init();
    work_m_00000000000819719360_3674772129_init();
    work_m_00000000000562868223_0886308060_init();
    work_m_00000000000263932259_2461264495_init();
    work_m_00000000000226522060_3288733395_init();
    work_m_00000000003552027184_3508565487_init();
    work_m_00000000000899350407_3895195772_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000899350407_3895195772");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
