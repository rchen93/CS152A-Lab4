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
static const char *ng0 = "C:/Users/152/Desktop/RKC/Lab4/vending_machine.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {4U, 0U};
static int ng4[] = {5, 0};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {10, 0};
static unsigned int ng7[] = {1U, 0U};
static int ng8[] = {25, 0};



static void Initial_67_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(67, ng0);

LAB2:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t0 + 4000);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 3);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t0 + 4160);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 3);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 472);
    t2 = *((char **)t1);
    t1 = (t0 + 4320);
    xsi_vlogvar_assign_value(t1, t2, 0, 0, 3);
    xsi_set_current_line(71, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4480);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(72, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4640);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(73, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4800);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(74, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 4960);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(75, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5120);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(76, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5600);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(77, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5760);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 7);
    xsi_set_current_line(78, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 5920);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);

LAB1:    return;
}

static void Always_81_1(char *t0)
{
    char t9[8];
    char t32[8];
    char t56[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
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
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
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
    unsigned int t52;
    unsigned int t53;
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
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;

LAB0:    t1 = (t0 + 7088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 8400);
    *((int *)t2) = 1;
    t3 = (t0 + 7120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(81, ng0);

LAB5:    xsi_set_current_line(82, ng0);
    t4 = (t0 + 4000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB57;

LAB54:    if (t20 != 0)
        goto LAB56;

LAB55:    *((unsigned int *)t9) = 1;

LAB57:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 744);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB105;

LAB102:    if (t20 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t9) = 1;

LAB105:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB106;

LAB107:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 880);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB153;

LAB150:    if (t20 != 0)
        goto LAB152;

LAB151:    *((unsigned int *)t9) = 1;

LAB153:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB154;

LAB155:
LAB156:
LAB108:
LAB60:
LAB12:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4320);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB2;

LAB8:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(82, ng0);

LAB13:    xsi_set_current_line(83, ng0);
    t30 = (t0 + 2800U);
    t31 = *((char **)t30);
    t30 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t33 = (t31 + 4);
    t34 = (t30 + 4);
    t35 = *((unsigned int *)t31);
    t36 = *((unsigned int *)t30);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t33);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB17;

LAB14:    if (t44 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t32) = 1;

LAB17:    t48 = (t32 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB33;

LAB30:    if (t20 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t9) = 1;

LAB33:    t7 = (t9 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB34;

LAB35:
LAB36:
LAB20:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4000);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB12;

LAB16:    t47 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t47) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(83, ng0);

LAB21:    xsi_set_current_line(84, ng0);
    t54 = (t0 + 2960U);
    t55 = *((char **)t54);
    t54 = ((char*)((ng2)));
    memset(t56, 0, 8);
    t57 = (t55 + 4);
    t58 = (t54 + 4);
    t59 = *((unsigned int *)t55);
    t60 = *((unsigned int *)t54);
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
        goto LAB25;

LAB22:    if (t68 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t56) = 1;

LAB25:    t72 = (t56 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t56);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB26;

LAB27:
LAB28:    goto LAB20;

LAB24:    t71 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(84, ng0);

LAB29:    xsi_set_current_line(85, ng0);
    t78 = (t0 + 608);
    t79 = *((char **)t78);
    t78 = (t0 + 4160);
    xsi_vlogvar_assign_value(t78, t79, 0, 0, 3);
    goto LAB28;

LAB32:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(88, ng0);

LAB37:    xsi_set_current_line(89, ng0);
    t8 = (t0 + 2960U);
    t10 = *((char **)t8);
    t8 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t23 = (t10 + 4);
    t24 = (t8 + 4);
    t35 = *((unsigned int *)t10);
    t36 = *((unsigned int *)t8);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t23);
    t39 = *((unsigned int *)t24);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t23);
    t43 = *((unsigned int *)t24);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB41;

LAB38:    if (t44 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t32) = 1;

LAB41:    t31 = (t32 + 4);
    t49 = *((unsigned int *)t31);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2960U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB49;

LAB46:    if (t20 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t9) = 1;

