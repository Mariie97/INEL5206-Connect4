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
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {31U, 0U};
static unsigned int ng3[] = {14U, 0U};
static int ng4[] = {0, 0};
static int ng5[] = {16, 0};
static int ng6[] = {1, 0};
static int ng7[] = {4, 0};
static unsigned int ng8[] = {1U, 0U};
static unsigned int ng9[] = {13U, 0U};
static unsigned int ng10[] = {11U, 0U};
static int ng11[] = {2, 0};
static unsigned int ng12[] = {7U, 0U};
static int ng13[] = {3, 0};



static void Always_33_0(char *t0)
{
    char t6[8];
    char t31[8];
    char t36[8];
    char t40[8];
    char t56[8];
    char t72[8];
    char t80[8];
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
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    char *t117;
    char *t118;
    char *t119;
    char *t120;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(35, ng0);
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

LAB11:    xsi_set_current_line(36, ng0);

LAB13:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);

LAB14:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t30 == 1)
        goto LAB21;

LAB22:
LAB24:
LAB23:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 5);

LAB25:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(35, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1768);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 5);
    goto LAB12;

LAB15:    xsi_set_current_line(38, ng0);

LAB26:    xsi_set_current_line(39, ng0);
    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB27:    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t5, 32, t7, 32);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB60;

LAB57:    if (t18 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t6) = 1;

LAB60:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 5, 0LL);

LAB63:    goto LAB25;

LAB17:    xsi_set_current_line(52, ng0);

LAB65:    xsi_set_current_line(53, ng0);
    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng6)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB66:    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t5, 32, t7, 32);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB67;

LAB68:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB99;

LAB96:    if (t18 != 0)
        goto LAB98;

LAB97:    *((unsigned int *)t6) = 1;

LAB99:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 5, 0LL);

LAB102:    goto LAB25;

LAB19:    xsi_set_current_line(66, ng0);

LAB104:    xsi_set_current_line(67, ng0);
    xsi_set_current_line(67, ng0);
    t4 = ((char*)((ng11)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB105:    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t5, 32, t7, 32);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB138;

LAB135:    if (t18 != 0)
        goto LAB137;

LAB136:    *((unsigned int *)t6) = 1;

LAB138:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB139;

LAB140:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 5, 0LL);

LAB141:    goto LAB25;

LAB21:    xsi_set_current_line(79, ng0);

LAB143:    xsi_set_current_line(80, ng0);
    xsi_set_current_line(80, ng0);
    t4 = ((char*)((ng13)));
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB144:    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t5, 32, t7, 32);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB145;

LAB146:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB177;

LAB174:    if (t18 != 0)
        goto LAB176;

LAB175:    *((unsigned int *)t6) = 1;

LAB177:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB178;

LAB179:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng2)));
    t4 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 5, 0LL);

LAB180:    goto LAB25;

LAB28:    xsi_set_current_line(39, ng0);

LAB30:    xsi_set_current_line(40, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1168U);
    t28 = (t21 + 72U);
    t29 = *((char **)t28);
    t32 = (t0 + 1928);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_index_select_value(t31, 1, t22, t29, 2, t34, 32, 1);
    t35 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t37 = (t31 + 4);
    t38 = (t35 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t35);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t37);
    t18 = *((unsigned int *)t38);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t23 = *((unsigned int *)t37);
    t24 = *((unsigned int *)t38);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB34;

LAB31:    if (t25 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t36) = 1;

LAB34:    memset(t40, 0, 8);
    t41 = (t36 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t36);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB35;

LAB36:    if (*((unsigned int *)t41) != 0)
        goto LAB37;

LAB38:    t48 = (t40 + 4);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB39;

LAB40:    memcpy(t80, t40, 8);

LAB41:    t111 = (t80 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t80);
    t115 = (t114 & t113);
    t116 = (t115 != 0);
    if (t116 > 0)
        goto LAB53;

LAB54:
LAB55:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB27;

LAB33:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB34;

LAB35:    *((unsigned int *)t40) = 1;
    goto LAB38;

LAB37:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB38;

LAB39:    t52 = (t0 + 2088);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng1)));
    memset(t56, 0, 8);
    t57 = (t54 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t57);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB45;

