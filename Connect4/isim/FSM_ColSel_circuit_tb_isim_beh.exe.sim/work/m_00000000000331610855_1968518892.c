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
static const char *ng0 = "C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/ThreeBitCounter.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {14U, 0U};
static unsigned int ng4[] = {13U, 0U};
static unsigned int ng5[] = {11U, 0U};
static unsigned int ng6[] = {7U, 0U};



static void Initial_16_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(16, ng0);

LAB2:    xsi_set_current_line(17, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(18, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(19, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2408);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(20, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2568);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Always_22_1(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 4304);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t5 = (t0 + 2088);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t0 + 2248);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t0 + 2408);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 2568);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    xsi_vlogtype_concat(t4, 12, 12, 4U, t16, 3, t13, 3, t10, 3, t7, 3);
    t17 = (t0 + 1928);
    xsi_vlogvar_assign_value(t17, t4, 0, 0, 12);
    goto LAB2;

}

static void Always_27_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
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
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 4320);
    *((int *)t2) = 1;
    t3 = (t0 + 4016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(28, ng0);

LAB5:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(35, ng0);

LAB14:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB22;

LAB23:
LAB24:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(29, ng0);

LAB13:    xsi_set_current_line(30, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 3, t7, 3, t8, 3);
    t21 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t21, t6, 0, 0, 3, 0LL);
    goto LAB24;

LAB18:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 3, t7, 3, t8, 3);
    t21 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t21, t6, 0, 0, 3, 0LL);
    goto LAB24;

LAB20:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 3, t7, 3, t8, 3);
    t21 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t21, t6, 0, 0, 3, 0LL);
    goto LAB24;

LAB22:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 2568);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 3, t7, 3, t8, 3);
    t21 = (t0 + 2568);
    xsi_vlogvar_wait_assign_value(t21, t6, 0, 0, 3, 0LL);
    goto LAB24;

}


extern void work_m_00000000000331610855_1968518892_init()
{
	static char *pe[] = {(void *)Initial_16_0,(void *)Always_22_1,(void *)Always_27_2};
	xsi_register_didat("work_m_00000000000331610855_1968518892", "isim/FSM_ColSel_circuit_tb_isim_beh.exe.sim/work/m_00000000000331610855_1968518892.didat");
	xsi_register_executes(pe);
}
