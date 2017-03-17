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

char *IEEE_P_0774719531;
char *IEEE_P_3620187407;
char *IEEE_P_3499444699;
char *IEEE_P_2592010699;
char *STD_STANDARD;
char *IEEE_P_1242562249;
char *UNISIM_P_0947159679;
char *STD_TEXTIO;
char *IEEE_P_2717149903;
char *UNISIM_P_3222816464;
char *IEEE_P_1367372525;
char *IEEE_P_3564397177;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    unisim_p_0947159679_init();
    std_textio_init();
    ieee_p_2717149903_init();
    ieee_p_1367372525_init();
    unisim_p_3222816464_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    unisim_a_3321449454_0621957688_init();
    ieee_p_0774719531_init();
    unisim_a_0780662263_2014779070_init();
    unisim_a_0595294957_2930107152_init();
    unisim_a_0491594714_1532504268_init();
    unisim_a_1490675510_1976025627_init();
    work_a_3644187053_0912031422_init();
    work_a_0774550523_3212880686_init();
    work_a_0608033670_3212880686_init();
    ieee_p_3564397177_init();
    xilinxcorelib_a_1945674561_2959432447_init();
    xilinxcorelib_a_0554125914_2959432447_init();
    xilinxcorelib_a_4060801937_1709443946_init();
    xilinxcorelib_a_0581536898_0543512595_init();
    xilinxcorelib_a_3238515890_3212880686_init();
    work_a_0101737298_3564381859_init();
    work_a_4108797985_3212880686_init();
    work_a_3018251451_3212880686_init();
    work_a_0303603877_3212880686_init();
    work_a_0161084865_2372691052_init();


    xsi_register_tops("work_a_0161084865_2372691052");

    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    UNISIM_P_3222816464 = xsi_get_engine_memory("unisim_p_3222816464");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");

    return xsi_run_simulation(argc, argv);

}
