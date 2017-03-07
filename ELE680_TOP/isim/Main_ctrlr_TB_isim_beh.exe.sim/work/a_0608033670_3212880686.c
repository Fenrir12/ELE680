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
static const char *ng0 = "/home/f3nr1r/Documents/Workspace/Xilinx/ELE680/ELE680_TOP/Main_ctrlr.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_1496620905533721142_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_16272557775307340295_3965413181(char *, char *, char *, char *, unsigned char );


static void work_a_0608033670_3212880686_p_0(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    static char *nl0[] = {&&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20};

LAB0:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3072U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7336);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 7480);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3432U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(88, ng0);
    t6 = (t0 + 7480);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 7544);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB9:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 7480);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 7544);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB10:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB24;

LAB25:    t3 = (unsigned char)0;

LAB26:    if (t3 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB7;

LAB11:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB7;

LAB12:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB50;

LAB51:    t3 = (unsigned char)0;

LAB52:    if (t3 != 0)
        goto LAB47;

LAB49:
LAB48:    goto LAB7;

LAB13:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB56;

LAB57:    t3 = (unsigned char)0;

LAB58:    if (t3 != 0)
        goto LAB53;

LAB55:
LAB54:    goto LAB7;

LAB14:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB62;

LAB63:    t3 = (unsigned char)0;

LAB64:    if (t3 != 0)
        goto LAB59;

LAB61:
LAB60:    goto LAB7;

LAB15:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB68;

LAB69:    t3 = (unsigned char)0;

LAB70:    if (t3 != 0)
        goto LAB65;

LAB67:
LAB66:    goto LAB7;

LAB16:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB74;

LAB75:    t3 = (unsigned char)0;

LAB76:    if (t3 != 0)
        goto LAB71;

LAB73:
LAB72:    goto LAB7;

LAB17:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB80;

LAB81:    t3 = (unsigned char)0;

LAB82:    if (t3 != 0)
        goto LAB77;

LAB79:
LAB78:    goto LAB7;

LAB18:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB86;

LAB87:    t3 = (unsigned char)0;

LAB88:    if (t3 != 0)
        goto LAB83;

LAB85:
LAB84:    goto LAB7;

LAB19:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB92;

LAB93:    t3 = (unsigned char)0;

LAB94:    if (t3 != 0)
        goto LAB89;

LAB91:
LAB90:    goto LAB7;

LAB20:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 7480);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)12;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB21:    xsi_set_current_line(95, ng0);
    t9 = (t0 + 7480);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)3;
    xsi_driver_first_trans_fast(t9);
    goto LAB22;

LAB24:    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 13352U);
    t6 = (t0 + 13582);
    t8 = (t12 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t15 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t1, t6, t12);
    t3 = t15;
    goto LAB26;

LAB27:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 13352U);
    t6 = (t0 + 13590);
    t8 = (t12 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t14;
    t11 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t1, t6, t12);
    if (t11 != 0)
        goto LAB30;

LAB32:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 13352U);
    t5 = (t0 + 13598);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB33;

LAB34:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 13352U);
    t5 = (t0 + 13606);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB35;

LAB36:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 13352U);
    t5 = (t0 + 13614);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB37;

LAB38:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 13352U);
    t5 = (t0 + 13622);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB39;

LAB40:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 13352U);
    t5 = (t0 + 13630);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB41;

LAB42:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 13352U);
    t5 = (t0 + 13638);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB43;

LAB44:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 13352U);
    t5 = (t0 + 13646);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t13 = (7 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t12);
    if (t3 != 0)
        goto LAB45;

LAB46:
LAB31:    goto LAB28;

LAB30:    xsi_set_current_line(101, ng0);
    t9 = (t0 + 7480);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)4;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 7544);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB33:    xsi_set_current_line(104, ng0);
    t8 = (t0 + 7480);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)5;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 7544);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB35:    xsi_set_current_line(107, ng0);
    t8 = (t0 + 7480);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)6;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 7544);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB37:    xsi_set_current_line(110, ng0);
    t8 = (t0 + 7480);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)7;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 7544);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB39:    xsi_set_current_line(113, ng0);
    t8 = (t0 + 7480);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)8;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 7544);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB41:    xsi_set_current_line(116, ng0);
    t8 = (t0 + 7480);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)9;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 7544);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB43:    xsi_set_current_line(119, ng0);
    t8 = (t0 + 7480);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)10;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 7544);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB45:    xsi_set_current_line(122, ng0);
    t8 = (t0 + 7480);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)11;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 7544);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB47:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 7480);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB48;

