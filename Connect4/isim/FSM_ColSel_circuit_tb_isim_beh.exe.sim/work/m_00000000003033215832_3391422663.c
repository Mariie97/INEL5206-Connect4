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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/ColumnCalculator.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {31U, 0U};
static unsigned int ng4[] = {14U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {13U, 0U};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {11U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {7U, 0U};
static unsigned int ng12[] = {3U, 0U};



static void Always_36_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t33[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    int t28;
    char *t29;
    char *t30;
    char *t32;
    char *t34;

LAB0:    t1 = (t0 + 3648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3968);
    *((int *)t2) = 1;
    t3 = (t0 + 3680);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t5);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB9;

LAB6:    if (t16 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t20 = (t6 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(40, ng0);

LAB13:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t28 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t28 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);

LAB25:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(39, ng0);
    t26 = ((char*)((ng3)));
    t27 = (t0 + 2408);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 5);
    goto LAB12;

LAB15:    xsi_set_current_line(42, ng0);

LAB26:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t19 = (t5 + 4);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t20);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB28;

LAB27:    if (t16 != 0)
        goto LAB29;

LAB30:    t27 = (t6 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(51, ng0);

LAB35:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB33:    goto LAB25;

LAB17:    xsi_set_current_line(57, ng0);

LAB36:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t19 = (t5 + 4);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t20);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB38;

LAB37:    if (t16 != 0)
        goto LAB39;

LAB40:    t27 = (t6 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(65, ng0);

LAB45:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB43:    goto LAB25;

LAB19:    xsi_set_current_line(71, ng0);

LAB46:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 1848U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t19 = (t5 + 4);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t20);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB48;

LAB47:    if (t16 != 0)
        goto LAB49;

LAB50:    t27 = (t6 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB51;

LAB52:    xsi_set_current_line(79, ng0);

LAB55:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB53:    goto LAB25;

LAB21:    xsi_set_current_line(84, ng0);

LAB56:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 2008U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t19 = (t5 + 4);
    t20 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t4);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t19);
    t11 = *((unsigned int *)t20);
    t12 = (t10 ^ t11);
    t13 = (t9 | t12);
    t14 = *((unsigned int *)t19);
    t15 = *((unsigned int *)t20);
    t16 = (t14 | t15);
    t17 = (~(t16));
    t18 = (t13 & t17);
    if (t18 != 0)
        goto LAB58;

LAB57:    if (t16 != 0)
        goto LAB59;

LAB60:    t27 = (t6 + 4);
    t21 = *((unsigned int *)t27);
    t22 = (~(t21));
    t23 = *((unsigned int *)t6);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(92, ng0);

LAB65:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2408);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB63:    goto LAB25;

LAB28:    *((unsigned int *)t6) = 1;
    goto LAB30;

LAB29:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(44, ng0);

LAB34:    xsi_set_current_line(45, ng0);
    t29 = (t0 + 1528U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng5)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 5, t30, 3, t29, 5);
    t32 = (t0 + 2408);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 5);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB38:    *((unsigned int *)t6) = 1;
    goto LAB40;

LAB39:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(59, ng0);

LAB44:    xsi_set_current_line(60, ng0);
    t29 = (t0 + 1688U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng5)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 5, t30, 3, t29, 5);
    t32 = ((char*)((ng8)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 5, t31, 5, t32, 5);
    t34 = (t0 + 2408);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 5);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB43;

LAB48:    *((unsigned int *)t6) = 1;
    goto LAB50;

LAB49:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB50;

LAB51:    xsi_set_current_line(73, ng0);

LAB54:    xsi_set_current_line(74, ng0);
    t29 = (t0 + 1848U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng5)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 5, t30, 3, t29, 5);
    t32 = ((char*)((ng10)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 5, t31, 5, t32, 5);
    t34 = (t0 + 2408);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 5);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB53;

LAB58:    *((unsigned int *)t6) = 1;
    goto LAB60;

LAB59:    t26 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(86, ng0);

LAB64:    xsi_set_current_line(87, ng0);
    t29 = (t0 + 2008U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng5)));
    memset(t31, 0, 8);
    xsi_vlog_unsigned_multiply(t31, 5, t30, 3, t29, 5);
    t32 = ((char*)((ng12)));
    memset(t33, 0, 8);
    xsi_vlog_unsigned_add(t33, 5, t31, 5, t32, 5);
    t34 = (t0 + 2408);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 5);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng12)));
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 2);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB63;

}


extern void work_m_00000000003033215832_3391422663_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000003033215832_3391422663", "isim/FSM_ColSel_circuit_tb_isim_beh.exe.sim/work/m_00000000003033215832_3391422663.didat");
	xsi_register_executes(pe);
}