LAB49:    t7 = (t9 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB50;

LAB51:
LAB52:
LAB44:    goto LAB36;

LAB40:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(89, ng0);

LAB45:    xsi_set_current_line(90, ng0);
    t33 = (t0 + 744);
    t34 = *((char **)t33);
    t33 = (t0 + 4160);
    xsi_vlogvar_assign_value(t33, t34, 0, 0, 3);
    goto LAB44;

LAB48:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(92, ng0);

LAB53:    xsi_set_current_line(93, ng0);
    t8 = (t0 + 880);
    t10 = *((char **)t8);
    t8 = (t0 + 4160);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 3);
    goto LAB52;

LAB56:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB57;

LAB58:    xsi_set_current_line(98, ng0);

LAB61:    xsi_set_current_line(99, ng0);
    t23 = (t0 + 2800U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t30 = (t24 + 4);
    t31 = (t23 + 4);
    t35 = *((unsigned int *)t24);
    t36 = *((unsigned int *)t23);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t31);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t31);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB65;

LAB62:    if (t44 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t32) = 1;

LAB65:    t34 = (t32 + 4);
    t49 = *((unsigned int *)t34);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB81;

LAB78:    if (t20 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t9) = 1;

LAB81:    t7 = (t9 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB82;

LAB83:
LAB84:
LAB68:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4000);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB60;

LAB64:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB65;

LAB66:    xsi_set_current_line(99, ng0);

LAB69:    xsi_set_current_line(100, ng0);
    t47 = (t0 + 2960U);
    t48 = *((char **)t47);
    t47 = ((char*)((ng1)));
    memset(t56, 0, 8);
    t54 = (t48 + 4);
    t55 = (t47 + 4);
    t59 = *((unsigned int *)t48);
    t60 = *((unsigned int *)t47);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t54);
    t63 = *((unsigned int *)t55);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t55);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB73;

LAB70:    if (t68 != 0)
        goto LAB72;

LAB71:    *((unsigned int *)t56) = 1;

LAB73:    t58 = (t56 + 4);
    t73 = *((unsigned int *)t58);
    t74 = (~(t73));
    t75 = *((unsigned int *)t56);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB74;

LAB75:
LAB76:    goto LAB68;

LAB72:    t57 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB73;

LAB74:    xsi_set_current_line(100, ng0);

LAB77:    xsi_set_current_line(101, ng0);
    t71 = (t0 + 472);
    t72 = *((char **)t71);
    t71 = (t0 + 4160);
    xsi_vlogvar_assign_value(t71, t72, 0, 0, 3);
    goto LAB76;

LAB80:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(104, ng0);

LAB85:    xsi_set_current_line(105, ng0);
    t8 = (t0 + 2960U);
    t10 = *((char **)t8);
    t8 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t23 = (t10 + 4);
    t24 = (t8 + 4);
    t35 = *((unsigned int *)t10);
    t36 = *((unsigned int *)t8);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t23);
    t39 = *((unsigned int *)t24);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t23);
    t43 = *((unsigned int *)t24);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB89;

LAB86:    if (t44 != 0)
        goto LAB88;

LAB87:    *((unsigned int *)t32) = 1;

LAB89:    t31 = (t32 + 4);
    t49 = *((unsigned int *)t31);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB90;

LAB91:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2960U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB97;

LAB94:    if (t20 != 0)
        goto LAB96;

LAB95:    *((unsigned int *)t9) = 1;

LAB97:    t7 = (t9 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB98;

LAB99:
LAB100:
LAB92:    goto LAB84;

LAB88:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB89;

LAB90:    xsi_set_current_line(105, ng0);

LAB93:    xsi_set_current_line(106, ng0);
    t33 = (t0 + 744);
    t34 = *((char **)t33);
    t33 = (t0 + 4160);
    xsi_vlogvar_assign_value(t33, t34, 0, 0, 3);
    goto LAB92;

LAB96:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB97;

LAB98:    xsi_set_current_line(108, ng0);

LAB101:    xsi_set_current_line(109, ng0);
    t8 = (t0 + 880);
    t10 = *((char **)t8);
    t8 = (t0 + 4160);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 3);
    goto LAB100;

