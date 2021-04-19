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
static int ng1[] = {0, 0};
static int ng2[] = {16, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {31U, 0U};
static unsigned int ng7[] = {2U, 0U};



static void Initial_16_0(char *t0)
{
    char t5[8];
    char t14[8];
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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    int t23;

LAB0:    xsi_set_current_line(16, ng0);

LAB2:    xsi_set_current_line(17, ng0);
    xsi_set_current_line(17, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2632);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2632);
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

LAB5:    xsi_set_current_line(21, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2472);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB6:    xsi_set_current_line(18, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2152);
    t15 = (t0 + 2152);
    t16 = (t15 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 2632);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_bit_index(t14, t17, 2, t20, 32, 1);
    t21 = (t14 + 4);
    t22 = *((unsigned int *)t21);
    t23 = (!(t22));
    if (t23 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(19, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 2312);
    t3 = (t0 + 2312);
    t4 = (t3 + 72U);
    t6 = *((char **)t4);
    t12 = (t0 + 2632);
    t13 = (t12 + 56U);
    t15 = *((char **)t13);
    xsi_vlog_generic_convert_bit_index(t5, t6, 2, t15, 32, 1);
    t16 = (t5 + 4);
    t7 = *((unsigned int *)t16);
    t23 = (!(t7));
    if (t23 == 1)
        goto LAB9;

LAB10:    xsi_set_current_line(17, ng0);
    t1 = (t0 + 2632);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2632);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    xsi_vlogvar_assign_value(t13, t12, 0, *((unsigned int *)t14), 1);
    goto LAB8;

LAB9:    xsi_vlogvar_assign_value(t2, t1, 0, *((unsigned int *)t5), 1);
    goto LAB10;

}

static void Always_25_1(char *t0)
{
    char t9[8];
    char t23[8];
    char t39[8];
    char t55[8];
    char t63[8];
    char t103[8];
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
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    int t87;
    int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t104;
    char *t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    int t110;

LAB0:    t1 = (t0 + 3800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 4120);
    *((int *)t2) = 1;
    t3 = (t0 + 3832);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(28, ng0);

LAB14:    xsi_set_current_line(29, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 2152);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 16, 0LL);
    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB13;

LAB9:    xsi_set_current_line(33, ng0);

LAB15:    xsi_set_current_line(34, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
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
        goto LAB17;

LAB16:    if (t19 != 0)
        goto LAB18;

LAB19:    memset(t23, 0, 8);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t24) != 0)
        goto LAB22;

LAB23:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB24;

LAB25:    memcpy(t63, t23, 8);

LAB26:    t95 = (t63 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t63);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB13;

LAB11:    xsi_set_current_line(40, ng0);

LAB46:    xsi_set_current_line(41, ng0);
    t3 = (t0 + 1592U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng6)));
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
        goto LAB48;

LAB47:    if (t19 != 0)
        goto LAB49;

LAB50:    memset(t23, 0, 8);
    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t24) != 0)
        goto LAB53;

LAB54:    t31 = (t23 + 4);
    t32 = *((unsigned int *)t23);
    t33 = *((unsigned int *)t31);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB55;

LAB56:    memcpy(t63, t23, 8);

LAB57:    t95 = (t63 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t63);
    t99 = (t98 & t97);
    t100 = (t99 != 0);
    if (t100 > 0)
        goto LAB69;

LAB70:
LAB71:    goto LAB13;

LAB17:    *((unsigned int *)t9) = 1;
    goto LAB19;

LAB18:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t23) = 1;
    goto LAB23;

LAB22:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB23;

LAB24:    t35 = (t0 + 2472);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng1)));
    memset(t39, 0, 8);
    t40 = (t37 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB30;

LAB27:    if (t51 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t39) = 1;

LAB30:    memset(t55, 0, 8);
    t56 = (t39 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t39);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t56) != 0)
        goto LAB33;

LAB34:    t64 = *((unsigned int *)t23);
    t65 = *((unsigned int *)t55);
    t66 = (t64 & t65);
    *((unsigned int *)t63) = t66;
    t67 = (t23 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB26;

LAB29:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t55) = 1;
    goto LAB34;

LAB33:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB34;

LAB35:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t23 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t23);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t55);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t87 = (t80 & t82);
    t88 = (t84 & t86);
    t89 = (~(t87));
    t90 = (~(t88));
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t89);
    t94 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t94 & t90);
    goto LAB37;

