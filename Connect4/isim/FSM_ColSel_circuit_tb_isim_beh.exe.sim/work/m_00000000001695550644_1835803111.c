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
static const char *ng0 = "C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/DisplayGameStatus.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {8U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {16U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {128U, 0U};
static unsigned int ng8[] = {248U, 0U};
static unsigned int ng9[] = {170U, 0U};



static void Initial_30_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(30, ng0);

LAB2:    xsi_set_current_line(31, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);

LAB1:    return;
}

static void Always_33_1(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 3864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4184);
    *((int *)t2) = 1;
    t3 = (t0 + 3896);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 2136U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(36, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 8, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB15;

LAB11:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 8, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(39, ng0);

LAB16:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 2296U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t7 = (t4 + 4);
    t8 = (t3 + 4);
    t10 = *((unsigned int *)t4);
    t11 = *((unsigned int *)t3);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t8);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t7);
    t18 = *((unsigned int *)t8);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB20;

LAB17:    if (t19 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t9) = 1;

LAB20:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB21;

LAB22:    xsi_set_current_line(41, ng0);

LAB24:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB28;

LAB25:    if (t19 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t9) = 1;

LAB28:    t22 = (t9 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(43, ng0);

LAB32:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2296U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng6)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t7 = (t2 + 4);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t2);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t7);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB36;

LAB33:    if (t19 != 0)
        goto LAB35;

LAB34:    *((unsigned int *)t9) = 1;

LAB36:    t22 = (t9 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);

LAB39:
LAB31:
LAB23:    goto LAB15;

LAB19:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(40, ng0);
    t29 = ((char*)((ng2)));
    t30 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t30, t29, 0, 0, 8, 0LL);
    goto LAB23;

LAB27:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(42, ng0);
    t23 = ((char*)((ng7)));
    t29 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t29, t23, 0, 0, 8, 0LL);
    goto LAB31;

LAB35:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB36;

LAB37:    xsi_set_current_line(44, ng0);
    t23 = ((char*)((ng8)));
    t29 = (t0 + 2696);
    xsi_vlogvar_wait_assign_value(t29, t23, 0, 0, 8, 0LL);
    goto LAB39;

}


extern void work_m_00000000001695550644_1835803111_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_33_1};
	xsi_register_didat("work_m_00000000001695550644_1835803111", "isim/FSM_ColSel_circuit_tb_isim_beh.exe.sim/work/m_00000000001695550644_1835803111.didat");
	xsi_register_executes(pe);
}
