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
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {2U, 0U};



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
    int t31;
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
    t4 = (t0 + 3000U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
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

LAB11:    xsi_set_current_line(38, ng0);

LAB14:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB22;

LAB23:
LAB24:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(34, ng0);

LAB13:    xsi_set_current_line(35, ng0);
    t28 = ((char*)((ng3)));
    t29 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB12;

LAB16:    xsi_set_current_line(40, ng0);

LAB25:    xsi_set_current_line(41, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 2, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB24;

LAB18:    xsi_set_current_line(44, ng0);

LAB26:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 3000U);
    t5 = *((char **)t3);

LAB27:    t3 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t31 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB24;

LAB20:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng3)));
    t7 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 2, 0LL);
    goto LAB24;

LAB22:    xsi_set_current_line(71, ng0);

LAB49:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 3000U);
    t7 = *((char **)t3);

LAB50:    t3 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t7, 2, t3, 2);
    if (t31 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t30 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t30 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t30 == 1)
        goto LAB57;

LAB58:
LAB60:
LAB59:    xsi_set_current_line(93, ng0);

LAB74:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB61:    goto LAB24;

LAB28:    xsi_set_current_line(46, ng0);
    t7 = (t0 + 3160U);
    t8 = *((char **)t7);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t21 = (t8 + 4);
    t22 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = *((unsigned int *)t7);
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
        goto LAB40;

LAB37:    if (t18 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t6) = 1;

LAB40:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB41;

LAB42:    xsi_set_current_line(50, ng0);

LAB45:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB43:    goto LAB36;

LAB30:    xsi_set_current_line(54, ng0);

LAB46:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng3)));
    t7 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB36;

LAB32:    xsi_set_current_line(58, ng0);

LAB47:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng3)));
    t7 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB36;

LAB34:    xsi_set_current_line(62, ng0);

LAB48:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng3)));
    t7 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t7, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB36;

LAB39:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(46, ng0);

LAB44:    xsi_set_current_line(47, ng0);
    t32 = ((char*)((ng4)));
    t33 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 2, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB43;

LAB51:    xsi_set_current_line(73, ng0);
    t8 = (t0 + 3160U);
    t21 = *((char **)t8);
    t8 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t22 = (t21 + 4);
    t28 = (t8 + 4);
    t9 = *((unsigned int *)t21);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t22);
    t13 = *((unsigned int *)t28);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t22);
    t17 = *((unsigned int *)t28);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB65;

LAB62:    if (t18 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t6) = 1;

LAB65:    t32 = (t6 + 4);
    t23 = *((unsigned int *)t32);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(77, ng0);

LAB70:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB68:    goto LAB61;

LAB53:    xsi_set_current_line(81, ng0);

LAB71:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng3)));
    t8 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB61;

LAB55:    xsi_set_current_line(85, ng0);

LAB72:    xsi_set_current_line(86, ng0);
    t3 = ((char*)((ng3)));
    t8 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB61;

LAB57:    xsi_set_current_line(89, ng0);

LAB73:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng3)));
    t8 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t8, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB61;

LAB64:    t29 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(73, ng0);

LAB69:    xsi_set_current_line(74, ng0);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 3880);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 2, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB68;

}


extern void work_m_00000000003726751932_4020927633_init()
{
	static char *pe[] = {(void *)Initial_18_0,(void *)Always_22_1,(void *)Always_30_2};
	xsi_register_didat("work_m_00000000003726751932_4020927633", "isim/FSM_ColSel_circuit_isim_beh.exe.sim/work/m_00000000003726751932_4020927633.didat");
	xsi_register_executes(pe);
}