LAB38:    xsi_set_current_line(34, ng0);

LAB41:    xsi_set_current_line(35, ng0);
    t101 = ((char*)((ng3)));
    t102 = (t0 + 2152);
    t104 = (t0 + 2152);
    t105 = (t104 + 72U);
    t106 = *((char **)t105);
    t107 = (t0 + 1592U);
    t108 = *((char **)t107);
    xsi_vlog_generic_convert_bit_index(t103, t106, 2, t108, 5, 2);
    t107 = (t103 + 4);
    t109 = *((unsigned int *)t107);
    t110 = (!(t109));
    if (t110 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    t4 = (t0 + 2312);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t22 = (t0 + 1592U);
    t24 = *((char **)t22);
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t24, 5, 2);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t22);
    t6 = (!(t10));
    if (t6 == 1)
        goto LAB44;

LAB45:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB40;

LAB42:    xsi_vlogvar_wait_assign_value(t102, t101, 0, *((unsigned int *)t103), 1, 0LL);
    goto LAB43;

LAB44:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB45;

LAB48:    *((unsigned int *)t9) = 1;
    goto LAB50;

LAB49:    t22 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB50;

LAB51:    *((unsigned int *)t23) = 1;
    goto LAB54;

LAB53:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB54;

LAB55:    t35 = (t0 + 2472);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = ((char*)((ng3)));
    memset(t39, 0, 8);
    t40 = (t37 + 4);
    t41 = (t38 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t38);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t40);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t40);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB61;

LAB58:    if (t51 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t39) = 1;

LAB61:    memset(t55, 0, 8);
    t56 = (t39 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t39);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t56) != 0)
        goto LAB64;

LAB65:    t64 = *((unsigned int *)t23);
    t65 = *((unsigned int *)t55);
    t66 = (t64 & t65);
    *((unsigned int *)t63) = t66;
    t67 = (t23 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB66;

LAB67:
LAB68:    goto LAB57;

LAB60:    t54 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t55) = 1;
    goto LAB65;

LAB64:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB65;

LAB66:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t23 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t23);
    t80 = (~(t79));
    t81 = *((unsigned int *)t77);
    t82 = (~(t81));
    t83 = *((unsigned int *)t55);
    t84 = (~(t83));
    t85 = *((unsigned int *)t78);
    t86 = (~(t85));
    t87 = (t80 & t82);
    t88 = (t84 & t86);
    t89 = (~(t87));
    t90 = (~(t88));
    t91 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t91 & t89);
    t92 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t92 & t90);
    t93 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t93 & t89);
    t94 = *((unsigned int *)t63);
    *((unsigned int *)t63) = (t94 & t90);
    goto LAB68;

LAB69:    xsi_set_current_line(41, ng0);

LAB72:    xsi_set_current_line(42, ng0);
    t101 = ((char*)((ng3)));
    t102 = (t0 + 2152);
    t104 = (t0 + 2152);
    t105 = (t104 + 72U);
    t106 = *((char **)t105);
    t107 = (t0 + 1592U);
    t108 = *((char **)t107);
    xsi_vlog_generic_convert_bit_index(t103, t106, 2, t108, 5, 2);
    t107 = (t103 + 4);
    t109 = *((unsigned int *)t107);
    t110 = (!(t109));
    if (t110 == 1)
        goto LAB73;

LAB74:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2312);
    t4 = (t0 + 2312);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t22 = (t0 + 1592U);
    t24 = *((char **)t22);
    xsi_vlog_generic_convert_bit_index(t9, t8, 2, t24, 5, 2);
    t22 = (t9 + 4);
    t10 = *((unsigned int *)t22);
    t6 = (!(t10));
    if (t6 == 1)
        goto LAB75;

LAB76:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB71;

LAB73:    xsi_vlogvar_wait_assign_value(t102, t101, 0, *((unsigned int *)t103), 1, 0LL);
    goto LAB74;

LAB75:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t9), 1, 0LL);
    goto LAB76;

}


extern void work_m_00000000003357041890_3348356461_init()
{
	static char *pe[] = {(void *)Initial_16_0,(void *)Always_25_1};
	xsi_register_didat("work_m_00000000003357041890_3348356461", "isim/FSM_ColSel_circuit_tb_isim_beh.exe.sim/work/m_00000000003357041890_3348356461.didat");
	xsi_register_executes(pe);
}
