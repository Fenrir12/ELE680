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
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1006216973935652998_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1006216973935724872_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0608033670_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned char t17;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20, &&LAB21};

LAB0:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3072U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7176);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 2952U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(84, ng0);
    t3 = (t0 + 7320);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);

LAB6:    goto LAB3;

LAB8:    goto LAB6;

LAB9:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 7320);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 7384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB10:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 7320);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 7384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB11:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = (unsigned char)0;

LAB27:    if (t2 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB8;

LAB12:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB34;

LAB36:
LAB35:    goto LAB8;

LAB13:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB105;

LAB106:    t2 = (unsigned char)0;

LAB107:    if (t2 != 0)
        goto LAB102;

LAB104:
LAB103:    goto LAB8;

LAB14:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB111;

LAB112:    t2 = (unsigned char)0;

LAB113:    if (t2 != 0)
        goto LAB108;

LAB110:
LAB109:    goto LAB8;

LAB15:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB117;

LAB118:    t2 = (unsigned char)0;

LAB119:    if (t2 != 0)
        goto LAB114;

LAB116:
LAB115:    goto LAB8;

LAB16:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB123;

LAB124:    t2 = (unsigned char)0;

LAB125:    if (t2 != 0)
        goto LAB120;

LAB122:
LAB121:    goto LAB8;

LAB17:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB129;

LAB130:    t2 = (unsigned char)0;

LAB131:    if (t2 != 0)
        goto LAB126;

LAB128:
LAB127:    goto LAB8;

LAB18:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB135;

LAB136:    t2 = (unsigned char)0;

LAB137:    if (t2 != 0)
        goto LAB132;

LAB134:
LAB133:    goto LAB8;

LAB19:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB141;

LAB142:    t2 = (unsigned char)0;

LAB143:    if (t2 != 0)
        goto LAB138;

LAB140:
LAB139:    goto LAB8;

LAB20:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB147;

LAB148:    t2 = (unsigned char)0;

LAB149:    if (t2 != 0)
        goto LAB144;

LAB146:
LAB145:    goto LAB8;

LAB21:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 7320);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)12;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB22:    xsi_set_current_line(95, ng0);
    t10 = (t0 + 7320);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)3;
    xsi_driver_first_trans_fast(t10);
    goto LAB23;

LAB25:    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t1 = (t0 + 13342);
    t11 = 1;
    if (8U == 8U)
        goto LAB28;

LAB29:    t11 = 0;

LAB30:    t2 = t11;
    goto LAB27;

LAB28:    t12 = 0;

LAB31:    if (t12 < 8U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t8 = (t4 + t12);
    t9 = (t1 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB29;

LAB33:    t12 = (t12 + 1);
    goto LAB31;

LAB34:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t1 = (t0 + 13350);
    t6 = 1;
    if (8U == 8U)
        goto LAB40;

LAB41:    t6 = 0;

LAB42:    if (t6 != 0)
        goto LAB37;

LAB39:    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 13358);
    t2 = 1;
    if (8U == 8U)
        goto LAB48;

LAB49:    t2 = 0;

LAB50:    if (t2 != 0)
        goto LAB46;

LAB47:    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 13366);
    t2 = 1;
    if (8U == 8U)
        goto LAB56;

LAB57:    t2 = 0;

LAB58:    if (t2 != 0)
        goto LAB54;

LAB55:    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 13374);
    t2 = 1;
    if (8U == 8U)
        goto LAB64;

LAB65:    t2 = 0;

LAB66:    if (t2 != 0)
        goto LAB62;

LAB63:    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 13382);
    t2 = 1;
    if (8U == 8U)
        goto LAB72;

LAB73:    t2 = 0;

LAB74:    if (t2 != 0)
        goto LAB70;

LAB71:    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 13390);
    t2 = 1;
    if (8U == 8U)
        goto LAB80;

LAB81:    t2 = 0;

LAB82:    if (t2 != 0)
        goto LAB78;

LAB79:    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 13398);
    t2 = 1;
    if (8U == 8U)
        goto LAB88;

LAB89:    t2 = 0;

LAB90:    if (t2 != 0)
        goto LAB86;

LAB87:    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 13406);
    t2 = 1;
    if (8U == 8U)
        goto LAB96;

LAB97:    t2 = 0;

LAB98:    if (t2 != 0)
        goto LAB94;

LAB95:
LAB38:    goto LAB35;

LAB37:    xsi_set_current_line(101, ng0);
    t10 = (t0 + 7320);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)4;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 7384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB40:    t12 = 0;