LAB42:    if (t68 != 0)
        goto LAB44;

LAB43:    *((unsigned int *)t56) = 1;

LAB45:    memset(t72, 0, 8);
    t73 = (t56 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t56);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB46;

LAB47:    if (*((unsigned int *)t73) != 0)
        goto LAB48;

LAB49:    t81 = *((unsigned int *)t40);
    t82 = *((unsigned int *)t72);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t40 + 4);
    t85 = (t72 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB50;

LAB51:
LAB52:    goto LAB41;

LAB44:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB45;

LAB46:    *((unsigned int *)t72) = 1;
    goto LAB49;

LAB48:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB49;

LAB50:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t40 + 4);
    t95 = (t72 + 4);
    t96 = *((unsigned int *)t40);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t72);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t30 = (t97 & t99);
    t104 = (t101 & t103);
    t105 = (~(t30));
    t106 = (~(t104));
    t107 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t107 & t105);
    t108 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t108 & t106);
    t109 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t109 & t105);
    t110 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t110 & t106);
    goto LAB52;

LAB53:    xsi_set_current_line(40, ng0);

LAB56:    xsi_set_current_line(41, ng0);
    t117 = (t0 + 1928);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t120, t119, 0, 0, 5, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB55;

LAB59:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB60;

LAB61:    xsi_set_current_line(45, ng0);

LAB64:    xsi_set_current_line(46, ng0);
    t29 = (t0 + 2248);
    t32 = (t29 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 5, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB63;

LAB67:    xsi_set_current_line(53, ng0);

LAB69:    xsi_set_current_line(54, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1168U);
    t28 = (t21 + 72U);
    t29 = *((char **)t28);
    t32 = (t0 + 1928);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_index_select_value(t31, 1, t22, t29, 2, t34, 32, 1);
    t35 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t37 = (t31 + 4);
    t38 = (t35 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t35);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t37);
    t18 = *((unsigned int *)t38);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t23 = *((unsigned int *)t37);
    t24 = *((unsigned int *)t38);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB73;

LAB70:    if (t25 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t36) = 1;

LAB73:    memset(t40, 0, 8);
    t41 = (t36 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t36);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t41) != 0)
        goto LAB76;

LAB77:    t48 = (t40 + 4);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB78;

LAB79:    memcpy(t80, t40, 8);

LAB80:    t111 = (t80 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t80);
    t115 = (t114 & t113);
    t116 = (t115 != 0);
    if (t116 > 0)
        goto LAB92;

LAB93:
LAB94:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB66;

LAB72:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB73;

LAB74:    *((unsigned int *)t40) = 1;
    goto LAB77;

LAB76:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB77;

LAB78:    t52 = (t0 + 2088);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng1)));
    memset(t56, 0, 8);
    t57 = (t54 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t57);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB84;

LAB81:    if (t68 != 0)
        goto LAB83;

LAB82:    *((unsigned int *)t56) = 1;

LAB84:    memset(t72, 0, 8);
    t73 = (t56 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t56);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB85;

LAB86:    if (*((unsigned int *)t73) != 0)
        goto LAB87;

LAB88:    t81 = *((unsigned int *)t40);
    t82 = *((unsigned int *)t72);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t40 + 4);
    t85 = (t72 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB89;

LAB90:
LAB91:    goto LAB80;

LAB83:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB84;

LAB85:    *((unsigned int *)t72) = 1;
    goto LAB88;

LAB87:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB88;

LAB89:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t40 + 4);
    t95 = (t72 + 4);
    t96 = *((unsigned int *)t40);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t72);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t30 = (t97 & t99);
    t104 = (t101 & t103);
    t105 = (~(t30));
    t106 = (~(t104));
    t107 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t107 & t105);
    t108 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t108 & t106);
    t109 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t109 & t105);
    t110 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t110 & t106);
    goto LAB91;

LAB92:    xsi_set_current_line(54, ng0);

LAB95:    xsi_set_current_line(55, ng0);
    t117 = (t0 + 1928);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t120, t119, 0, 0, 5, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB94;

LAB98:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB99;

LAB100:    xsi_set_current_line(59, ng0);

LAB103:    xsi_set_current_line(60, ng0);
    t29 = (t0 + 2248);
    t32 = (t29 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 5, 0LL);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB102;