LAB50:    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t15 = *((unsigned char *)t5);
    t19 = (t15 == (unsigned char)4);
    t3 = t19;
    goto LAB52;

LAB53:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 7480);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB54;

LAB56:    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t15 = *((unsigned char *)t5);
    t19 = (t15 == (unsigned char)4);
    t3 = t19;
    goto LAB58;

LAB59:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 7480);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB60;

LAB62:    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t15 = *((unsigned char *)t5);
    t19 = (t15 == (unsigned char)4);
    t3 = t19;
    goto LAB64;

LAB65:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 7480);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB66;

LAB68:    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t15 = *((unsigned char *)t5);
    t19 = (t15 == (unsigned char)4);
    t3 = t19;
    goto LAB70;

LAB71:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 7480);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB72;

LAB74:    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t15 = *((unsigned char *)t5);
    t19 = (t15 == (unsigned char)4);
    t3 = t19;
    goto LAB76;

LAB77:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 7480);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB78;

LAB80:    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t15 = *((unsigned char *)t5);
    t19 = (t15 == (unsigned char)4);
    t3 = t19;
    goto LAB82;

LAB83:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 7480);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB84;

LAB86:    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t15 = *((unsigned char *)t5);
    t19 = (t15 == (unsigned char)4);
    t3 = t19;
    goto LAB88;

LAB89:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 7480);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB90;

LAB92:    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t15 = *((unsigned char *)t5);
    t19 = (t15 == (unsigned char)4);
    t3 = t19;
    goto LAB94;

}

static void work_a_0608033670_3212880686_p_1(char *t0)
{
    char t13[16];
    char t22[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    int t23;
    char *t24;
    static char *nl0[] = {&&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB14, &&LAB12, &&LAB13, &&LAB15};
    static char *nl1[] = {&&LAB70, &&LAB70, &&LAB70, &&LAB70, &&LAB62, &&LAB63, &&LAB64, &&LAB65, &&LAB66, &&LAB67, &&LAB68, &&LAB69, &&LAB70};

LAB0:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3072U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 7352);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 7608);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(172, ng0);
    t1 = (t0 + 13654);
    t5 = (t0 + 7672);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 2632U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 7736);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(175, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB7:    xsi_set_current_line(227, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)4);
    if (t4 != 0)
        goto LAB58;

LAB60:
LAB59:    goto LAB3;

LAB8:    xsi_set_current_line(177, ng0);
    t5 = (t0 + 7800);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(178, ng0);
    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)3);
    if (t10 == 1)
        goto LAB19;

LAB20:    t3 = (unsigned char)0;

LAB21:    if (t3 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB7;

LAB9:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)3);
    if (t10 == 1)
        goto LAB25;

LAB26:    t3 = (unsigned char)0;

LAB27:    if (t3 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB7;

LAB10:    xsi_set_current_line(188, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)3);
    if (t10 == 1)
        goto LAB33;

LAB34:    t3 = (unsigned char)0;

LAB35:    if (t3 != 0)
        goto LAB30;

LAB32:
LAB31:    goto LAB7;

LAB11:    xsi_set_current_line(193, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)3);
    if (t10 == 1)
        goto LAB39;

LAB40:    t3 = (unsigned char)0;

LAB41:    if (t3 != 0)
        goto LAB36;

LAB38:
LAB37:    goto LAB7;