LAB104:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(114, ng0);

LAB109:    xsi_set_current_line(115, ng0);
    t23 = (t0 + 2800U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t30 = (t24 + 4);
    t31 = (t23 + 4);
    t35 = *((unsigned int *)t24);
    t36 = *((unsigned int *)t23);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t31);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t31);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB113;

LAB110:    if (t44 != 0)
        goto LAB112;

LAB111:    *((unsigned int *)t32) = 1;

LAB113:    t34 = (t32 + 4);
    t49 = *((unsigned int *)t34);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB114;

LAB115:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB137;

LAB134:    if (t20 != 0)
        goto LAB136;

LAB135:    *((unsigned int *)t9) = 1;

LAB137:    t7 = (t9 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB138;

LAB139:
LAB140:
LAB116:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4000);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB108;

LAB112:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB113;

LAB114:    xsi_set_current_line(115, ng0);

LAB117:    xsi_set_current_line(116, ng0);
    t47 = (t0 + 2960U);
    t48 = *((char **)t47);
    t47 = ((char*)((ng1)));
    memset(t56, 0, 8);
    t54 = (t48 + 4);
    t55 = (t47 + 4);
    t59 = *((unsigned int *)t48);
    t60 = *((unsigned int *)t47);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t54);
    t63 = *((unsigned int *)t55);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t55);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB121;

LAB118:    if (t68 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t56) = 1;

LAB121:    t58 = (t56 + 4);
    t73 = *((unsigned int *)t58);
    t74 = (~(t73));
    t75 = *((unsigned int *)t56);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2960U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB129;

LAB126:    if (t20 != 0)
        goto LAB128;

LAB127:    *((unsigned int *)t9) = 1;

LAB129:    t7 = (t9 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB130;

LAB131:
LAB132:
LAB124:    goto LAB116;

LAB120:    t57 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(116, ng0);

LAB125:    xsi_set_current_line(117, ng0);
    t71 = (t0 + 472);
    t72 = *((char **)t71);
    t71 = (t0 + 4160);
    xsi_vlogvar_assign_value(t71, t72, 0, 0, 3);
    goto LAB124;

LAB128:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB129;

LAB130:    xsi_set_current_line(119, ng0);

LAB133:    xsi_set_current_line(120, ng0);
    t8 = (t0 + 608);
    t10 = *((char **)t8);
    t8 = (t0 + 4160);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 3);
    goto LAB132;

LAB136:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB137;

LAB138:    xsi_set_current_line(123, ng0);

LAB141:    xsi_set_current_line(124, ng0);
    t8 = (t0 + 2960U);
    t10 = *((char **)t8);
    t8 = ((char*)((ng2)));
    memset(t32, 0, 8);
    t23 = (t10 + 4);
    t24 = (t8 + 4);
    t35 = *((unsigned int *)t10);
    t36 = *((unsigned int *)t8);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t23);
    t39 = *((unsigned int *)t24);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t23);
    t43 = *((unsigned int *)t24);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB145;

LAB142:    if (t44 != 0)
        goto LAB144;

LAB143:    *((unsigned int *)t32) = 1;

LAB145:    t31 = (t32 + 4);
    t49 = *((unsigned int *)t31);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB146;

LAB147:
LAB148:    goto LAB140;

LAB144:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB145;

LAB146:    xsi_set_current_line(124, ng0);

LAB149:    xsi_set_current_line(125, ng0);
    t33 = (t0 + 880);
    t34 = *((char **)t33);
    t33 = (t0 + 4160);
    xsi_vlogvar_assign_value(t33, t34, 0, 0, 3);
    goto LAB148;

LAB152:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB153;

LAB154:    xsi_set_current_line(130, ng0);

LAB157:    xsi_set_current_line(131, ng0);
    t23 = (t0 + 2800U);
    t24 = *((char **)t23);
    t23 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t30 = (t24 + 4);
    t31 = (t23 + 4);
    t35 = *((unsigned int *)t24);
    t36 = *((unsigned int *)t23);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t30);
    t39 = *((unsigned int *)t31);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t30);
    t43 = *((unsigned int *)t31);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB161;

