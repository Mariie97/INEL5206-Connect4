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
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {1, 0};



static void Always_22_0(char *t0)
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

LAB0:    t1 = (t0 + 4984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 5552);
    *((int *)t2) = 1;
    t3 = (t0 + 5016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 2704U);
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

LAB11:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 4064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3744);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(24, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 3744);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    goto LAB12;

}

static void Always_30_1(char *t0)
{
    char t6[8];
    char t31[8];
    char t37[8];
    char t53[8];
    char t61[8];
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
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
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
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    char *t100;
    char *t101;

LAB0:    t1 = (t0 + 5232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5568);
    *((int *)t2) = 1;
    t3 = (t0 + 5264);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 3024U);
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

LAB11:    xsi_set_current_line(37, ng0);

LAB14:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3744);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB15:    t5 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t30 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t30 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng3)));
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

LAB10:    xsi_set_current_line(33, ng0);

LAB13:    xsi_set_current_line(34, ng0);
    t28 = ((char*)((ng4)));
    t29 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 2, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB12;

LAB16:    xsi_set_current_line(40, ng0);

LAB25:    xsi_set_current_line(41, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 2, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB24;

LAB18:    xsi_set_current_line(44, ng0);

LAB26:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 2864U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t3 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t3);
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
        goto LAB30;

LAB27:    if (t18 != 0)
        goto LAB29;

LAB28:    *((unsigned int *)t6) = 1;

LAB30:    memset(t31, 0, 8);
    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t22) != 0)
        goto LAB33;

LAB34:    t29 = (t31 + 4);
    t32 = *((unsigned int *)t31);
    t33 = *((unsigned int *)t29);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB35;

LAB36:    memcpy(t61, t31, 8);

LAB37:    t93 = (t61 + 4);
    t94 = *((unsigned int *)t93);
    t95 = (~(t94));
    t96 = *((unsigned int *)t61);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB49;

LAB50:    xsi_set_current_line(51, ng0);

LAB53:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3024U);
    t3 = *((char **)t2);

LAB54:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t30 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t30 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 2);
    if (t30 == 1)
        goto LAB59;

LAB60:
LAB62:
LAB61:    xsi_set_current_line(69, ng0);

LAB75:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);

LAB63:
LAB51:    goto LAB24;

LAB20:    xsi_set_current_line(77, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 2, 0LL);
    goto LAB24;

LAB22:    xsi_set_current_line(79, ng0);

LAB76:    xsi_set_current_line(80, ng0);
    t5 = (t0 + 2864U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t8 = (t7 + 4);
    t21 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t5);
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
        goto LAB80;

LAB77:    if (t18 != 0)
        goto LAB79;

LAB78:    *((unsigned int *)t6) = 1;

LAB80:    memset(t31, 0, 8);
    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t28) != 0)
        goto LAB83;

LAB84:    t35 = (t31 + 4);
    t32 = *((unsigned int *)t31);
    t33 = *((unsigned int *)t35);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB85;

LAB86:    memcpy(t61, t31, 8);

LAB87:    t99 = (t61 + 4);
    t94 = *((unsigned int *)t99);
    t95 = (~(t94));
    t96 = *((unsigned int *)t61);
    t97 = (t96 & t95);
    t98 = (t97 != 0);
    if (t98 > 0)
        goto LAB99;

LAB100:    xsi_set_current_line(86, ng0);

LAB103:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3024U);
    t5 = *((char **)t2);

LAB104:    t2 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB105;

LAB106:    t2 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB107;

LAB108:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t30 == 1)
        goto LAB109;

LAB110:
LAB112:
LAB111:    xsi_set_current_line(105, ng0);

LAB125:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng4)));
    t7 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng4)));
    t7 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 2, 0LL);

LAB113:
LAB101:    goto LAB24;

LAB29:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB30;

LAB31:    *((unsigned int *)t31) = 1;
    goto LAB34;

LAB33:    t28 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB34;

LAB35:    t35 = (t0 + 3184U);
    t36 = *((char **)t35);
    t35 = ((char*)((ng2)));
    memset(t37, 0, 8);
    t38 = (t36 + 4);
    t39 = (t35 + 4);
    t40 = *((unsigned int *)t36);
    t41 = *((unsigned int *)t35);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB41;

LAB38:    if (t49 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t37) = 1;

LAB41:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t54) != 0)
        goto LAB44;

LAB45:    t62 = *((unsigned int *)t31);
    t63 = *((unsigned int *)t53);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t65 = (t31 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB46;

LAB47:
LAB48:    goto LAB37;

LAB40:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t53) = 1;
    goto LAB45;

LAB44:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB45;

LAB46:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t31 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t31);
    t78 = (~(t77));
    t79 = *((unsigned int *)t75);
    t80 = (~(t79));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t76);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t89 & t87);
    t90 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t90 & t88);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t88);
    goto LAB48;

LAB49:    xsi_set_current_line(46, ng0);

LAB52:    xsi_set_current_line(47, ng0);
    t99 = ((char*)((ng1)));
    t100 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t100, t99, 0, 0, 2, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB51;

LAB55:    xsi_set_current_line(53, ng0);
    t5 = (t0 + 3184U);
    t7 = *((char **)t5);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t8 = (t7 + 4);
    t21 = (t5 + 4);
    t9 = *((unsigned int *)t7);
    t10 = *((unsigned int *)t5);
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
        goto LAB67;