LAB43:    if (t12 < 8U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t8 = (t4 + t12);
    t9 = (t1 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB41;

LAB45:    t12 = (t12 + 1);
    goto LAB43;

LAB46:    xsi_set_current_line(104, ng0);
    t9 = (t0 + 7320);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)5;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 7384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB48:    t12 = 0;

LAB51:    if (t12 < 8U)
        goto LAB52;
    else
        goto LAB50;

LAB52:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB49;

LAB53:    t12 = (t12 + 1);
    goto LAB51;

LAB54:    xsi_set_current_line(107, ng0);
    t9 = (t0 + 7320);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)6;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 7384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB56:    t12 = 0;

LAB59:    if (t12 < 8U)
        goto LAB60;
    else
        goto LAB58;

LAB60:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB57;

LAB61:    t12 = (t12 + 1);
    goto LAB59;

LAB62:    xsi_set_current_line(110, ng0);
    t9 = (t0 + 7320);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)7;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 7384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB64:    t12 = 0;

LAB67:    if (t12 < 8U)
        goto LAB68;
    else
        goto LAB66;

LAB68:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB65;

LAB69:    t12 = (t12 + 1);
    goto LAB67;

LAB70:    xsi_set_current_line(113, ng0);
    t9 = (t0 + 7320);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)8;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 7384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB72:    t12 = 0;

LAB75:    if (t12 < 8U)
        goto LAB76;
    else
        goto LAB74;

LAB76:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB73;

LAB77:    t12 = (t12 + 1);
    goto LAB75;

LAB78:    xsi_set_current_line(116, ng0);
    t9 = (t0 + 7320);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)9;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 7384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB80:    t12 = 0;

LAB83:    if (t12 < 8U)
        goto LAB84;
    else
        goto LAB82;

LAB84:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB81;

LAB85:    t12 = (t12 + 1);
    goto LAB83;

LAB86:    xsi_set_current_line(119, ng0);
    t9 = (t0 + 7320);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)10;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 7384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB88:    t12 = 0;

LAB91:    if (t12 < 8U)
        goto LAB92;
    else
        goto LAB90;

LAB92:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB89;

LAB93:    t12 = (t12 + 1);
    goto LAB91;

LAB94:    xsi_set_current_line(122, ng0);
    t9 = (t0 + 7320);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)11;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 7384);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB38;

LAB96:    t12 = 0;

LAB99:    if (t12 < 8U)
        goto LAB100;
    else
        goto LAB98;

LAB100:    t7 = (t3 + t12);
    t8 = (t1 + t12);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB97;

LAB101:    t12 = (t12 + 1);
    goto LAB99;

LAB102:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 7320);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB103;

LAB105:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t17 = (t11 == (unsigned char)4);
    t2 = t17;
    goto LAB107;

LAB108:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 7320);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB109;

LAB111:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t17 = (t11 == (unsigned char)4);
    t2 = t17;
    goto LAB113;

LAB114:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 7320);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB115;

LAB117:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t17 = (t11 == (unsigned char)4);
    t2 = t17;
    goto LAB119;

LAB120:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 7320);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB121;

LAB123:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t17 = (t11 == (unsigned char)4);
    t2 = t17;
    goto LAB125;

LAB126:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 7320);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB127;

LAB129:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t17 = (t11 == (unsigned char)4);
    t2 = t17;
    goto LAB131;

LAB132:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 7320);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB133;

LAB135:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t17 = (t11 == (unsigned char)4);
    t2 = t17;
    goto LAB137;

LAB138:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 7320);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB139;

LAB141:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t17 = (t11 == (unsigned char)4);
    t2 = t17;
    goto LAB143;

LAB144:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 7320);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB145;

LAB147:    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t11 = *((unsigned char *)t4);
    t17 = (t11 == (unsigned char)4);
    t2 = t17;
    goto LAB149;

}

static void work_a_0608033670_3212880686_p_1(char *t0)
{
    char t15[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB15, &&LAB13, &&LAB14, &&LAB16};
    static char *nl1[] = {&&LAB71, &&LAB71, &&LAB71, &&LAB71, &&LAB63, &&LAB64, &&LAB65, &&LAB66, &&LAB67, &&LAB68, &&LAB69, &&LAB70, &&LAB71};

LAB0:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 3072U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7192);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(172, ng0);
    t3 = (t0 + 2952U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7512);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(176, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(173, ng0);
    t3 = (t0 + 7448);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);

LAB6:    goto LAB3;