LAB158:    if (t44 != 0)
        goto LAB160;

LAB159:    *((unsigned int *)t32) = 1;

LAB161:    t34 = (t32 + 4);
    t49 = *((unsigned int *)t34);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB162;

LAB163:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2800U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB185;

LAB182:    if (t20 != 0)
        goto LAB184;

LAB183:    *((unsigned int *)t9) = 1;

LAB185:    t7 = (t9 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB186;

LAB187:
LAB188:
LAB164:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4000);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);
    goto LAB156;

LAB160:    t33 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB161;

LAB162:    xsi_set_current_line(131, ng0);

LAB165:    xsi_set_current_line(132, ng0);
    t47 = (t0 + 2960U);
    t48 = *((char **)t47);
    t47 = ((char*)((ng1)));
    memset(t56, 0, 8);
    t54 = (t48 + 4);
    t55 = (t47 + 4);
    t59 = *((unsigned int *)t48);
    t60 = *((unsigned int *)t47);
    t61 = (t59 ^ t60);
    t62 = *((unsigned int *)t54);
    t63 = *((unsigned int *)t55);
    t64 = (t62 ^ t63);
    t65 = (t61 | t64);
    t66 = *((unsigned int *)t54);
    t67 = *((unsigned int *)t55);
    t68 = (t66 | t67);
    t69 = (~(t68));
    t70 = (t65 & t69);
    if (t70 != 0)
        goto LAB169;

LAB166:    if (t68 != 0)
        goto LAB168;

LAB167:    *((unsigned int *)t56) = 1;

LAB169:    t58 = (t56 + 4);
    t73 = *((unsigned int *)t58);
    t74 = (~(t73));
    t75 = *((unsigned int *)t56);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB170;

LAB171:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2960U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t9, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB177;

LAB174:    if (t20 != 0)
        goto LAB176;

LAB175:    *((unsigned int *)t9) = 1;

LAB177:    t7 = (t9 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB178;

LAB179:
LAB180:
LAB172:    goto LAB164;

LAB168:    t57 = (t56 + 4);
    *((unsigned int *)t56) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB169;

LAB170:    xsi_set_current_line(132, ng0);

LAB173:    xsi_set_current_line(133, ng0);
    t71 = (t0 + 472);
    t72 = *((char **)t71);
    t71 = (t0 + 4160);
    xsi_vlogvar_assign_value(t71, t72, 0, 0, 3);
    goto LAB172;

LAB176:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB177;

LAB178:    xsi_set_current_line(135, ng0);

LAB181:    xsi_set_current_line(136, ng0);
    t8 = (t0 + 608);
    t10 = *((char **)t8);
    t8 = (t0 + 4160);
    xsi_vlogvar_assign_value(t8, t10, 0, 0, 3);
    goto LAB180;

LAB184:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB185;

LAB186:    xsi_set_current_line(139, ng0);

LAB189:    xsi_set_current_line(140, ng0);
    t8 = (t0 + 2960U);
    t10 = *((char **)t8);
    t8 = ((char*)((ng1)));
    memset(t32, 0, 8);
    t23 = (t10 + 4);
    t24 = (t8 + 4);
    t35 = *((unsigned int *)t10);
    t36 = *((unsigned int *)t8);
    t37 = (t35 ^ t36);
    t38 = *((unsigned int *)t23);
    t39 = *((unsigned int *)t24);
    t40 = (t38 ^ t39);
    t41 = (t37 | t40);
    t42 = *((unsigned int *)t23);
    t43 = *((unsigned int *)t24);
    t44 = (t42 | t43);
    t45 = (~(t44));
    t46 = (t41 & t45);
    if (t46 != 0)
        goto LAB193;

LAB190:    if (t44 != 0)
        goto LAB192;

LAB191:    *((unsigned int *)t32) = 1;

LAB193:    t31 = (t32 + 4);
    t49 = *((unsigned int *)t31);
    t50 = (~(t49));
    t51 = *((unsigned int *)t32);
    t52 = (t51 & t50);
    t53 = (t52 != 0);
    if (t53 > 0)
        goto LAB194;

LAB195:
LAB196:    goto LAB188;

LAB192:    t30 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB193;

LAB194:    xsi_set_current_line(140, ng0);

LAB197:    xsi_set_current_line(141, ng0);
    t33 = (t0 + 744);
    t34 = *((char **)t33);
    t33 = (t0 + 4160);
    xsi_vlogvar_assign_value(t33, t34, 0, 0, 3);
    goto LAB196;

}

