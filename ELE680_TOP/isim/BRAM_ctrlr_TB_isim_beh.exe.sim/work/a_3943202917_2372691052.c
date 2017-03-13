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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/f3nr1r/Documents/Workspace/Xilinx/ELE680/ELE680_TOP/BRAM_ctrlr_TB.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_1496620905533649268_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3943202917_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4672);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5512);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4672);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3943202917_2372691052_p_1(char *t0)
{
    char t24[16];
    char t25[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    int t15;
    int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 5112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 5576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(122, ng0);
    t7 = (100 * 1000LL);
    t2 = (t0 + 4920);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 5576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2928U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 * 10);
    t2 = (t0 + 4920);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3048U);
    t3 = *((char **)t2);
    t2 = (t0 + 5640);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    memcpy(t9, t3, 15U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 5704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(128, ng0);
    t2 = xsi_get_transient_memory(14U);
    memset(t2, 0, 14U);
    t3 = t2;
    memset(t3, (unsigned char)4, 14U);
    t4 = (t0 + 5768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 14U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 10887);
    *((int *)t2) = 0;
    t3 = (t0 + 10891);
    *((int *)t3) = 9;
    t11 = 0;
    t12 = 9;

LAB12:    if (t11 <= t12)
        goto LAB13;

LAB15:    xsi_set_current_line(138, ng0);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(130, ng0);
    t4 = (t0 + 5832);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3168U);
    t3 = *((char **)t2);
    t13 = (15 - 13);
    t14 = (t13 * 1U);
    t2 = (t0 + 10887);
    t15 = *((int *)t2);
    t16 = (t15 - 0);
    t17 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 9, 1, *((int *)t2));
    t18 = (16U * t17);
    t19 = (0 + t18);
    t20 = (t19 + t14);
    t4 = (t3 + t20);
    t5 = (t0 + 5896);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t21 = *((char **)t10);
    memcpy(t21, t4, 14U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(132, ng0);

LAB18:    t2 = (t0 + 5432);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 10887);
    t11 = *((int *)t2);
    t3 = (t0 + 10891);
    t12 = *((int *)t3);
    if (t11 == t12)
        goto LAB15;

LAB22:    t15 = (t11 + 1);
    t11 = t15;
    t4 = (t0 + 10887);
    *((int *)t4) = t11;
    goto LAB12;

LAB16:    t3 = (t0 + 5432);
    *((int *)t3) = 0;
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 5832);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 10200U);
    t4 = (t0 + 10895);
    t6 = (t25 + 0U);
    t9 = (t6 + 0U);
    *((int *)t9) = 0;
    t9 = (t6 + 4U);
    *((int *)t9) = 0;
    t9 = (t6 + 8U);
    *((int *)t9) = 1;
    t15 = (0 - 0);
    t13 = (t15 * 1);
    t13 = (t13 + 1);
    t9 = (t6 + 12U);
    *((unsigned int *)t9) = t13;
    t9 = ieee_p_3620187407_sub_1496620905533649268_3965413181(IEEE_P_3620187407, t24, t3, t2, t4, t25);
    t10 = (t24 + 12U);
    t13 = *((unsigned int *)t10);
    t14 = (1U * t13);
    t22 = (15U != t14);
    if (t22 == 1)
        goto LAB20;

LAB21:    t21 = (t0 + 5640);
    t26 = (t21 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t9, 15U);
    xsi_driver_first_trans_fast(t21);
    goto LAB14;

LAB17:    t3 = (t0 + 2632U);
    t4 = *((char **)t3);
    t22 = *((unsigned char *)t4);
    t23 = (t22 == (unsigned char)3);
    if (t23 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    xsi_size_not_matching(15U, t14, 0);
    goto LAB21;

LAB23:    goto LAB2;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

}


extern void work_a_3943202917_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3943202917_2372691052_p_0,(void *)work_a_3943202917_2372691052_p_1};
	xsi_register_didat("work_a_3943202917_2372691052", "isim/BRAM_ctrlr_TB_isim_beh.exe.sim/work/a_3943202917_2372691052.didat");
	xsi_register_executes(pe);
}