LAB8:    xsi_set_current_line(231, ng0);
    t1 = (t0 + 3432U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)4);
    if (t5 != 0)
        goto LAB59;

LAB61:
LAB60:    goto LAB6;

LAB9:    xsi_set_current_line(178, ng0);
    t4 = (t0 + 13414);
    t8 = (t0 + 7576);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 16U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(179, ng0);
    t1 = (t0 + 7640);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(180, ng0);
    t1 = (t0 + 7704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(181, ng0);
    t1 = xsi_get_transient_memory(15U);
    memset(t1, 0, 15U);
    t3 = t1;
    memset(t3, (unsigned char)2, 15U);
    t4 = (t0 + 7768);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 15U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(182, ng0);
    t1 = (t0 + 4392U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = (unsigned char)0;

LAB22:    if (t2 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB8;

LAB10:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB26;

LAB27:    t2 = (unsigned char)0;

LAB28:    if (t2 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB8;

LAB11:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB32;

LAB33:    t2 = (unsigned char)0;

LAB34:    if (t2 != 0)
        goto LAB29;

LAB31:
LAB30:    goto LAB8;

LAB12:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)3);
    if (t6 == 1)
        goto LAB38;

LAB39:    t2 = (unsigned char)0;

LAB40:    if (t2 != 0)
        goto LAB35;

LAB37:
LAB36:    goto LAB8;

LAB13:    xsi_set_current_line(206, ng0);
    t1 = (t0 + 7640);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(207, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t17 = (15 - 13);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t4 = (t0 + 7960);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 14U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(208, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(211, ng0);
    t1 = (t0 + 7448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);

LAB45:    goto LAB8;

LAB14:    xsi_set_current_line(214, ng0);
    t1 = (t0 + 7640);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(215, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t1 = (t0 + 13208U);
    t4 = ieee_p_1242562249_sub_1006216973935724872_1035706684(IEEE_P_1242562249, t15, t3, t1, 2);
    t7 = (t0 + 7896);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(216, ng0);
    t1 = (t0 + 4072U);
    t3 = *((char **)t1);
    t1 = (t0 + 13240U);
    t4 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t15, t3, t1, 1);
    t7 = (t0 + 7768);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 15U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(217, ng0);
    t1 = (t0 + 3752U);
    t3 = *((char **)t1);
    t1 = (t0 + 13430);
    t2 = 1;
    if (8U == 8U)
        goto LAB50;

LAB51:    t2 = 0;

LAB52:    if (t2 != 0)
        goto LAB47;

LAB49:    xsi_set_current_line(220, ng0);
    t1 = (t0 + 7448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB48:    goto LAB8;

LAB15:    xsi_set_current_line(223, ng0);
    t1 = (t0 + 7704);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(224, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB56;

LAB58:
LAB57:    goto LAB8;

LAB16:    xsi_set_current_line(228, ng0);
    t1 = (t0 + 7448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB17:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 7448);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(184, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 7832);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB18;

LAB20:    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t2 = t14;
    goto LAB22;

LAB23:    xsi_set_current_line(188, ng0);
    t1 = (t0 + 1032U);
    t7 = *((char **)t1);
    t1 = (t0 + 13112U);
    t8 = ieee_p_1242562249_sub_1006216973935652998_1035706684(IEEE_P_1242562249, t15, t7, t1, 1);
    t9 = (t0 + 7896);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t8, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(189, ng0);
    t1 = (t0 + 7448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB26:    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t2 = t14;
    goto LAB28;

LAB29:    xsi_set_current_line(193, ng0);
    t1 = (t0 + 1032U);
    t7 = *((char **)t1);
    t1 = (t0 + 7576);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 8U);
    xsi_driver_first_trans_delta(t1, 0U, 8U, 0LL);
    xsi_set_current_line(194, ng0);
    t1 = (t0 + 7448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB30;

LAB32:    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t2 = t14;
    goto LAB34;

LAB35:    xsi_set_current_line(198, ng0);
    t1 = (t0 + 1032U);
    t7 = *((char **)t1);
    t1 = (t0 + 7576);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t7, 8U);
    xsi_driver_first_trans_delta(t1, 8U, 8U, 0LL);
    xsi_set_current_line(199, ng0);
    t1 = (t0 + 3272U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)5);
    if (t5 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 7448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB42:    goto LAB36;

LAB38:    t1 = (t0 + 4232U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t2 = t14;
    goto LAB40;

LAB41:    xsi_set_current_line(200, ng0);
    t1 = (t0 + 7448);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB42;

LAB44:    xsi_set_current_line(209, ng0);
    t1 = (t0 + 7448);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB45;

LAB47:    xsi_set_current_line(218, ng0);
    t9 = (t0 + 7448);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    *((unsigned char *)t16) = (unsigned char)4;
    xsi_driver_first_trans_fast(t9);
    goto LAB48;

LAB50:    t17 = 0;

LAB53:    if (t17 < 8U)
        goto LAB54;
    else
        goto LAB52;

LAB54:    t7 = (t3 + t17);
    t8 = (t1 + t17);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB51;

LAB55:    t17 = (t17 + 1);
    goto LAB53;

LAB56:    xsi_set_current_line(225, ng0);
    t1 = (t0 + 7448);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB57;

LAB59:    xsi_set_current_line(232, ng0);
    t1 = (t0 + 3272U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (char *)((nl1) + t6);
    goto **((char **)t1);

LAB62:    goto LAB60;

LAB63:    xsi_set_current_line(234, ng0);
    t7 = (t0 + 13438);
    t9 = (t0 + 7832);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t16 = *((char **)t12);
    memcpy(t16, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(235, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t17 = (15 - 14);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t4 = (t0 + 7768);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 15U);
    xsi_driver_first_trans_fast(t4);
    goto LAB62;

LAB64:    xsi_set_current_line(237, ng0);
    t1 = (t0 + 13446);
    t4 = (t0 + 7832);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(238, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t17 = (15 - 13);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t4 = (t0 + 7960);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 14U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB62;

LAB65:    xsi_set_current_line(240, ng0);
    t1 = (t0 + 13454);
    t4 = (t0 + 7832);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(241, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t17 = (15 - 14);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t4 = (t0 + 8024);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 15U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB62;

LAB66:    xsi_set_current_line(243, ng0);
    t1 = (t0 + 13462);
    t4 = (t0 + 7832);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(244, ng0);
    t1 = (t0 + 8088);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB62;

LAB67:    xsi_set_current_line(246, ng0);
    t1 = (t0 + 13470);
    t4 = (t0 + 7832);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(247, ng0);
    t1 = (t0 + 8088);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB62;

LAB68:    xsi_set_current_line(249, ng0);
    t1 = (t0 + 13478);
    t4 = (t0 + 7832);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(250, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t17 = (15 - 3);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t4 = (t0 + 8152);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB62;

LAB69:    xsi_set_current_line(252, ng0);
    t1 = (t0 + 13486);
    t4 = (t0 + 7832);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(253, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t17 = (15 - 13);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t4 = (t0 + 8216);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 14U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB62;

LAB70:    xsi_set_current_line(255, ng0);
    t1 = (t0 + 13494);
    t4 = (t0 + 7832);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(256, ng0);
    t1 = (t0 + 3912U);
    t3 = *((char **)t1);
    t17 = (15 - 4);
    t18 = (t17 * 1U);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t4 = (t0 + 8280);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_fast(t4);
    goto LAB62;

LAB71:    xsi_set_current_line(258, ng0);
    t1 = (t0 + 7448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB62;

}

static void work_a_0608033670_3212880686_p_2(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(265, ng0);
    t3 = (t0 + 3432U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)4);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t18 = (t0 + 13502);
    t20 = (t0 + 8344);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t18, 8U);
    xsi_driver_first_trans_fast_port(t20);

LAB2:    t25 = (t0 + 7208);
    *((int *)t25) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 3592U);
    t13 = *((char **)t3);
    t3 = (t0 + 8344);
    t14 = (t3 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t13, 8U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB2;

LAB5:    t3 = (t0 + 2632U);
    t10 = *((char **)t3);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    t1 = t12;
    goto LAB7;

LAB8:    t3 = (t0 + 2952U);
    t7 = *((char **)t3);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)3);
    t2 = t9;
    goto LAB10;

LAB12:    goto LAB2;

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

LAB0:    xsi_set_current_line(266, ng0);

LAB3:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 8408);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 15U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 7224);
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

LAB0:    xsi_set_current_line(267, ng0);

LAB3:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8472);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 7240);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0608033670_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0608033670_3212880686_p_0,(void *)work_a_0608033670_3212880686_p_1,(void *)work_a_0608033670_3212880686_p_2,(void *)work_a_0608033670_3212880686_p_3,(void *)work_a_0608033670_3212880686_p_4};
	xsi_register_didat("work_a_0608033670_3212880686", "isim/MAIN_TOP_TB_isim_beh.exe.sim/work/a_0608033670_3212880686.didat");
	xsi_register_executes(pe);
}