static void Always_149_2(char *t0)
{
    char t9[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
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
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    int t33;

LAB0:    t1 = (t0 + 7336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng0);
    t2 = (t0 + 8416);
    *((int *)t2) = 1;
    t3 = (t0 + 7368);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(149, ng0);

LAB5:    xsi_set_current_line(150, ng0);
    t4 = (t0 + 4000);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 472);
    t8 = *((char **)t7);
    memset(t9, 0, 8);
    t7 = (t6 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t8);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t9) = 1;

LAB9:    t24 = (t9 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1016);
    t6 = *((char **)t5);
    memset(t9, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t20 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t9) = 1;

LAB17:    t10 = (t9 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t9);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(162, ng0);

LAB32:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 4000);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4160);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);

LAB20:
LAB12:    xsi_set_current_line(165, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4000);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 4320);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 3);
    goto LAB2;

LAB8:    t23 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(150, ng0);

LAB13:    xsi_set_current_line(151, ng0);
    t30 = (t0 + 1016);
    t31 = *((char **)t30);
    t30 = (t0 + 4160);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 3);
    goto LAB12;

LAB16:    t8 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(153, ng0);

LAB21:    xsi_set_current_line(154, ng0);
    t23 = (t0 + 2480U);
    t24 = *((char **)t23);
    t23 = (t0 + 2320U);
    t30 = *((char **)t23);
    t23 = (t0 + 2160U);
    t31 = *((char **)t23);
    xsi_vlogtype_concat(t32, 3, 3, 3U, t31, 1, t30, 1, t24, 1);
    t23 = (t0 + 5920);
    xsi_vlogvar_assign_value(t23, t32, 0, 0, 3);
    xsi_set_current_line(155, ng0);
    t2 = (t0 + 5920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB22:    t5 = ((char*)((ng3)));
    t33 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t33 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng5)));
    t33 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t33 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng7)));
    t33 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t33 == 1)
        goto LAB27;

LAB28:
LAB30:
LAB29:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 5760);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 5760);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 7);

LAB31:    goto LAB20;

LAB23:    xsi_set_current_line(156, ng0);
    t6 = (t0 + 5760);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = ((char*)((ng4)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t8, 7, t10, 32);
    t23 = (t0 + 5760);
    xsi_vlogvar_assign_value(t23, t9, 0, 0, 7);
    goto LAB31;

LAB25:    xsi_set_current_line(157, ng0);
    t3 = (t0 + 5760);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 7, t7, 32);
    t8 = (t0 + 5760);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 7);
    goto LAB31;

LAB27:    xsi_set_current_line(158, ng0);
    t3 = (t0 + 5760);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng8)));
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 32, t6, 7, t7, 32);
    t8 = (t0 + 5760);
    xsi_vlogvar_assign_value(t8, t9, 0, 0, 7);
    goto LAB31;

}

static void Cont_169_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(169, ng0);
    t2 = (t0 + 4320);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8544);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 8432);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_170_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 7832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(170, ng0);
    t2 = (t0 + 5760);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8608);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 127U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 6);
    t18 = (t0 + 8448);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_171_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 8080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 5920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 8672);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 7U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 2);
    t18 = (t0 + 8464);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000000583712960_2144025757_init()
{
	static char *pe[] = {(void *)Initial_67_0,(void *)Always_81_1,(void *)Always_149_2,(void *)Cont_169_3,(void *)Cont_170_4,(void *)Cont_171_5};
	xsi_register_didat("work_m_00000000000583712960_2144025757", "isim/vending_machine_test_isim_beh.exe.sim/work/m_00000000000583712960_2144025757.didat");
	xsi_register_executes(pe);
}
