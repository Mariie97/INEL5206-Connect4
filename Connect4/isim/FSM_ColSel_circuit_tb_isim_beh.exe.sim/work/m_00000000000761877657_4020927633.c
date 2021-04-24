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
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);

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
    int t30;
    int t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 4888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 5208);
    *((int *)t2) = 1;
    t3 = (t0 + 4920);
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

LAB13:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3720);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB14:    t5 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB21;

LAB22:
LAB23:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(24, ng0);
    t28 = ((char*)((ng1)));
    t29 = (t0 + 3720);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 2);
    goto LAB12;

LAB15:    xsi_set_current_line(27, ng0);

LAB24:    xsi_set_current_line(28, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 3720);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 2);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB23;

LAB17:    xsi_set_current_line(31, ng0);

LAB25:    xsi_set_current_line(32, ng0);
    t3 = (t0 + 3000U);
    t5 = *((char **)t3);

LAB26:    t3 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t31 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB23;

LAB19:    xsi_set_current_line(56, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 3720);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 2);
    goto LAB23;

LAB21:    xsi_set_current_line(58, ng0);

LAB48:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 3000U);
    t7 = *((char **)t3);

LAB49:    t3 = ((char*)((ng1)));
    t31 = xsi_vlog_unsigned_case_compare(t7, 2, t3, 2);
    if (t31 == 1)
        goto LAB50;

LAB51:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t30 == 1)
        goto LAB52;

LAB53:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t30 == 1)
        goto LAB54;

LAB55:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t30 == 1)
        goto LAB56;

LAB57:
LAB58:    goto LAB23;

LAB27:    xsi_set_current_line(33, ng0);
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
        goto LAB39;

LAB36:    if (t18 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t6) = 1;

LAB39:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(37, ng0);

LAB44:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB42:    goto LAB35;

LAB29:    xsi_set_current_line(41, ng0);

LAB45:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 3720);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 2);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB35;

LAB31:    xsi_set_current_line(45, ng0);

LAB46:    xsi_set_current_line(46, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 3720);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 2);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB35;

LAB33:    xsi_set_current_line(49, ng0);

LAB47:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng4)));
    t7 = (t0 + 3720);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 2);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB35;

LAB38:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(33, ng0);

LAB43:    xsi_set_current_line(34, ng0);
    t32 = ((char*)((ng3)));
    t33 = (t0 + 3720);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 2);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB42;

LAB50:    xsi_set_current_line(60, ng0);
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
        goto LAB62;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t6) = 1;

LAB62:    t32 = (t6 + 4);
    t23 = *((unsigned int *)t32);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(64, ng0);

LAB67:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3720);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB65:    goto LAB58;

LAB52:    xsi_set_current_line(68, ng0);

LAB68:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng4)));
    t8 = (t0 + 3720);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 2);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB58;

LAB54:    xsi_set_current_line(72, ng0);

LAB69:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng4)));
    t8 = (t0 + 3720);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 2);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB58;

LAB56:    xsi_set_current_line(76, ng0);

LAB70:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng4)));
    t8 = (t0 + 3720);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 2);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB58;

LAB61:    t29 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(60, ng0);

LAB66:    xsi_set_current_line(61, ng0);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 3720);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 2);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3560);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB65;

}


extern void work_m_00000000000761877657_4020927633_init()
{
	static char *pe[] = {(void *)Initial_18_0,(void *)Always_22_1};
	xsi_register_didat("work_m_00000000000761877657_4020927633", "isim/FSM_ColSel_circuit_tb_isim_beh.exe.sim/work/m_00000000000761877657_4020927633.didat");
	xsi_register_executes(pe);
}
