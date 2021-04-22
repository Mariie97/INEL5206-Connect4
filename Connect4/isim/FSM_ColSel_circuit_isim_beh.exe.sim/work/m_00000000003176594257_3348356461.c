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
static const char *ng0 = "C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/ColumnSelector.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {31U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {3U, 0U};



static void Initial_15_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(15, ng0);

LAB2:    xsi_set_current_line(16, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2152);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 16, 0LL);
    xsi_set_current_line(17, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 16, 0LL);
    xsi_set_current_line(18, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_22_1(char *t0)
{
    char t9[8];
    char t31[8];
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
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    int t38;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(25, ng0);

LAB16:    xsi_set_current_line(26, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 2152);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 16, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(30, ng0);

LAB17:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
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
        goto LAB19;

LAB18:    if (t19 != 0)
        goto LAB20;

LAB21:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB22;

LAB23:
LAB24:    goto LAB15;

LAB11:    xsi_set_current_line(38, ng0);

LAB30:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng4)));
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
        goto LAB32;

LAB31:    if (t19 != 0)
        goto LAB33;

LAB34:    t23 = (t9 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t9);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB35;

LAB36:
LAB37:    goto LAB15;

LAB13:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t4, t3, 0, 0, 1, 0LL);
    goto LAB15;

LAB19:    *((unsigned int *)t9) = 1;
    goto LAB21;

LAB20:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB21;

LAB22:    xsi_set_current_line(31, ng0);

LAB25:    xsi_set_current_line(32, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 2152);
    t32 = (t0 + 2152);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 1592U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t36, 5, 2);
    t35 = (t31 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB26;

LAB27:    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2312);
    t4 = (t0 + 2312);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t22 = (t0 + 1592U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t23, 5, 2);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t22);
    t6 = (!(t10));
    if (t6 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB24;

LAB26:    xsi_vlogvar_wait_assign_value(t30, t29, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB27;

LAB28:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB29;

LAB32:    *((unsigned int *)t9) = 1;
    goto LAB34;

LAB33:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(39, ng0);

LAB38:    xsi_set_current_line(40, ng0);
    t29 = ((char*)((ng5)));
    t30 = (t0 + 2152);
    t32 = (t0 + 2152);
    t33 = (t32 + 72U);
    t34 = *((char **)t33);
    t35 = (t0 + 1592U);
    t36 = *((char **)t35);
    xsi_vlog_generic_convert_bit_index(t31, t34, 2, t36, 5, 2);
    t35 = (t31 + 4);
    t37 = *((unsigned int *)t35);
    t38 = (!(t37));
    if (t38 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2312);
    t4 = (t0 + 2312);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t22 = (t0 + 1592U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t23, 5, 2);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t22);
    t6 = (!(t10));
    if (t6 == 1)
        goto LAB41;

LAB42:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB37;

LAB39:    xsi_vlogvar_wait_assign_value(t30, t29, 0, *((unsigned int *)t31), 1, 0LL);
    goto LAB40;

LAB41:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB42;

}


extern void work_m_00000000003176594257_3348356461_init()
{
	static char *pe[] = {(void *)Initial_15_0,(void *)Always_22_1};
	xsi_register_didat("work_m_00000000003176594257_3348356461", "isim/FSM_ColSel_circuit_isim_beh.exe.sim/work/m_00000000003176594257_3348356461.didat");
	xsi_register_executes(pe);
}