LAB106:    xsi_set_current_line(67, ng0);

LAB108:    xsi_set_current_line(68, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1168U);
    t28 = (t21 + 72U);
    t29 = *((char **)t28);
    t32 = (t0 + 1928);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_index_select_value(t31, 1, t22, t29, 2, t34, 32, 1);
    t35 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t37 = (t31 + 4);
    t38 = (t35 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t35);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t37);
    t18 = *((unsigned int *)t38);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t23 = *((unsigned int *)t37);
    t24 = *((unsigned int *)t38);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB112;

LAB109:    if (t25 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t36) = 1;

LAB112:    memset(t40, 0, 8);
    t41 = (t36 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t36);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t41) != 0)
        goto LAB115;

LAB116:    t48 = (t40 + 4);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB117;

LAB118:    memcpy(t80, t40, 8);

LAB119:    t111 = (t80 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t80);
    t115 = (t114 & t113);
    t116 = (t115 != 0);
    if (t116 > 0)
        goto LAB131;

LAB132:
LAB133:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB105;

LAB111:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB112;

LAB113:    *((unsigned int *)t40) = 1;
    goto LAB116;

LAB115:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB116;

LAB117:    t52 = (t0 + 2088);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng1)));
    memset(t56, 0, 8);
    t57 = (t54 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t57);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB123;

LAB120:    if (t68 != 0)
        goto LAB122;

LAB121:    *((unsigned int *)t56) = 1;

LAB123:    memset(t72, 0, 8);
    t73 = (t56 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t56);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB124;

LAB125:    if (*((unsigned int *)t73) != 0)
        goto LAB126;

LAB127:    t81 = *((unsigned int *)t40);
    t82 = *((unsigned int *)t72);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t40 + 4);
    t85 = (t72 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB128;

LAB129:
LAB130:    goto LAB119;

LAB122:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB123;

LAB124:    *((unsigned int *)t72) = 1;
    goto LAB127;

LAB126:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB127;

LAB128:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t40 + 4);
    t95 = (t72 + 4);
    t96 = *((unsigned int *)t40);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t72);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t30 = (t97 & t99);
    t104 = (t101 & t103);
    t105 = (~(t30));
    t106 = (~(t104));
    t107 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t107 & t105);
    t108 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t108 & t106);
    t109 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t109 & t105);
    t110 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t110 & t106);
    goto LAB130;

LAB131:    xsi_set_current_line(68, ng0);

LAB134:    xsi_set_current_line(69, ng0);
    t117 = (t0 + 1928);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t120, t119, 0, 0, 5, 0LL);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB133;

LAB137:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB138;

LAB139:    xsi_set_current_line(73, ng0);

LAB142:    xsi_set_current_line(74, ng0);
    t29 = (t0 + 2248);
    t32 = (t29 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 5, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB141;

LAB145:    xsi_set_current_line(80, ng0);

LAB147:    xsi_set_current_line(81, ng0);
    t21 = (t0 + 1208U);
    t22 = *((char **)t21);
    t21 = (t0 + 1168U);
    t28 = (t21 + 72U);
    t29 = *((char **)t28);
    t32 = (t0 + 1928);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    xsi_vlog_generic_get_index_select_value(t31, 1, t22, t29, 2, t34, 32, 1);
    t35 = ((char*)((ng1)));
    memset(t36, 0, 8);
    t37 = (t31 + 4);
    t38 = (t35 + 4);
    t14 = *((unsigned int *)t31);
    t15 = *((unsigned int *)t35);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t37);
    t18 = *((unsigned int *)t38);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t23 = *((unsigned int *)t37);
    t24 = *((unsigned int *)t38);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB151;

LAB148:    if (t25 != 0)
        goto LAB150;

LAB149:    *((unsigned int *)t36) = 1;

LAB151:    memset(t40, 0, 8);
    t41 = (t36 + 4);
    t42 = *((unsigned int *)t41);
    t43 = (~(t42));
    t44 = *((unsigned int *)t36);
    t45 = (t44 & t43);
    t46 = (t45 & 1U);
    if (t46 != 0)
        goto LAB152;

LAB153:    if (*((unsigned int *)t41) != 0)
        goto LAB154;

