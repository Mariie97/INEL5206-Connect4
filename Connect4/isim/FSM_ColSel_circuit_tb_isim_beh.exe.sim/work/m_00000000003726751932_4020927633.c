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
static const char *ng0 = "C:/Users/cmcsc/Desktop/Segundo Semestre Virtual/Switching 2/Project/repo/INEL5206-Connect4/Connect4/FSM.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Initial_18_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(18, ng0);

LAB2:    xsi_set_current_line(19, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 2, 0LL);

LAB1:    return;
}

static void Always_22_1(char *t0)
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

LAB0:    t1 = (t0 + 5048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 5616);
    *((int *)t2) = 1;
    t3 = (t0 + 5080);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 2840U);
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

LAB11:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3880);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(24, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3720);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    goto LAB12;

}

static void Always_30_2(char *t0)
{
    char t12[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 5296U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5632);
    *((int *)t2) = 1;
    t3 = (t0 + 5328);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 3720);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(34, ng0);

LAB16:    xsi_set_current_line(35, ng0);
    t9 = ((char*)((ng2)));
    t10 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t10, t9, 0, 0, 2, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(38, ng0);

LAB17:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 3000U);
    t4 = *((char **)t3);

LAB18:    t3 = ((char*)((ng1)));
    t11 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 2);
    if (t11 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB15;

LAB11:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(65, ng0);

LAB40:    xsi_set_current_line(66, ng0);
    t3 = (t0 + 3000U);
    t5 = *((char **)t3);

LAB41:    t3 = ((char*)((ng1)));
    t11 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t11 == 1)
        goto LAB42;

LAB43:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB44;

LAB45:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB46;

LAB47:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t8 == 1)
        goto LAB48;

LAB49:
LAB50:    goto LAB15;

LAB19:    xsi_set_current_line(40, ng0);
    t5 = (t0 + 3160U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t12, 0, 8);
    t9 = (t7 + 4);
    t10 = (t5 + 4);
    t13 = *((unsigned int *)t7);
    t14 = *((unsigned int *)t5);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t10);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB31;

LAB28:    if (t22 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t12) = 1;

LAB31:    t26 = (t12 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t12);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(44, ng0);

LAB36:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB34:    goto LAB27;

LAB21:    xsi_set_current_line(48, ng0);

LAB37:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB27;

LAB23:    xsi_set_current_line(52, ng0);

LAB38:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB27;

LAB25:    xsi_set_current_line(56, ng0);

LAB39:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng4)));
    t5 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB27;

LAB30:    t25 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(40, ng0);

LAB35:    xsi_set_current_line(41, ng0);
    t32 = ((char*)((ng3)));
    t33 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 2, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB34;

LAB42:    xsi_set_current_line(67, ng0);
    t7 = (t0 + 3160U);
    t9 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t12, 0, 8);
    t10 = (t9 + 4);
    t25 = (t7 + 4);
    t13 = *((unsigned int *)t9);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t10);
    t17 = *((unsigned int *)t25);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t25);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB54;

LAB51:    if (t22 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t12) = 1;

LAB54:    t32 = (t12 + 4);
    t27 = *((unsigned int *)t32);
    t28 = (~(t27));
    t29 = *((unsigned int *)t12);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(71, ng0);

LAB59:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB57:    goto LAB50;

LAB44:    xsi_set_current_line(75, ng0);

LAB60:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB50;

LAB46:    xsi_set_current_line(79, ng0);

LAB61:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB50;

LAB48:    xsi_set_current_line(83, ng0);

LAB62:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB50;

LAB53:    t26 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB54;

LAB55:    xsi_set_current_line(67, ng0);

LAB58:    xsi_set_current_line(68, ng0);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 2, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB57;

}


extern void work_m_00000000003726751932_4020927633_init()
{
	static char *pe[] = {(void *)Initial_18_0,(void *)Always_22_1,(void *)Always_30_2};
	xsi_register_didat("work_m_00000000003726751932_4020927633", "isim/FSM_ColSel_circuit_tb_isim_beh.exe.sim/work/m_00000000003726751932_4020927633.didat");
	xsi_register_executes(pe);
}