LAB64:    if (t18 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t6) = 1;

LAB67:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB68;

LAB69:    xsi_set_current_line(57, ng0);

LAB72:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);

LAB70:    goto LAB63;

LAB57:    xsi_set_current_line(61, ng0);

LAB73:    xsi_set_current_line(62, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng1)));
    t5 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    goto LAB63;

LAB59:    xsi_set_current_line(65, ng0);

LAB74:    xsi_set_current_line(66, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 2, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng4)));
    t5 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    goto LAB63;

LAB66:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(53, ng0);

LAB71:    xsi_set_current_line(54, ng0);
    t29 = ((char*)((ng3)));
    t35 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t35, t29, 0, 0, 2, 0LL);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    goto LAB70;

LAB79:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t31) = 1;
    goto LAB84;

LAB83:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB84;

LAB85:    t36 = (t0 + 3184U);
    t38 = *((char **)t36);
    t36 = ((char*)((ng1)));
    memset(t37, 0, 8);
    t39 = (t38 + 4);
    t52 = (t36 + 4);
    t40 = *((unsigned int *)t38);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t39);
    t44 = *((unsigned int *)t52);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t39);
    t48 = *((unsigned int *)t52);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB91;

LAB88:    if (t49 != 0)
        goto LAB90;

LAB89:    *((unsigned int *)t37) = 1;

LAB91:    memset(t53, 0, 8);
    t60 = (t37 + 4);
    t55 = *((unsigned int *)t60);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB92;

LAB93:    if (*((unsigned int *)t60) != 0)
        goto LAB94;

LAB95:    t62 = *((unsigned int *)t31);
    t63 = *((unsigned int *)t53);
    t64 = (t62 & t63);
    *((unsigned int *)t61) = t64;
    t66 = (t31 + 4);
    t67 = (t53 + 4);
    t75 = (t61 + 4);
    t68 = *((unsigned int *)t66);
    t69 = *((unsigned int *)t67);
    t70 = (t68 | t69);
    *((unsigned int *)t75) = t70;
    t71 = *((unsigned int *)t75);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB96;

LAB97:
LAB98:    goto LAB87;

LAB90:    t54 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB91;

LAB92:    *((unsigned int *)t53) = 1;
    goto LAB95;

LAB94:    t65 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB95;

LAB96:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t75);
    *((unsigned int *)t61) = (t73 | t74);
    t76 = (t31 + 4);
    t93 = (t53 + 4);
    t77 = *((unsigned int *)t31);
    t78 = (~(t77));
    t79 = *((unsigned int *)t76);
    t80 = (~(t79));
    t81 = *((unsigned int *)t53);
    t82 = (~(t81));
    t83 = *((unsigned int *)t93);
    t84 = (~(t83));
    t85 = (t78 & t80);
    t86 = (t82 & t84);
    t87 = (~(t85));
    t88 = (~(t86));
    t89 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t89 & t87);
    t90 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t90 & t88);
    t91 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t91 & t87);
    t92 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t92 & t88);
    goto LAB98;

LAB99:    xsi_set_current_line(81, ng0);

LAB102:    xsi_set_current_line(82, ng0);
    t100 = ((char*)((ng3)));
    t101 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t101, t100, 0, 0, 2, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng2)));
    t5 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng6)));
    t5 = (t0 + 3904);
    xsi_vlogvar_wait_assign_value(t5, t2, 0, 0, 1, 0LL);
    goto LAB101;

LAB105:    xsi_set_current_line(89, ng0);
    t7 = (t0 + 3184U);
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
        goto LAB117;

LAB114:    if (t18 != 0)
        goto LAB116;

LAB115:    *((unsigned int *)t6) = 1;

LAB117:    t29 = (t6 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB118;

LAB119:    xsi_set_current_line(93, ng0);

LAB122:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 2, 0LL);

LAB120:    goto LAB113;

LAB107:    xsi_set_current_line(97, ng0);

LAB123:    xsi_set_current_line(98, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 2, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng3)));
    t7 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 2, 0LL);
    goto LAB113;

LAB109:    xsi_set_current_line(101, ng0);

LAB124:    xsi_set_current_line(102, ng0);
    t7 = ((char*)((ng4)));
    t8 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t8, t7, 0, 0, 2, 0LL);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng4)));
    t7 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 2, 0LL);
    goto LAB113;

LAB116:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB117;

LAB118:    xsi_set_current_line(89, ng0);

LAB121:    xsi_set_current_line(90, ng0);
    t35 = ((char*)((ng1)));
    t36 = (t0 + 4064);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 2, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t7 = (t0 + 3584);
    xsi_vlogvar_wait_assign_value(t7, t2, 0, 0, 2, 0LL);
    goto LAB120;

}


extern void work_m_00000000000604496161_4020927633_init()
{
	static char *pe[] = {(void *)Always_22_0,(void *)Always_30_1};
	xsi_register_didat("work_m_00000000000604496161_4020927633", "isim/FSM_ColSel_circuit_tb_isim_beh.exe.sim/work/m_00000000000604496161_4020927633.didat");
	xsi_register_executes(pe);
}
