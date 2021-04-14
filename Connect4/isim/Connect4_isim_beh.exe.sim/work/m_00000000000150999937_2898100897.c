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
static const char *ng0 = "C:/Users/vince/Desktop/Xilinx Projects/INEL5206-Connect4/Connect4/column_counter.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {4U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {8U, 0U};
static int ng9[] = {3, 0};



static void Initial_31_0(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(31, ng0);

LAB2:    xsi_set_current_line(32, ng0);
    xsi_set_current_line(32, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1928);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1768);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 4);

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB6:    xsi_set_current_line(33, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2088);
    t16 = (t0 + 2088);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 2088);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 1928);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1928);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t15), t35);
    goto LAB8;

}

static void Always_39_1(char *t0)
{
    char t10[8];
    char t19[8];
    char t21[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned int t31;
    int t32;
    char *t33;
    unsigned int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    int t39;
    int t40;

LAB0:    t1 = (t0 + 3256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3576);
    *((int *)t2) = 1;
    t3 = (t0 + 3288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2088);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t10, 32, t4, t9, t13, 2, 1, t14, 32, 1);
    t15 = ((char*)((ng1)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t10, 32, t15, 32);
    t16 = (t0 + 2088);
    t17 = (t0 + 2088);
    t18 = (t17 + 72U);
    t20 = *((char **)t18);
    t23 = (t0 + 2088);
    t24 = (t23 + 64U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t21, t22, t20, t25, 2, 1, t26, 32, 1);
    t27 = (t21 + 4);
    t31 = *((unsigned int *)t27);
    t6 = (!(t31));
    t28 = (t22 + 4);
    t34 = *((unsigned int *)t28);
    t32 = (!(t34));
    t35 = (t6 && t32);
    if (t35 == 1)
        goto LAB30;

LAB31:
LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(42, ng0);

LAB18:    xsi_set_current_line(43, ng0);
    t7 = (t0 + 2088);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t0 + 2088);
    t12 = (t11 + 72U);
    t13 = *((char **)t12);
    t14 = (t0 + 2088);
    t15 = (t14 + 64U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t10, 32, t9, t13, t16, 2, 1, t17, 32, 1);
    t18 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t10, 32, t18, 32);
    t20 = (t0 + 2088);
    t23 = (t0 + 2088);
    t24 = (t23 + 72U);
    t25 = *((char **)t24);
    t26 = (t0 + 2088);
    t27 = (t26 + 64U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t21, t22, t25, t28, 2, 1, t29, 32, 1);
    t30 = (t21 + 4);
    t31 = *((unsigned int *)t30);
    t32 = (!(t31));
    t33 = (t22 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB19;

LAB20:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2088);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t10, 32, t4, t9, t13, 2, 1, t14, 32, 1);
    t15 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_multiply(t19, 32, t10, 32, t15, 32);
    t16 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t16, t19, 0, 0, 4, 0LL);
    goto LAB17;

LAB9:    xsi_set_current_line(47, ng0);

LAB21:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 2088);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t10, 32, t7, t11, t14, 2, 1, t15, 32, 1);
    t16 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t10, 32, t16, 32);
    t17 = (t0 + 2088);
    t18 = (t0 + 2088);
    t20 = (t18 + 72U);
    t23 = *((char **)t20);
    t24 = (t0 + 2088);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t21, t22, t23, t26, 2, 1, t27, 32, 1);
    t28 = (t21 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (!(t31));
    t29 = (t22 + 4);
    t34 = *((unsigned int *)t29);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB22;

LAB23:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2088);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t10, 32, t4, t9, t13, 2, 1, t14, 32, 1);
    t15 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_multiply(t19, 32, t10, 32, t15, 32);
    t16 = ((char*)((ng3)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t19, 32, t16, 32);
    t17 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t17, t21, 0, 0, 4, 0LL);
    goto LAB17;

LAB11:    xsi_set_current_line(52, ng0);

LAB24:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 2088);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t10, 32, t7, t11, t14, 2, 1, t15, 32, 1);
    t16 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t10, 32, t16, 32);
    t17 = (t0 + 2088);
    t18 = (t0 + 2088);
    t20 = (t18 + 72U);
    t23 = *((char **)t20);
    t24 = (t0 + 2088);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng7)));
    xsi_vlog_generic_convert_array_indices(t21, t22, t23, t26, 2, 1, t27, 32, 1);
    t28 = (t21 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (!(t31));
    t29 = (t22 + 4);
    t34 = *((unsigned int *)t29);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB25;

LAB26:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2088);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng7)));
    xsi_vlog_generic_get_array_select_value(t10, 32, t4, t9, t13, 2, 1, t14, 32, 1);
    t15 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_multiply(t19, 32, t10, 32, t15, 32);
    t16 = ((char*)((ng7)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t19, 32, t16, 32);
    t17 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t17, t21, 0, 0, 4, 0LL);
    goto LAB17;

LAB13:    xsi_set_current_line(57, ng0);

LAB27:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 2088);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 2088);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = (t0 + 2088);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t10, 32, t7, t11, t14, 2, 1, t15, 32, 1);
    t16 = ((char*)((ng3)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_add(t19, 32, t10, 32, t16, 32);
    t17 = (t0 + 2088);
    t18 = (t0 + 2088);
    t20 = (t18 + 72U);
    t23 = *((char **)t20);
    t24 = (t0 + 2088);
    t25 = (t24 + 64U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng9)));
    xsi_vlog_generic_convert_array_indices(t21, t22, t23, t26, 2, 1, t27, 32, 1);
    t28 = (t21 + 4);
    t31 = *((unsigned int *)t28);
    t32 = (!(t31));
    t29 = (t22 + 4);
    t34 = *((unsigned int *)t29);
    t35 = (!(t34));
    t36 = (t32 && t35);
    if (t36 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 2088);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = (t0 + 2088);
    t12 = (t11 + 64U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng9)));
    xsi_vlog_generic_get_array_select_value(t10, 32, t4, t9, t13, 2, 1, t14, 32, 1);
    t15 = ((char*)((ng2)));
    memset(t19, 0, 8);
    xsi_vlog_unsigned_multiply(t19, 32, t10, 32, t15, 32);
    t16 = ((char*)((ng9)));
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 32, t19, 32, t16, 32);
    t17 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t17, t21, 0, 0, 4, 0LL);
    goto LAB17;

LAB19:    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t22);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, *((unsigned int *)t22), t40, 0LL);
    goto LAB20;

LAB22:    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t22);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t17, t19, 0, *((unsigned int *)t22), t40, 0LL);
    goto LAB23;

LAB25:    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t22);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t17, t19, 0, *((unsigned int *)t22), t40, 0LL);
    goto LAB26;

LAB28:    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t22);
    t39 = (t37 - t38);
    t40 = (t39 + 1);
    xsi_vlogvar_wait_assign_value(t17, t19, 0, *((unsigned int *)t22), t40, 0LL);
    goto LAB29;

LAB30:    t37 = *((unsigned int *)t21);
    t38 = *((unsigned int *)t22);
    t36 = (t37 - t38);
    t39 = (t36 + 1);
    xsi_vlogvar_wait_assign_value(t16, t19, 0, *((unsigned int *)t22), t39, 0LL);
    goto LAB31;

}


extern void work_m_00000000000150999937_2898100897_init()
{
	static char *pe[] = {(void *)Initial_31_0,(void *)Always_39_1};
	xsi_register_didat("work_m_00000000000150999937_2898100897", "isim/Connect4_isim_beh.exe.sim/work/m_00000000000150999937_2898100897.didat");
	xsi_register_executes(pe);
}
