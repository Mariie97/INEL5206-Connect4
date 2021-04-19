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
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {31U, 0U};
static unsigned int ng5[] = {14U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {13U, 0U};
static unsigned int ng8[] = {11U, 0U};
static unsigned int ng9[] = {2U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {3U, 0U};



static void Always_36_0(char *t0)
{
    char t6[8];
    char t35[8];
    char t37[8];
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
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t38;

LAB0:    t1 = (t0 + 3488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 3808);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
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

LAB11:
LAB12:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(44, ng0);

LAB21:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB22:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 5, 0LL);

LAB33:
LAB20:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);

LAB13:    xsi_set_current_line(38, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(43, ng0);
    t21 = ((char*)((ng4)));
    t22 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t22, t21, 0, 0, 5, 0LL);
    goto LAB20;

LAB23:    xsi_set_current_line(46, ng0);

LAB34:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 1928);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB36;

LAB35:    if (t18 != 0)
        goto LAB37;

LAB38:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);

LAB41:    goto LAB33;

LAB25:    xsi_set_current_line(56, ng0);

LAB43:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2088);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB45;

LAB44:    if (t18 != 0)
        goto LAB46;

LAB47:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);

LAB50:    goto LAB33;

LAB27:    xsi_set_current_line(65, ng0);

LAB52:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB54;

LAB53:    if (t18 != 0)
        goto LAB55;

LAB56:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);

LAB59:    goto LAB33;

LAB29:    xsi_set_current_line(73, ng0);

LAB61:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB63;

LAB62:    if (t18 != 0)
        goto LAB64;

LAB65:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 3, 0LL);

LAB68:    goto LAB33;

LAB36:    *((unsigned int *)t6) = 1;
    goto LAB38;

LAB37:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(48, ng0);

LAB42:    xsi_set_current_line(49, ng0);
    t31 = (t0 + 1928);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng6)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_multiply(t35, 5, t33, 3, t34, 5);
    t36 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 5, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 3, t5, 3, t7, 3);
    t8 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 3, 0LL);
    goto LAB41;

LAB45:    *((unsigned int *)t6) = 1;
    goto LAB47;

LAB46:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB47;

LAB48:    xsi_set_current_line(58, ng0);

LAB51:    xsi_set_current_line(59, ng0);
    t31 = (t0 + 2088);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng6)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_multiply(t35, 5, t33, 3, t34, 5);
    t36 = ((char*)((ng1)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 5, t35, 5, t36, 5);
    t38 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 5, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 3, t5, 3, t7, 3);
    t8 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 3, 0LL);
    goto LAB50;

LAB54:    *((unsigned int *)t6) = 1;
    goto LAB56;

LAB55:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(67, ng0);

LAB60:    xsi_set_current_line(68, ng0);
    t31 = (t0 + 2248);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng6)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_multiply(t35, 5, t33, 3, t34, 5);
    t36 = ((char*)((ng9)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 5, t35, 5, t36, 5);
    t38 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 5, 0LL);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2248);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 3, t5, 3, t7, 3);
    t8 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 3, 0LL);
    goto LAB59;

LAB63:    *((unsigned int *)t6) = 1;
    goto LAB65;

LAB64:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(75, ng0);

LAB69:    xsi_set_current_line(76, ng0);
    t31 = (t0 + 2408);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng6)));
    memset(t35, 0, 8);
    xsi_vlog_unsigned_multiply(t35, 5, t33, 3, t34, 5);
    t36 = ((char*)((ng11)));
    memset(t37, 0, 8);
    xsi_vlog_unsigned_add(t37, 5, t35, 5, t36, 5);
    t38 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t38, t37, 0, 0, 5, 0LL);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2408);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 3, t5, 3, t7, 3);
    t8 = (t0 + 2408);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 3, 0LL);
    goto LAB68;

}


extern void work_m_00000000004019228599_3391422663_init()
{
	static char *pe[] = {(void *)Always_36_0};
	xsi_register_didat("work_m_00000000004019228599_3391422663", "isim/FSM_ColSel_circuit_tb_isim_beh.exe.sim/work/m_00000000004019228599_3391422663.didat");
	xsi_register_executes(pe);
}