LAB155:    t48 = (t40 + 4);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t48);
    t51 = (t49 || t50);
    if (t51 > 0)
        goto LAB156;

LAB157:    memcpy(t80, t40, 8);

LAB158:    t111 = (t80 + 4);
    t112 = *((unsigned int *)t111);
    t113 = (~(t112));
    t114 = *((unsigned int *)t80);
    t115 = (t114 & t113);
    t116 = (t115 != 0);
    if (t116 > 0)
        goto LAB170;

LAB171:
LAB172:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1928);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t5, 32, t7, 32);
    t8 = (t0 + 1928);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);
    goto LAB144;

LAB150:    t39 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB151;

LAB152:    *((unsigned int *)t40) = 1;
    goto LAB155;

LAB154:    t47 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB155;

LAB156:    t52 = (t0 + 2088);
    t53 = (t52 + 56U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng1)));
    memset(t56, 0, 8);
    t57 = (t54 + 4);
    t58 = (t55 + 4);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t57);
    t63 = *((unsigned int *)t58);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t57);
    t67 = *((unsigned int *)t58);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB162;

LAB159:    if (t68 != 0)
        goto LAB161;

LAB160:    *((unsigned int *)t56) = 1;

LAB162:    memset(t72, 0, 8);
    t73 = (t56 + 4);
    t74 = *((unsigned int *)t73);
    t75 = (~(t74));
    t76 = *((unsigned int *)t56);
    t77 = (t76 & t75);
    t78 = (t77 & 1U);
    if (t78 != 0)
        goto LAB163;

LAB164:    if (*((unsigned int *)t73) != 0)
        goto LAB165;

LAB166:    t81 = *((unsigned int *)t40);
    t82 = *((unsigned int *)t72);
    t83 = (t81 & t82);
    *((unsigned int *)t80) = t83;
    t84 = (t40 + 4);
    t85 = (t72 + 4);
    t86 = (t80 + 4);
    t87 = *((unsigned int *)t84);
    t88 = *((unsigned int *)t85);
    t89 = (t87 | t88);
    *((unsigned int *)t86) = t89;
    t90 = *((unsigned int *)t86);
    t91 = (t90 != 0);
    if (t91 == 1)
        goto LAB167;

LAB168:
LAB169:    goto LAB158;

LAB161:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB162;

LAB163:    *((unsigned int *)t72) = 1;
    goto LAB166;

LAB165:    t79 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t79) = 1;
    goto LAB166;

LAB167:    t92 = *((unsigned int *)t80);
    t93 = *((unsigned int *)t86);
    *((unsigned int *)t80) = (t92 | t93);
    t94 = (t40 + 4);
    t95 = (t72 + 4);
    t96 = *((unsigned int *)t40);
    t97 = (~(t96));
    t98 = *((unsigned int *)t94);
    t99 = (~(t98));
    t100 = *((unsigned int *)t72);
    t101 = (~(t100));
    t102 = *((unsigned int *)t95);
    t103 = (~(t102));
    t30 = (t97 & t99);
    t104 = (t101 & t103);
    t105 = (~(t30));
    t106 = (~(t104));
    t107 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t107 & t105);
    t108 = *((unsigned int *)t86);
    *((unsigned int *)t86) = (t108 & t106);
    t109 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t109 & t105);
    t110 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t110 & t106);
    goto LAB169;

LAB170:    xsi_set_current_line(81, ng0);

LAB173:    xsi_set_current_line(82, ng0);
    t117 = (t0 + 1928);
    t118 = (t117 + 56U);
    t119 = *((char **)t118);
    t120 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t120, t119, 0, 0, 5, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB172;

LAB176:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB177;

LAB178:    xsi_set_current_line(86, ng0);

LAB181:    xsi_set_current_line(87, ng0);
    t29 = (t0 + 2248);
    t32 = (t29 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 5, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t4, t2, 0, 0, 1, 0LL);
    goto LAB180;

}


extern void work_m_00000000002727651256_3391422663_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000002727651256_3391422663", "isim/FSM_ColSel_circuit_isim_beh.exe.sim/work/m_00000000002727651256_3391422663.didat");
	xsi_register_executes(pe);
}