LAB12:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 7992);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(203, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t14 = (15 - 13);
    t15 = (t14 * 1U);
    t21 = (0 + t15);
    t1 = (t2 + t21);
    t5 = (t0 + 8056);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 14U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(204, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB45;

LAB47:    xsi_set_current_line(207, ng0);
    t1 = (t0 + 7608);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB46:    goto LAB7;

LAB13:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 7992);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(211, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 13448U);
    t5 = (t0 + 13670);
    t7 = (t22 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 3;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t23 = (3 - 0);
    t14 = (t23 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t8 = ieee_p_3620187407_sub_1496620905533721142_3965413181(IEEE_P_3620187407, t13, t2, t1, t5, t22);
    t9 = (t13 + 12U);
    t14 = *((unsigned int *)t9);
    t15 = (1U * t14);
    t3 = (8U != t15);
    if (t3 == 1)
        goto LAB48;

LAB49:    t17 = (t0 + 7928);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t24 = *((char **)t20);
    memcpy(t24, t8, 8U);
    xsi_driver_first_trans_fast(t17);
    xsi_set_current_line(212, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t1 = (t0 + 13480U);
    t5 = ieee_p_3620187407_sub_16272557775307340295_3965413181(IEEE_P_3620187407, t13, t2, t1, (unsigned char)3);
    t6 = (t13 + 12U);
    t14 = *((unsigned int *)t6);
    t15 = (1U * t14);
    t3 = (15U != t15);
    if (t3 == 1)
        goto LAB50;

LAB51:    t7 = (t0 + 8120);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t5, 15U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(213, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 13448U);
    t5 = (t0 + 13674);
    t7 = (t13 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 0;
    t8 = (t7 + 4U);
    *((int *)t8) = 7;
    t8 = (t7 + 8U);
    *((int *)t8) = 1;
    t23 = (7 - 0);
    t14 = (t23 * 1);
    t14 = (t14 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t14;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t5, t13);
    if (t3 != 0)
        goto LAB52;

LAB54:    xsi_set_current_line(216, ng0);
    t1 = (t0 + 7608);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB53:    goto LAB7;

LAB14:    xsi_set_current_line(219, ng0);
    t1 = (t0 + 7800);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(220, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB55;

LAB57:
LAB56:    goto LAB7;

LAB15:    xsi_set_current_line(224, ng0);
    t1 = (t0 + 7608);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB16:    xsi_set_current_line(179, ng0);
    t1 = (t0 + 7608);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(180, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7864);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    t1 = (t0 + 2632U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB21;

LAB22:    xsi_set_current_line(184, ng0);
    t1 = (t0 + 1032U);
    t6 = *((char **)t1);
    t1 = (t0 + 13352U);
    t7 = ieee_p_3620187407_sub_16272557775307340295_3965413181(IEEE_P_3620187407, t13, t6, t1, (unsigned char)3);
    t8 = (t13 + 12U);
    t14 = *((unsigned int *)t8);
    t15 = (1U * t14);
    t16 = (8U != t15);
    if (t16 == 1)
        goto LAB28;

LAB29:    t9 = (t0 + 7928);
    t17 = (t9 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(185, ng0);
    t1 = (t0 + 7608);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB23;

LAB25:    t1 = (t0 + 4392U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB27;

LAB28:    xsi_size_not_matching(8U, t15, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(189, ng0);
    t1 = (t0 + 1032U);
    t6 = *((char **)t1);
    t1 = (t0 + 7672);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t17 = *((char **)t9);
    memcpy(t17, t6, 8U);
    xsi_driver_first_trans_delta(t1, 0U, 8U, 0LL);
    xsi_set_current_line(190, ng0);
    t1 = (t0 + 7608);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB33:    t1 = (t0 + 4392U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB35;

LAB36:    xsi_set_current_line(194, ng0);
    t1 = (t0 + 1032U);
    t6 = *((char **)t1);
    t1 = (t0 + 7672);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t17 = *((char **)t9);
    memcpy(t17, t6, 8U);
    xsi_driver_first_trans_delta(t1, 8U, 8U, 0LL);
    xsi_set_current_line(195, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)5);
    if (t4 != 0)
        goto LAB42;

LAB44:    xsi_set_current_line(198, ng0);
    t1 = (t0 + 7608);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB43:    goto LAB37;

LAB39:    t1 = (t0 + 4392U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)2);
    t3 = t12;
    goto LAB41;

LAB42:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 7608);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB43;

LAB45:    xsi_set_current_line(205, ng0);
    t1 = (t0 + 7608);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB46;

LAB48:    xsi_size_not_matching(8U, t15, 0);
    goto LAB49;

LAB50:    xsi_size_not_matching(15U, t15, 0);
    goto LAB51;

LAB52:    xsi_set_current_line(214, ng0);
    t8 = (t0 + 7608);
    t9 = (t8 + 56U);
    t17 = *((char **)t9);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)4;
    xsi_driver_first_trans_fast(t8);
    goto LAB53;

LAB55:    xsi_set_current_line(221, ng0);
    t1 = (t0 + 7608);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB56;

LAB58:    xsi_set_current_line(228, ng0);
    t1 = (t0 + 3432U);
    t5 = *((char **)t1);
    t10 = *((unsigned char *)t5);
    t1 = (char *)((nl1) + t10);
    goto **((char **)t1);

LAB61:    goto LAB59;

LAB62:    xsi_set_current_line(230, ng0);
    t6 = (t0 + 13682);
    t8 = (t0 + 7864);
    t9 = (t8 + 56U);
    t17 = *((char **)t9);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t6, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(231, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t14 = (15 - 14);
    t15 = (t14 * 1U);
    t21 = (0 + t15);
    t1 = (t2 + t21);
    t5 = (t0 + 8120);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 15U);
    xsi_driver_first_trans_fast(t5);
    goto LAB61;

LAB63:    xsi_set_current_line(233, ng0);
    t1 = (t0 + 13690);
    t5 = (t0 + 7864);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(234, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t14 = (15 - 13);
    t15 = (t14 * 1U);
    t21 = (0 + t15);
    t1 = (t2 + t21);
    t5 = (t0 + 8056);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 14U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB61;

LAB64:    xsi_set_current_line(236, ng0);
    t1 = (t0 + 13698);
    t5 = (t0 + 7864);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(237, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t14 = (15 - 14);
    t15 = (t14 * 1U);
    t21 = (0 + t15);
    t1 = (t2 + t21);
    t5 = (t0 + 8184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 15U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB61;

LAB65:    xsi_set_current_line(239, ng0);
    t1 = (t0 + 13706);
    t5 = (t0 + 7864);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(240, ng0);
    t1 = (t0 + 8248);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB61;

LAB66:    xsi_set_current_line(242, ng0);
    t1 = (t0 + 13714);
    t5 = (t0 + 7864);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(243, ng0);
    t1 = (t0 + 8248);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB61;

LAB67:    xsi_set_current_line(245, ng0);
    t1 = (t0 + 13722);
    t5 = (t0 + 7864);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(246, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t14 = (15 - 3);
    t15 = (t14 * 1U);
    t21 = (0 + t15);
    t1 = (t2 + t21);
    t5 = (t0 + 8312);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB61;

LAB68:    xsi_set_current_line(248, ng0);
    t1 = (t0 + 13730);
    t5 = (t0 + 7864);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(249, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t14 = (15 - 13);
    t15 = (t14 * 1U);
    t21 = (0 + t15);
    t1 = (t2 + t21);
    t5 = (t0 + 8376);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 14U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB61;

LAB69:    xsi_set_current_line(251, ng0);
    t1 = (t0 + 13738);
    t5 = (t0 + 7864);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(252, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t14 = (15 - 4);
    t15 = (t14 * 1U);
    t21 = (0 + t15);
    t1 = (t2 + t21);
    t5 = (t0 + 8440);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    goto LAB61;

LAB70:    xsi_set_current_line(254, ng0);
    t1 = (t0 + 7608);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB61;

}

static void work_a_0608033670_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(260, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)4);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t14 = (t0 + 13746);
    t16 = (t0 + 8504);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t14, 8U);
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 7368);
    *((int *)t21) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 3752U);
    t9 = *((char **)t2);
    t2 = (t0 + 8504);
    t10 = (t2 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 8U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 2952U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_0608033670_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(261, ng0);

LAB3:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t1 = (t0 + 8568);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 15U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7384);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0608033670_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(262, ng0);

LAB3:    t1 = (t0 + 4712U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8632);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7400);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0608033670_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0608033670_3212880686_p_0,(void *)work_a_0608033670_3212880686_p_1,(void *)work_a_0608033670_3212880686_p_2,(void *)work_a_0608033670_3212880686_p_3,(void *)work_a_0608033670_3212880686_p_4};
	xsi_register_didat("work_a_0608033670_3212880686", "isim/Main_ctrlr_TB_isim_beh.exe.sim/work/a_0608033670_3212880686.didat");
	xsi_register_executes(pe);
}
