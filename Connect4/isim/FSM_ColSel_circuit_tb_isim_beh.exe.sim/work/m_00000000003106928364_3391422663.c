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



static void Always_30_0(char *t0)
{
    char t6[8];
    char t29[8];
    char t38[8];
    char t49[8];
    char t51[8];
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
    unsigned int t30;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t50;
    char *t52;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1048U);
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

LAB11:    xsi_set_current_line(34, ng0);

LAB13:    xsi_set_current_line(35, ng0);
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
LAB23:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);

LAB25:
LAB12:    goto LAB2;

LAB8:    t19 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(33, ng0);
    t26 = ((char*)((ng3)));
    t27 = (t0 + 1768);
    xsi_vlogvar_assign_value(t27, t26, 0, 0, 5);
    goto LAB12;

LAB15:    xsi_set_current_line(36, ng0);

LAB26:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t19 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t19);
    t10 = (t9 >> 0);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 7U);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t20 = ((char*)((ng5)));
    memset(t29, 0, 8);
    t26 = (t6 + 4);
    t27 = (t20 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t20);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t26);
    t17 = *((unsigned int *)t27);
    t18 = (t16 ^ t17);
    t21 = (t15 | t18);
    t22 = *((unsigned int *)t26);
    t23 = *((unsigned int *)t27);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t30 = (t21 & t25);
    if (t30 != 0)
        goto LAB28;

LAB27:    if (t24 != 0)
        goto LAB29;

LAB30:    t32 = (t29 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t29);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB31;

LAB32:
LAB33:    goto LAB25;

LAB17:    xsi_set_current_line(45, ng0);

LAB35:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t19 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 3);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t19);
    t10 = (t9 >> 3);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 7U);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t20 = ((char*)((ng5)));
    memset(t29, 0, 8);
    t26 = (t6 + 4);
    t27 = (t20 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t20);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t26);
    t17 = *((unsigned int *)t27);
    t18 = (t16 ^ t17);
    t21 = (t15 | t18);
    t22 = *((unsigned int *)t26);
    t23 = *((unsigned int *)t27);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t30 = (t21 & t25);
    if (t30 != 0)
        goto LAB37;

LAB36:    if (t24 != 0)
        goto LAB38;

LAB39:    t32 = (t29 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t29);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB40;

LAB41:
LAB42:    goto LAB25;

LAB19:    xsi_set_current_line(53, ng0);

LAB44:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t19 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 6);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t19);
    t10 = (t9 >> 6);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 7U);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t20 = ((char*)((ng5)));
    memset(t29, 0, 8);
    t26 = (t6 + 4);
    t27 = (t20 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t20);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t26);
    t17 = *((unsigned int *)t27);
    t18 = (t16 ^ t17);
    t21 = (t15 | t18);
    t22 = *((unsigned int *)t26);
    t23 = *((unsigned int *)t27);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t30 = (t21 & t25);
    if (t30 != 0)
        goto LAB46;

LAB45:    if (t24 != 0)
        goto LAB47;

LAB48:    t32 = (t29 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t29);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB49;

LAB50:
LAB51:    goto LAB25;

LAB21:    xsi_set_current_line(60, ng0);

LAB53:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t19 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 9);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t19);
    t10 = (t9 >> 9);
    *((unsigned int *)t4) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 7U);
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 7U);
    t20 = ((char*)((ng5)));
    memset(t29, 0, 8);
    t26 = (t6 + 4);
    t27 = (t20 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t20);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t26);
    t17 = *((unsigned int *)t27);
    t18 = (t16 ^ t17);
    t21 = (t15 | t18);
    t22 = *((unsigned int *)t26);
    t23 = *((unsigned int *)t27);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t30 = (t21 & t25);
    if (t30 != 0)
        goto LAB55;

LAB54:    if (t24 != 0)
        goto LAB56;

LAB57:    t32 = (t29 + 4);
    t33 = *((unsigned int *)t32);
    t34 = (~(t33));
    t35 = *((unsigned int *)t29);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB58;

LAB59:
LAB60:    goto LAB25;

LAB28:    *((unsigned int *)t29) = 1;
    goto LAB30;

LAB29:    t31 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB30;

LAB31:    xsi_set_current_line(38, ng0);

LAB34:    xsi_set_current_line(39, ng0);
    t39 = (t0 + 1208U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t41 = (t40 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 0);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 0);
    *((unsigned int *)t39) = t45;
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 7U);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 7U);
    t48 = ((char*)((ng5)));
    memset(t49, 0, 8);
    xsi_vlog_unsigned_multiply(t49, 5, t38, 5, t48, 5);
    t50 = (t0 + 1768);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 5);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB33;

LAB37:    *((unsigned int *)t29) = 1;
    goto LAB39;

LAB38:    t31 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(47, ng0);

LAB43:    xsi_set_current_line(48, ng0);
    t39 = (t0 + 1208U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t41 = (t40 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 3);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 3);
    *((unsigned int *)t39) = t45;
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 7U);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 7U);
    t48 = ((char*)((ng5)));
    memset(t49, 0, 8);
    xsi_vlog_unsigned_multiply(t49, 5, t38, 5, t48, 5);
    t50 = ((char*)((ng8)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 5, t49, 5, t50, 5);
    t52 = (t0 + 1768);
    xsi_vlogvar_assign_value(t52, t51, 0, 0, 5);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB42;

LAB46:    *((unsigned int *)t29) = 1;
    goto LAB48;

LAB47:    t31 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(55, ng0);

LAB52:    xsi_set_current_line(56, ng0);
    t39 = (t0 + 1208U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t41 = (t40 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 6);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 6);
    *((unsigned int *)t39) = t45;
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 7U);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 7U);
    t48 = ((char*)((ng5)));
    memset(t49, 0, 8);
    xsi_vlog_unsigned_multiply(t49, 5, t38, 5, t48, 5);
    t50 = ((char*)((ng10)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 5, t49, 5, t50, 5);
    t52 = (t0 + 1768);
    xsi_vlogvar_assign_value(t52, t51, 0, 0, 5);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB51;

LAB55:    *((unsigned int *)t29) = 1;
    goto LAB57;

LAB56:    t31 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(62, ng0);

LAB61:    xsi_set_current_line(63, ng0);
    t39 = (t0 + 1208U);
    t40 = *((char **)t39);
    memset(t38, 0, 8);
    t39 = (t38 + 4);
    t41 = (t40 + 4);
    t42 = *((unsigned int *)t40);
    t43 = (t42 >> 9);
    *((unsigned int *)t38) = t43;
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 9);
    *((unsigned int *)t39) = t45;
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 7U);
    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 7U);
    t48 = ((char*)((ng5)));
    memset(t49, 0, 8);
    xsi_vlog_unsigned_multiply(t49, 5, t38, 5, t48, 5);
    t50 = ((char*)((ng12)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_add(t51, 5, t49, 5, t50, 5);
    t52 = (t0 + 1768);
    xsi_vlogvar_assign_value(t52, t51, 0, 0, 5);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB60;

}


extern void work_m_00000000003106928364_3391422663_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000003106928364_3391422663", "isim/FSM_ColSel_circuit_tb_isim_beh.exe.sim/work/m_00000000003106928364_3391422663.didat");
	xsi_register_executes(pe);
}
