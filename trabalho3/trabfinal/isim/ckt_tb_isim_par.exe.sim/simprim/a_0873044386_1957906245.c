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
extern char *IEEE_P_2592010699;
extern char *SIMPRIM_P_4208868169;
extern char *IEEE_P_2717149903;

unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );
char *ieee_p_2592010699_sub_3879918230_503743352(char *, char *, char *, char *);
void ieee_p_2717149903_sub_2486506143_2101202839(char *, char *, char *, unsigned int , unsigned int , char *, char *, char *, char *, unsigned char , char *, char *, char *, unsigned char , unsigned char , unsigned char , unsigned char , unsigned char , unsigned char , unsigned char );
void ieee_p_2717149903_sub_539877840_2101202839(char *, char *, char *, unsigned int , unsigned int , char *, char *, unsigned int , unsigned int , char *);
int simprim_p_4208868169_sub_3182959421_3008368149(char *, char *, char *);


unsigned char simprim_a_0873044386_1957906245_sub_655425482_3127390018(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[40];
    char t6[16];
    char t11[16];
    char t16[8];
    unsigned char t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    char *t22;
    unsigned char t23;
    char *t24;
    unsigned char t25;
    char *t26;
    int t27;
    char *t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned char t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned char t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    int t48;
    char *t49;
    int t50;
    int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    unsigned char t56;
    char *t57;
    int t58;
    char *t59;
    int t60;
    int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned char t66;
    unsigned char t67;
    unsigned char t68;
    int t69;
    char *t70;
    int t71;
    char *t72;
    int t73;
    int t74;
    unsigned int t75;
    char *t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned char t81;
    char *t82;
    char *t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned char t87;
    unsigned char t88;
    int t89;
    int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned char t94;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t11 + 0U);
    t12 = (t8 + 0U);
    *((int *)t12) = 1;
    t12 = (t8 + 4U);
    *((int *)t12) = 0;
    t12 = (t8 + 8U);
    *((int *)t12) = -1;
    t13 = (0 - 1);
    t10 = (t13 * -1);
    t10 = (t10 + 1);
    t12 = (t8 + 12U);
    *((unsigned int *)t12) = t10;
    t12 = (t4 + 4U);
    t14 = ((IEEE_P_2592010699) + 3320);
    t15 = (t12 + 88U);
    *((char **)t15) = t14;
    t17 = (t12 + 56U);
    *((char **)t17) = t16;
    xsi_type_set_default_value(t14, t16, 0);
    t18 = (t12 + 80U);
    *((unsigned int *)t18) = 1U;
    t19 = (t5 + 4U);
    t20 = (t2 != 0);
    if (t20 == 1)
        goto LAB3;

LAB2:    t21 = (t5 + 12U);
    *((char **)t21) = t6;
    t22 = (t5 + 20U);
    t23 = (t3 != 0);
    if (t23 == 1)
        goto LAB5;

LAB4:    t24 = (t5 + 28U);
    *((char **)t24) = t11;
    t26 = (t11 + 0U);
    t27 = *((int *)t26);
    t28 = (t11 + 8U);
    t29 = *((int *)t28);
    t30 = (1 - t27);
    t10 = (t30 * t29);
    t31 = (1U * t10);
    t32 = (0 + t31);
    t33 = (t3 + t32);
    t34 = *((unsigned char *)t33);
    t35 = (t11 + 0U);
    t36 = *((int *)t35);
    t37 = (t11 + 8U);
    t38 = *((int *)t37);
    t39 = (0 - t36);
    t40 = (t39 * t38);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t43 = (t3 + t42);
    t44 = *((unsigned char *)t43);
    t45 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t34, t44);
    t46 = (t45 == (unsigned char)3);
    if (t46 == 1)
        goto LAB9;

LAB10:    t47 = (t11 + 0U);
    t48 = *((int *)t47);
    t49 = (t11 + 8U);
    t50 = *((int *)t49);
    t51 = (1 - t48);
    t52 = (t51 * t50);
    t53 = (1U * t52);
    t54 = (0 + t53);
    t55 = (t3 + t54);
    t56 = *((unsigned char *)t55);
    t57 = (t11 + 0U);
    t58 = *((int *)t57);
    t59 = (t11 + 8U);
    t60 = *((int *)t59);
    t61 = (0 - t58);
    t62 = (t61 * t60);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t65 = (t3 + t64);
    t66 = *((unsigned char *)t65);
    t67 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t56, t66);
    t68 = (t67 == (unsigned char)2);
    t25 = t68;

LAB11:    if (t25 != 0)
        goto LAB6;

LAB8:    t7 = (t6 + 0U);
    t9 = *((int *)t7);
    t8 = (t6 + 8U);
    t13 = *((int *)t8);
    t27 = (0 - t9);
    t10 = (t27 * t13);
    t31 = (1U * t10);
    t32 = (0 + t31);
    t14 = (t2 + t32);
    t25 = *((unsigned char *)t14);
    t15 = (t6 + 0U);
    t29 = *((int *)t15);
    t17 = (t6 + 8U);
    t30 = *((int *)t17);
    t36 = (1 - t29);
    t40 = (t36 * t30);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t18 = (t2 + t42);
    t34 = *((unsigned char *)t18);
    t44 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t25, t34);
    t45 = (t44 == (unsigned char)2);
    if (t45 == 1)
        goto LAB17;

LAB18:    t23 = (unsigned char)0;

LAB19:    if (t23 == 1)
        goto LAB14;

LAB15:    t20 = (unsigned char)0;

LAB16:    if (t20 != 0)
        goto LAB12;

LAB13:    t7 = (t11 + 0U);
    t9 = *((int *)t7);
    t8 = (t11 + 8U);
    t13 = *((int *)t8);
    t27 = (1 - t9);
    t10 = (t27 * t13);
    t31 = (1U * t10);
    t32 = (0 + t31);
    t14 = (t3 + t32);
    t23 = *((unsigned char *)t14);
    t25 = (t23 == (unsigned char)2);
    if (t25 == 1)
        goto LAB22;

LAB23:    t20 = (unsigned char)0;

LAB24:    if (t20 != 0)
        goto LAB20;

LAB21:    t7 = (t11 + 0U);
    t9 = *((int *)t7);
    t8 = (t11 + 8U);
    t13 = *((int *)t8);
    t27 = (1 - t9);
    t10 = (t27 * t13);
    t31 = (1U * t10);
    t32 = (0 + t31);
    t14 = (t3 + t32);
    t23 = *((unsigned char *)t14);
    t25 = (t23 == (unsigned char)3);
    if (t25 == 1)
        goto LAB27;

LAB28:    t20 = (unsigned char)0;

LAB29:    if (t20 != 0)
        goto LAB25;

LAB26:    t7 = (t11 + 0U);
    t9 = *((int *)t7);
    t8 = (t11 + 8U);
    t13 = *((int *)t8);
    t27 = (0 - t9);
    t10 = (t27 * t13);
    t31 = (1U * t10);
    t32 = (0 + t31);
    t14 = (t3 + t32);
    t23 = *((unsigned char *)t14);
    t25 = (t23 == (unsigned char)2);
    if (t25 == 1)
        goto LAB32;

LAB33:    t20 = (unsigned char)0;

LAB34:    if (t20 != 0)
        goto LAB30;

LAB31:    t7 = (t11 + 0U);
    t9 = *((int *)t7);
    t8 = (t11 + 8U);
    t13 = *((int *)t8);
    t27 = (0 - t9);
    t10 = (t27 * t13);
    t31 = (1U * t10);
    t32 = (0 + t31);
    t14 = (t3 + t32);
    t23 = *((unsigned char *)t14);
    t25 = (t23 == (unsigned char)3);
    if (t25 == 1)
        goto LAB37;

LAB38:    t20 = (unsigned char)0;

LAB39:    if (t20 != 0)
        goto LAB35;

LAB36:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    *((unsigned char *)t7) = (unsigned char)1;

LAB7:    t7 = (t12 + 56U);
    t8 = *((char **)t7);
    t20 = *((unsigned char *)t8);
    t0 = t20;

LAB1:    return t0;
LAB3:    *((char **)t19) = t2;
    goto LAB2;

LAB5:    *((char **)t22) = t3;
    goto LAB4;

LAB6:    t69 = simprim_p_4208868169_sub_3182959421_3008368149(SIMPRIM_P_4208868169, t3, t11);
    t70 = (t6 + 0U);
    t71 = *((int *)t70);
    t72 = (t6 + 8U);
    t73 = *((int *)t72);
    t74 = (t69 - t71);
    t75 = (t74 * t73);
    t76 = (t6 + 4U);
    t77 = *((int *)t76);
    xsi_vhdl_check_range_of_index(t71, t77, t73, t69);
    t78 = (1U * t75);
    t79 = (0 + t78);
    t80 = (t2 + t79);
    t81 = *((unsigned char *)t80);
    t82 = (t12 + 56U);
    t83 = *((char **)t82);
    t82 = (t83 + 0);
    *((unsigned char *)t82) = t81;
    goto LAB7;

LAB9:    t25 = (unsigned char)1;
    goto LAB11;

LAB12:    t70 = (t6 + 0U);
    t77 = *((int *)t70);
    t72 = (t6 + 8U);
    t89 = *((int *)t72);
    t90 = (0 - t77);
    t91 = (t90 * t89);
    t92 = (1U * t91);
    t93 = (0 + t92);
    t76 = (t2 + t93);
    t94 = *((unsigned char *)t76);
    t80 = (t12 + 56U);
    t82 = *((char **)t80);
    t80 = (t82 + 0);
    *((unsigned char *)t80) = t94;
    goto LAB7;

LAB14:    t47 = (t6 + 0U);
    t60 = *((int *)t47);
    t49 = (t6 + 8U);
    t61 = *((int *)t49);
    t69 = (0 - t60);
    t75 = (t69 * t61);
    t78 = (1U * t75);
    t79 = (0 + t78);
    t55 = (t2 + t79);
    t68 = *((unsigned char *)t55);
    t57 = (t6 + 0U);
    t71 = *((int *)t57);
    t59 = (t6 + 8U);
    t73 = *((int *)t59);
    t74 = (2 - t71);
    t84 = (t74 * t73);
    t85 = (1U * t84);
    t86 = (0 + t85);
    t65 = (t2 + t86);
    t81 = *((unsigned char *)t65);
    t87 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t68, t81);
    t88 = (t87 == (unsigned char)2);
    t20 = t88;
    goto LAB16;

LAB17:    t26 = (t6 + 0U);
    t38 = *((int *)t26);
    t28 = (t6 + 8U);
    t39 = *((int *)t28);
    t48 = (2 - t38);
    t52 = (t48 * t39);
    t53 = (1U * t52);
    t54 = (0 + t53);
    t33 = (t2 + t54);
    t46 = *((unsigned char *)t33);
    t35 = (t6 + 0U);
    t50 = *((int *)t35);
    t37 = (t6 + 8U);
    t51 = *((int *)t37);
    t58 = (3 - t50);
    t62 = (t58 * t51);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t43 = (t2 + t64);
    t56 = *((unsigned char *)t43);
    t66 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t46, t56);
    t67 = (t66 == (unsigned char)2);
    t23 = t67;
    goto LAB19;

LAB20:    t35 = (t6 + 0U);
    t50 = *((int *)t35);
    t37 = (t6 + 8U);
    t51 = *((int *)t37);
    t58 = (0 - t50);
    t62 = (t58 * t51);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t43 = (t2 + t64);
    t46 = *((unsigned char *)t43);
    t47 = (t12 + 56U);
    t49 = *((char **)t47);
    t47 = (t49 + 0);
    *((unsigned char *)t47) = t46;
    goto LAB7;

LAB22:    t15 = (t6 + 0U);
    t29 = *((int *)t15);
    t17 = (t6 + 8U);
    t30 = *((int *)t17);
    t36 = (0 - t29);
    t40 = (t36 * t30);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t18 = (t2 + t42);
    t34 = *((unsigned char *)t18);
    t26 = (t6 + 0U);
    t38 = *((int *)t26);
    t28 = (t6 + 8U);
    t39 = *((int *)t28);
    t48 = (1 - t38);
    t52 = (t48 * t39);
    t53 = (1U * t52);
    t54 = (0 + t53);
    t33 = (t2 + t54);
    t44 = *((unsigned char *)t33);
    t45 = (t34 == t44);
    t20 = t45;
    goto LAB24;

LAB25:    t35 = (t6 + 0U);
    t50 = *((int *)t35);
    t37 = (t6 + 8U);
    t51 = *((int *)t37);
    t58 = (2 - t50);
    t62 = (t58 * t51);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t43 = (t2 + t64);
    t46 = *((unsigned char *)t43);
    t47 = (t12 + 56U);
    t49 = *((char **)t47);
    t47 = (t49 + 0);
    *((unsigned char *)t47) = t46;
    goto LAB7;

LAB27:    t15 = (t6 + 0U);
    t29 = *((int *)t15);
    t17 = (t6 + 8U);
    t30 = *((int *)t17);
    t36 = (2 - t29);
    t40 = (t36 * t30);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t18 = (t2 + t42);
    t34 = *((unsigned char *)t18);
    t26 = (t6 + 0U);
    t38 = *((int *)t26);
    t28 = (t6 + 8U);
    t39 = *((int *)t28);
    t48 = (3 - t38);
    t52 = (t48 * t39);
    t53 = (1U * t52);
    t54 = (0 + t53);
    t33 = (t2 + t54);
    t44 = *((unsigned char *)t33);
    t45 = (t34 == t44);
    t20 = t45;
    goto LAB29;

LAB30:    t35 = (t6 + 0U);
    t50 = *((int *)t35);
    t37 = (t6 + 8U);
    t51 = *((int *)t37);
    t58 = (0 - t50);
    t62 = (t58 * t51);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t43 = (t2 + t64);
    t46 = *((unsigned char *)t43);
    t47 = (t12 + 56U);
    t49 = *((char **)t47);
    t47 = (t49 + 0);
    *((unsigned char *)t47) = t46;
    goto LAB7;

LAB32:    t15 = (t6 + 0U);
    t29 = *((int *)t15);
    t17 = (t6 + 8U);
    t30 = *((int *)t17);
    t36 = (0 - t29);
    t40 = (t36 * t30);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t18 = (t2 + t42);
    t34 = *((unsigned char *)t18);
    t26 = (t6 + 0U);
    t38 = *((int *)t26);
    t28 = (t6 + 8U);
    t39 = *((int *)t28);
    t48 = (2 - t38);
    t52 = (t48 * t39);
    t53 = (1U * t52);
    t54 = (0 + t53);
    t33 = (t2 + t54);
    t44 = *((unsigned char *)t33);
    t45 = (t34 == t44);
    t20 = t45;
    goto LAB34;

LAB35:    t35 = (t6 + 0U);
    t50 = *((int *)t35);
    t37 = (t6 + 8U);
    t51 = *((int *)t37);
    t58 = (1 - t50);
    t62 = (t58 * t51);
    t63 = (1U * t62);
    t64 = (0 + t63);
    t43 = (t2 + t64);
    t46 = *((unsigned char *)t43);
    t47 = (t12 + 56U);
    t49 = *((char **)t47);
    t47 = (t49 + 0);
    *((unsigned char *)t47) = t46;
    goto LAB7;

LAB37:    t15 = (t6 + 0U);
    t29 = *((int *)t15);
    t17 = (t6 + 8U);
    t30 = *((int *)t17);
    t36 = (1 - t29);
    t40 = (t36 * t30);
    t41 = (1U * t40);
    t42 = (0 + t41);
    t18 = (t2 + t42);
    t34 = *((unsigned char *)t18);
    t26 = (t6 + 0U);
    t38 = *((int *)t26);
    t28 = (t6 + 8U);
    t39 = *((int *)t28);
    t48 = (3 - t38);
    t52 = (t48 * t39);
    t53 = (1U * t52);
    t54 = (0 + t53);
    t33 = (t2 + t54);
    t44 = *((unsigned char *)t33);
    t45 = (t34 == t44);
    t20 = t45;
    goto LAB39;

LAB40:;
}

static void simprim_a_0873044386_1957906245_p_0(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 5528);
    t2 = (t0 + 2056U);
    t3 = (t0 + 7456);
    t4 = (t0 + 1416U);
    t5 = (t0 + 3272U);
    t6 = *((char **)t5);
    memcpy(t7, t6, 16U);
    ieee_p_2717149903_sub_539877840_2101202839(IEEE_P_2717149903, t1, t2, 0U, 0U, t3, t4, 0U, 0U, t7);
    t5 = (t0 + 7280);
    *((int *)t5) = 1;

LAB1:    return;
}

static void simprim_a_0873044386_1957906245_p_1(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 5776);
    t2 = (t0 + 2216U);
    t3 = (t0 + 7520);
    t4 = (t0 + 1576U);
    t5 = (t0 + 3392U);
    t6 = *((char **)t5);
    memcpy(t7, t6, 16U);
    ieee_p_2717149903_sub_539877840_2101202839(IEEE_P_2717149903, t1, t2, 0U, 0U, t3, t4, 0U, 0U, t7);
    t5 = (t0 + 7296);
    *((int *)t5) = 1;

LAB1:    return;
}

static void simprim_a_0873044386_1957906245_p_2(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 6024);
    t2 = (t0 + 2376U);
    t3 = (t0 + 7584);
    t4 = (t0 + 1736U);
    t5 = (t0 + 3512U);
    t6 = *((char **)t5);
    memcpy(t7, t6, 16U);
    ieee_p_2717149903_sub_539877840_2101202839(IEEE_P_2717149903, t1, t2, 0U, 0U, t3, t4, 0U, 0U, t7);
    t5 = (t0 + 7312);
    *((int *)t5) = 1;

LAB1:    return;
}

static void simprim_a_0873044386_1957906245_p_3(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 6272);
    t2 = (t0 + 2536U);
    t3 = (t0 + 7648);
    t4 = (t0 + 1896U);
    t5 = (t0 + 3632U);
    t6 = *((char **)t5);
    memcpy(t7, t6, 16U);
    ieee_p_2717149903_sub_539877840_2101202839(IEEE_P_2717149903, t1, t2, 0U, 0U, t3, t4, 0U, 0U, t7);
    t5 = (t0 + 7328);
    *((int *)t5) = 1;

LAB1:    return;
}

static void simprim_a_0873044386_1957906245_p_4(char *t0)
{
    char t1[16];
    char t7[16];
    char t12[16];
    char t17[16];
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    unsigned char t31;
    unsigned char t32;
    unsigned char t33;
    unsigned char t34;
    unsigned char t35;
    unsigned char t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned char t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;

LAB0:    t2 = (t0 + 2576U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 2416U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t8 = ((IEEE_P_2592010699) + 3912);
    t2 = xsi_base_array_concat(t2, t7, t8, (char)99, t4, (char)99, t6, (char)101);
    t9 = (t0 + 2256U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t13 = ((IEEE_P_2592010699) + 3912);
    t9 = xsi_base_array_concat(t9, t12, t13, (char)97, t2, t7, (char)99, t11, (char)101);
    t14 = (t0 + 2096U);
    t15 = *((char **)t14);
    t16 = *((unsigned char *)t15);
    t18 = ((IEEE_P_2592010699) + 3912);
    t14 = xsi_base_array_concat(t14, t17, t18, (char)97, t9, t12, (char)99, t16, (char)101);
    t19 = ieee_p_2592010699_sub_3879918230_503743352(IEEE_P_2592010699, t1, t14, t17);
    t20 = (t0 + 4472U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    t22 = (t1 + 12U);
    t23 = *((unsigned int *)t22);
    t23 = (t23 * 1U);
    memcpy(t20, t19, t23);
    t2 = (t0 + 2576U);
    t3 = *((char **)t2);
    t6 = *((unsigned char *)t3);
    t2 = (t0 + 2416U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t16 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t6, t11);
    t2 = (t0 + 2256U);
    t8 = *((char **)t2);
    t24 = *((unsigned char *)t8);
    t25 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t16, t24);
    t2 = (t0 + 2096U);
    t9 = *((char **)t2);
    t26 = *((unsigned char *)t9);
    t27 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t25, t26);
    t28 = (t27 == (unsigned char)3);
    if (t28 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 2576U);
    t10 = *((char **)t2);
    t29 = *((unsigned char *)t10);
    t2 = (t0 + 2416U);
    t13 = *((char **)t2);
    t30 = *((unsigned char *)t13);
    t31 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t29, t30);
    t2 = (t0 + 2256U);
    t14 = *((char **)t2);
    t32 = *((unsigned char *)t14);
    t33 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t31, t32);
    t2 = (t0 + 2096U);
    t15 = *((char **)t2);
    t34 = *((unsigned char *)t15);
    t35 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t33, t34);
    t36 = (t35 == (unsigned char)2);
    t4 = t36;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 4352U);
    t3 = *((char **)t2);
    t23 = (15 - 15);
    t39 = (t23 * 1U);
    t40 = (0 + t39);
    t2 = (t3 + t40);
    t5 = (t0 + 4472U);
    t8 = *((char **)t5);
    t45 = (3 - 1);
    t46 = (t45 * 1U);
    t47 = (0 + t46);
    t5 = (t8 + t47);
    t4 = simprim_a_0873044386_1957906245_sub_655425482_3127390018(t0, t2, t5);
    t9 = (t0 + 4352U);
    t10 = *((char **)t9);
    t48 = (15 - 11);
    t49 = (t48 * 1U);
    t50 = (0 + t49);
    t9 = (t10 + t50);
    t13 = (t0 + 4472U);
    t14 = *((char **)t13);
    t51 = (3 - 1);
    t52 = (t51 * 1U);
    t53 = (0 + t52);
    t13 = (t14 + t53);
    t6 = simprim_a_0873044386_1957906245_sub_655425482_3127390018(t0, t9, t13);
    t18 = ((IEEE_P_2592010699) + 4024);
    t15 = xsi_base_array_concat(t15, t1, t18, (char)99, t4, (char)99, t6, (char)101);
    t19 = (t0 + 4352U);
    t20 = *((char **)t19);
    t54 = (15 - 7);
    t55 = (t54 * 1U);
    t56 = (0 + t55);
    t19 = (t20 + t56);
    t21 = (t0 + 4472U);
    t22 = *((char **)t21);
    t57 = (3 - 1);
    t58 = (t57 * 1U);
    t59 = (0 + t58);
    t21 = (t22 + t59);
    t11 = simprim_a_0873044386_1957906245_sub_655425482_3127390018(t0, t19, t21);
    t43 = ((IEEE_P_2592010699) + 4024);
    t42 = xsi_base_array_concat(t42, t7, t43, (char)97, t15, t1, (char)99, t11, (char)101);
    t44 = (t0 + 4352U);
    t60 = *((char **)t44);
    t61 = (15 - 3);
    t62 = (t61 * 1U);
    t63 = (0 + t62);
    t44 = (t60 + t63);
    t64 = (t0 + 4472U);
    t65 = *((char **)t64);
    t66 = (3 - 1);
    t67 = (t66 * 1U);
    t68 = (0 + t67);
    t64 = (t65 + t68);
    t16 = simprim_a_0873044386_1957906245_sub_655425482_3127390018(t0, t44, t64);
    t70 = ((IEEE_P_2592010699) + 4024);
    t69 = xsi_base_array_concat(t69, t12, t70, (char)97, t42, t7, (char)99, t16, (char)101);
    t71 = (t0 + 4472U);
    t72 = *((char **)t71);
    t73 = (3 - 3);
    t74 = (t73 * 1U);
    t75 = (0 + t74);
    t71 = (t72 + t75);
    t24 = simprim_a_0873044386_1957906245_sub_655425482_3127390018(t0, t69, t71);
    t76 = (t0 + 7712);
    t77 = (t76 + 56U);
    t78 = *((char **)t77);
    t79 = (t78 + 56U);
    t80 = *((char **)t79);
    *((unsigned char *)t80) = t24;
    xsi_driver_first_trans_fast(t76);

LAB3:    t2 = (t0 + 7344);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    t2 = (t0 + 4352U);
    t18 = *((char **)t2);
    t2 = (t0 + 4472U);
    t19 = *((char **)t2);
    t2 = (t0 + 11520U);
    t37 = simprim_p_4208868169_sub_3182959421_3008368149(SIMPRIM_P_4208868169, t19, t2);
    t38 = (t37 - 15);
    t23 = (t38 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t37);
    t39 = (1U * t23);
    t40 = (0 + t39);
    t20 = (t18 + t40);
    t41 = *((unsigned char *)t20);
    t21 = (t0 + 7712);
    t22 = (t21 + 56U);
    t42 = *((char **)t22);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = t41;
    xsi_driver_first_trans_fast(t21);
    goto LAB3;

LAB5:    t4 = (unsigned char)1;
    goto LAB7;

}

static void simprim_a_0873044386_1957906245_p_5(char *t0)
{
    char t7[16];
    char t54[16];
    char t60[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    unsigned char t13;
    char *t14;
    int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    int64 t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    int64 t30;
    char *t31;
    char *t32;
    char *t33;
    int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    char *t39;
    int64 t40;
    char *t41;
    char *t42;
    char *t43;
    int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    int64 t50;
    char *t51;
    char *t52;
    char *t53;
    char *t55;
    char *t56;
    int t57;
    unsigned int t58;
    char *t59;
    char *t61;
    unsigned char t62;
    char *t63;
    unsigned char t64;

LAB0:    t1 = (t0 + 6768);
    t2 = (t0 + 1256U);
    t3 = (t0 + 7776);
    t4 = (t0 + 4592U);
    t5 = *((char **)t4);
    t4 = (t0 + 11736);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 1;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (1 - 1);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 2736U);
    t12 = *((char **)t9);
    t13 = *((unsigned char *)t12);
    t9 = xsi_get_transient_memory(128U);
    memset(t9, 0, 128U);
    t14 = t9;
    t15 = (0 - 0);
    t11 = (t15 * 1);
    t16 = (32U * t11);
    t17 = (t14 + t16);
    t18 = t17;
    t19 = (t0 + 2056U);
    t20 = xsi_signal_get_last_event(t19);
    *((int64 *)t18) = t20;
    t21 = (t17 + 8U);
    t22 = (t0 + 3752U);
    t23 = *((char **)t22);
    memcpy(t21, t23, 16U);
    t22 = (t17 + 24U);
    *((unsigned char *)t22) = (unsigned char)1;
    t24 = (1 - 0);
    t25 = (t24 * 1);
    t26 = (32U * t25);
    t27 = (t14 + t26);
    t28 = t27;
    t29 = (t0 + 2216U);
    t30 = xsi_signal_get_last_event(t29);
    *((int64 *)t28) = t30;
    t31 = (t27 + 8U);
    t32 = (t0 + 3872U);
    t33 = *((char **)t32);
    memcpy(t31, t33, 16U);
    t32 = (t27 + 24U);
    *((unsigned char *)t32) = (unsigned char)1;
    t34 = (2 - 0);
    t35 = (t34 * 1);
    t36 = (32U * t35);
    t37 = (t14 + t36);
    t38 = t37;
    t39 = (t0 + 2376U);
    t40 = xsi_signal_get_last_event(t39);
    *((int64 *)t38) = t40;
    t41 = (t37 + 8U);
    t42 = (t0 + 3992U);
    t43 = *((char **)t42);
    memcpy(t41, t43, 16U);
    t42 = (t37 + 24U);
    *((unsigned char *)t42) = (unsigned char)1;
    t44 = (3 - 0);
    t45 = (t44 * 1);
    t46 = (32U * t45);
    t47 = (t14 + t46);
    t48 = t47;
    t49 = (t0 + 2536U);
    t50 = xsi_signal_get_last_event(t49);
    *((int64 *)t48) = t50;
    t51 = (t47 + 8U);
    t52 = (t0 + 4112U);
    t53 = *((char **)t52);
    memcpy(t51, t53, 16U);
    t52 = (t47 + 24U);
    *((unsigned char *)t52) = (unsigned char)1;
    t55 = (t54 + 0U);
    t56 = (t55 + 0U);
    *((int *)t56) = 0;
    t56 = (t55 + 4U);
    *((int *)t56) = 3;
    t56 = (t55 + 8U);
    *((int *)t56) = 1;
    t57 = (3 - 0);
    t58 = (t57 * 1);
    t58 = (t58 + 1);
    t56 = (t55 + 12U);
    *((unsigned int *)t56) = t58;
    t56 = ((IEEE_P_2717149903) + 1288U);
    t59 = *((char **)t56);
    memcpy(t60, t59, 16U);
    t56 = (t0 + 3032U);
    t61 = *((char **)t56);
    t62 = *((unsigned char *)t61);
    t56 = (t0 + 3152U);
    t63 = *((char **)t56);
    t64 = *((unsigned char *)t63);
    ieee_p_2717149903_sub_2486506143_2101202839(IEEE_P_2717149903, t1, t2, 0U, 0U, t3, t5, t4, t7, t13, t9, t54, t60, (unsigned char)3, t62, t64, (unsigned char)1, (unsigned char)0, (unsigned char)0, (unsigned char)0);
    t1 = (t0 + 7360);
    *((int *)t1) = 1;

LAB1:    return;
}


extern void simprim_a_0873044386_1957906245_0747573283_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_0747573283", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_0747573283.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3445495524_1957906245_0060156627_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3445495524_1957906245_0060156627", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3445495524_1957906245_0060156627.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_0060156627_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_0060156627", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2707860152_1957906245_0060156627.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3445495524_1957906245_0147434990_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3445495524_1957906245_0147434990", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3445495524_1957906245_0147434990.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0489131564_1957906245_0147434990_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0489131564_1957906245_0147434990", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0489131564_1957906245_0147434990.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_0151767001_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_0151767001", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2011134832_1957906245_0151767001.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0347299594_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0347299594", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_0347299594.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1395359707_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1395359707", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_1395359707.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1391007212_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1391007212", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_1391007212.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0518250192_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0518250192", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0518250192.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1413810611_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1413810611", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_1413810611.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1413810611_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1413810611", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_1413810611.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_2085860681_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_2085860681", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_2085860681.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_3409897891_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_3409897891", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_3409897891.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2824878347_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2824878347", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_2824878347.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2905550734_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2905550734", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_2905550734.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_2901231033_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_2901231033", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_2901231033.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2901231033_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2901231033", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_2901231033.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1007456660_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1007456660", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_1007456660.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_3030025819_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_3030025819", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_3030025819.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3190348893_1957906245_3030025819_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3190348893_1957906245_3030025819", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3190348893_1957906245_3030025819.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3102250333_1957906245_3042503788_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3102250333_1957906245_3042503788", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3102250333_1957906245_3042503788.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3570411777_1957906245_3042503788_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3570411777_1957906245_3042503788", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3570411777_1957906245_3042503788.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3102250333_1957906245_2954361577_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3102250333_1957906245_2954361577", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3102250333_1957906245_2954361577.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0796611661_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0796611661", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0796611661.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1002112408_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1002112408", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_1002112408.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0699438758_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0699438758", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_0699438758.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2374143732_1957906245_0090056760_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2374143732_1957906245_0090056760", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2374143732_1957906245_0090056760.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3445495524_1957906245_0001130173_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3445495524_1957906245_0001130173", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3445495524_1957906245_0001130173.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2445705939_1957906245_0408456251_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2445705939_1957906245_0408456251", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2445705939_1957906245_0408456251.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3960525574_1957906245_0315007281_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3960525574_1957906245_0315007281", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3960525574_1957906245_0315007281.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3960525574_1957906245_0262288720_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3960525574_1957906245_0262288720", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3960525574_1957906245_0262288720.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_1231908792_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_1231908792", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_1231908792.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2191589964_1957906245_1471456011_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2191589964_1957906245_1471456011", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2191589964_1957906245_1471456011.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1471456011_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1471456011", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1471456011.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2833581735_1957906245_3504520082_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2833581735_1957906245_3504520082", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2833581735_1957906245_3504520082.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3504520082_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3504520082", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3504520082.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2833581735_1957906245_0444334592_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2833581735_1957906245_0444334592", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2833581735_1957906245_0444334592.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_0444334592_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_0444334592", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_0444334592.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2660863500_1957906245_3508588965_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2660863500_1957906245_3508588965", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2660863500_1957906245_3508588965.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_3508588965_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_3508588965", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_3508588965.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2660863500_1957906245_2465931542_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2660863500_1957906245_2465931542", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2660863500_1957906245_2465931542.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_2465931542_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_2465931542", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_2465931542.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0537150906_1957906245_1483053188_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0537150906_1957906245_1483053188", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0537150906_1957906245_1483053188.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1483053188_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1483053188", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1483053188.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2452599831_1957906245_3305039605_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2452599831_1957906245_3305039605", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2452599831_1957906245_3305039605.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3305039605_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3305039605", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3305039605.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4005933550_1957906245_2515700170_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4005933550_1957906245_2515700170", "isim/ckt_tb_isim_par.exe.sim/simprim/a_4005933550_1957906245_2515700170.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1426802098_1957906245_2515700170_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1426802098_1957906245_2515700170", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1426802098_1957906245_2515700170.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0250119241_1957906245_2231474301_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0250119241_1957906245_2231474301", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0250119241_1957906245_2231474301.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1541491946_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1541491946", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1541491946.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_3686726831_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_3686726831", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_3686726831.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3686726831_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3686726831", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3686726831.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3656925942_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3656925942", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3656925942.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_3656925942_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_3656925942", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_3656925942.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_3665598104_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_3665598104", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_3665598104.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_3665598104_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_3665598104", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_3665598104.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_3627690177_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_3627690177", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_3627690177.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3627690177_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3627690177", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3627690177.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_3281354315_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_3281354315", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_3281354315.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3281354315_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3281354315", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3281354315.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1486114703_1957906245_2399070138_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1486114703_1957906245_2399070138", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1486114703_1957906245_2399070138.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1512253149_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1512253149", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1512253149.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1600925784_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1600925784", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1600925784.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1558766646_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1558766646", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1558766646.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1558766646_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1558766646", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1558766646.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0495117405_1957906245_2173661300_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0495117405_1957906245_2173661300", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0495117405_1957906245_2173661300.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2593767918_1957906245_2488456095_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2593767918_1957906245_2488456095", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2593767918_1957906245_2488456095.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1105581484_1957906245_2488456095_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1105581484_1957906245_2488456095", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1105581484_1957906245_2488456095.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1105581484_1957906245_2509289896_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1105581484_1957906245_2509289896", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1105581484_1957906245_2509289896.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0166967330_1957906245_2509289896_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0166967330_1957906245_2509289896", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0166967330_1957906245_2509289896.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3960525574_1957906245_0852322834_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3960525574_1957906245_0852322834", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3960525574_1957906245_0852322834.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1402384158_1957906245_0852322834_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1402384158_1957906245_0852322834", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1402384158_1957906245_0852322834.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3121649831_1957906245_2992415805_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3121649831_1957906245_2992415805", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3121649831_1957906245_2992415805.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3225336095_1957906245_0826916476_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3225336095_1957906245_0826916476", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3225336095_1957906245_0826916476.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_0151767001_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_0151767001", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2707860152_1957906245_0151767001.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1470497641_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1470497641", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_1470497641.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1470497641_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1470497641", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_1470497641.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_3405546388_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_3405546388", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_3405546388.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1434936196_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1434936196", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_1434936196.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_3405546388_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_3405546388", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_3405546388.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1036975011_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1036975011", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_1036975011.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1065895418_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1065895418", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_1065895418.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1007456660_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1007456660", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_1007456660.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0759032340_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0759032340", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_0759032340.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0272507832_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0272507832", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_0272507832.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0678624401_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0678624401", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_0678624401.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3190348893_1957906245_0262288720_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3190348893_1957906245_0262288720", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3190348893_1957906245_0262288720.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_0203874622_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_0203874622", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_0203874622.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2480893479_1957906245_0203874622_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2480893479_1957906245_0203874622", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2480893479_1957906245_0203874622.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_3368630646_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_3368630646", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_3368630646.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2405746630_1957906245_3368630646_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2405746630_1957906245_3368630646", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2405746630_1957906245_3368630646.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3372962625_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3372962625", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3372962625.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3105378157_1957906245_3372962625_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3105378157_1957906245_3372962625", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3105378157_1957906245_3372962625.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4030355287_1957906245_3427026372_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4030355287_1957906245_3427026372", "isim/ckt_tb_isim_par.exe.sim/simprim/a_4030355287_1957906245_3427026372.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0383625056_1957906245_3427026372_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0383625056_1957906245_3427026372", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0383625056_1957906245_3427026372.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_1562974906_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_1562974906", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_1562974906.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1562974906_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1562974906", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1562974906.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_2377857868_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_2377857868", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_2377857868.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_2377857868_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_2377857868", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_2377857868.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0883749843_1957906245_3254966871_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0883749843_1957906245_3254966871", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0883749843_1957906245_3254966871.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_2470005537_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_2470005537", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_2470005537.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_2470005537_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_2470005537", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_2470005537.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1588484719_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1588484719", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1588484719.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1588484719_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1588484719", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1588484719.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3445495524_1957906245_1259494749_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3445495524_1957906245_1259494749", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3445495524_1957906245_1259494749.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0270216745_1957906245_1335828975_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0270216745_1957906245_1335828975", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0270216745_1957906245_1335828975.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3363072122_1957906245_1335828975_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3363072122_1957906245_1335828975", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3363072122_1957906245_1335828975.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1431407109_1957906245_2403110285_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1431407109_1957906245_2403110285", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1431407109_1957906245_2403110285.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2598168259_1957906245_2403110285_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2598168259_1957906245_2403110285", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2598168259_1957906245_2403110285.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3079895898_1957906245_3365730141_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3079895898_1957906245_3365730141", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3079895898_1957906245_3365730141.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2004488449_1957906245_3365730141_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2004488449_1957906245_3365730141", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2004488449_1957906245_3365730141.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2378328266_1957906245_2632478894_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2378328266_1957906245_2632478894", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2378328266_1957906245_2632478894.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2667177899_1957906245_2632478894_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2667177899_1957906245_2632478894", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2667177899_1957906245_2632478894.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_2486400838_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_2486400838", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2707860152_1957906245_2486400838.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_2486400838_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_2486400838", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2011134832_1957906245_2486400838.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_2515606897_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_2515606897", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2707860152_1957906245_2515606897.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0489131564_1957906245_2515606897_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0489131564_1957906245_2515606897", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0489131564_1957906245_2515606897.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_2545394472_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_2545394472", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2707860152_1957906245_2545394472.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_0342840248_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_0342840248", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2707860152_1957906245_0342840248.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0489131564_1957906245_0342840248_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0489131564_1957906245_0342840248", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0489131564_1957906245_0342840248.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_0363673999_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_0363673999", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2707860152_1957906245_0363673999.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2812732344_1957906245_0363673999_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2812732344_1957906245_0363673999", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2812732344_1957906245_0363673999.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2812732344_1957906245_0401311702_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2812732344_1957906245_0401311702", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2812732344_1957906245_0401311702.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_0401311702_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_0401311702", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2011134832_1957906245_0401311702.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_0371846625_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_0371846625", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2707860152_1957906245_0371846625.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0489131564_1957906245_0371846625_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0489131564_1957906245_0371846625", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0489131564_1957906245_0371846625.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0489131564_1957906245_0325516132_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0489131564_1957906245_0325516132", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0489131564_1957906245_0325516132.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_0325516132_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_0325516132", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2707860152_1957906245_0325516132.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_0312774995_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_0312774995", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2011134832_1957906245_0312774995.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2812732344_1957906245_0312774995_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2812732344_1957906245_0312774995", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2812732344_1957906245_0312774995.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_0283258634_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_0283258634", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2011134832_1957906245_0283258634.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_0283258634_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_0283258634", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2707860152_1957906245_0283258634.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0489131564_1957906245_0287327549_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0489131564_1957906245_0287327549", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0489131564_1957906245_0287327549.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2812732344_1957906245_0287327549_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2812732344_1957906245_0287327549", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2812732344_1957906245_0287327549.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1103043099_1957906245_1590454797_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1103043099_1957906245_1590454797", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1103043099_1957906245_1590454797.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4124542743_1957906245_1590454797_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4124542743_1957906245_1590454797", "isim/ckt_tb_isim_par.exe.sim/simprim/a_4124542743_1957906245_1590454797.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2445705939_1957906245_1594753082_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2445705939_1957906245_1594753082", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2445705939_1957906245_1594753082.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2533805011_1957906245_1594753082_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2533805011_1957906245_1594753082", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2533805011_1957906245_1594753082.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3102250333_1957906245_1114281051_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3102250333_1957906245_1114281051", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3102250333_1957906245_1114281051.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2445705939_1957906245_1114281051_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2445705939_1957906245_1114281051", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2445705939_1957906245_1114281051.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3102250333_1957906245_1135148652_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3102250333_1957906245_1135148652", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3102250333_1957906245_1135148652.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1754336661_1957906245_1106133045_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1754336661_1957906245_1106133045", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1754336661_1957906245_1106133045.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3570411777_1957906245_1076636162_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3570411777_1957906245_1076636162", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3570411777_1957906245_1076636162.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0389516132_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0389516132", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0389516132.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0359740733_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0359740733", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_0359740733.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0347299594_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0347299594", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_0347299594.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0522302695_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0522302695", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0522302695.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0443458146_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0443458146", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_0443458146.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0443458146_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0443458146", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_0443458146.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_2942931415_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_2942931415", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_2942931415.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_2754991850_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_2754991850", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_2754991850.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_2784476381_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_2784476381", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_2784476381.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_2784476381_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_2784476381", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_2784476381.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2391861035_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2391861035", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_2391861035.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2404551964_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2404551964", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_2404551964.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_2317196185_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_2317196185", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_2317196185.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_2317196185_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_2317196185", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_2317196185.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_3380107258_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_3380107258", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_3380107258.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_3426173311_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_3426173311", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_3426173311.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_3455396680_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_3455396680", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_3455396680.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_3455396680_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_3455396680", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_3455396680.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1472323037_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1472323037", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_1472323037.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_2399070138_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_2399070138", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3910184593_1957906245_2399070138.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3829926514_1957906245_1563069953_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3829926514_1957906245_1563069953", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3829926514_1957906245_1563069953.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1114409679_1957906245_1563069953_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1114409679_1957906245_1563069953", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1114409679_1957906245_1563069953.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1878225034_1957906245_0465463351_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1878225034_1957906245_0465463351", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1878225034_1957906245_0465463351.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3398403887_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3398403887", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3398403887.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3485503914_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3485503914", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3485503914.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3456301981_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3456301981", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3456301981.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_3378421098_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_3378421098", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_3378421098.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_3378421098_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_3378421098", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_3378421098.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_0119051873_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_0119051873", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_0119051873.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1314737112_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1314737112", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1314737112.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1314737112_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1314737112", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1314737112.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_2388516672_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_2388516672", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_2388516672.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1153656530_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1153656530", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1153656530.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_2409608567_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_2409608567", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_2409608567.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_2409608567_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_2409608567", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_2409608567.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_2441082232_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_2441082232", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_2441082232.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3787076264_1957906245_2441082232_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3787076264_1957906245_2441082232", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3787076264_1957906245_2441082232.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3260486780_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3260486780", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3260486780.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3740396074_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3740396074", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3740396074.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1157696741_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1157696741", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1157696741.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_3715448388_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_3715448388", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_3715448388.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_3715448388_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_3715448388", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_3715448388.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3744694301_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3744694301", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3744694301.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_3744694301_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_3744694301", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_3744694301.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_2356760955_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_2356760955", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_2356760955.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_2356760955_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_2356760955", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_2356760955.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_3889415046_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_3889415046", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_3889415046.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3889415046_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3889415046", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3889415046.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1354669932_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1354669932", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1354669932.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_1354669932_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_1354669932", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_1354669932.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1512092262_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1512092262", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1512092262.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1483082815_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1483082815", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1483082815.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1483082815_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1483082815", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1483082815.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1367143771_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1367143771", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1367143771.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0883749843_1957906245_3410881816_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0883749843_1957906245_3410881816", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0883749843_1957906245_3410881816.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1337731919_1957906245_1230299908_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1337731919_1957906245_1230299908", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1337731919_1957906245_1230299908.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2004668744_1957906245_1217825075_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2004668744_1957906245_1217825075", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2004668744_1957906245_1217825075.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0981467293_1957906245_1217825075_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0981467293_1957906245_1217825075", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0981467293_1957906245_1217825075.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_1255159658_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_1255159658", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0923001696_1957906245_1255159658.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1431407109_1957906245_1255159658_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1431407109_1957906245_1255159658", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1431407109_1957906245_1255159658.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_0115014742_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_0115014742", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_0115014742.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_2545170323_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_2545170323", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_2545170323.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0349459204_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0349459204", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0349459204.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0378727773_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0378727773", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0378727773.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0391153514_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0391153514", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_0391153514.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0391153514_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0391153514", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0391153514.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3963212117_1957906245_1818900102_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3963212117_1957906245_1818900102", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3963212117_1957906245_1818900102.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3963212117_1957906245_1839750321_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3963212117_1957906245_1839750321", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3963212117_1957906245_1839750321.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3963212117_1957906245_1877926632_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3963212117_1957906245_1877926632", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3963212117_1957906245_1877926632.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1359617846_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1359617846", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_1359617846.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1355314433_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1355314433", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_1355314433.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1385089880_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1385089880", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_1385089880.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1385089880_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1385089880", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_1385089880.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0948038950_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0948038950", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_0948038950.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0986141567_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0986141567", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0986141567.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0990198088_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0990198088", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_0990198088.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0990198088_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0990198088", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0990198088.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_2537991906_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_2537991906", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_2537991906.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_2525283541_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_2525283541", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_2525283541.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_2495773324_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_2495773324", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_2495773324.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2495773324_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2495773324", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_2495773324.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0832246850_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0832246850", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0832246850.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2264287400_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2264287400", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_2264287400.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_2268340895_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_2268340895", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_2268340895.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2268340895_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2268340895", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_2268340895.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0101118180_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0101118180", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0101118180.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0055174753_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0055174753", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0055174753.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0042699862_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0042699862", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_0042699862.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0042699862_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0042699862", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0042699862.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0421845724_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0421845724", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_0421845724.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0071323325_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0071323325", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_0071323325.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0092415114_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0092415114", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_0092415114.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0092415114_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0092415114", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_0092415114.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0783892090_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0783892090", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_0783892090.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0783892090_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0783892090", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0783892090.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0309894625_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0309894625", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_0309894625.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0331020246_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0331020246", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_0331020246.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0331020246_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0331020246", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0078229961_1957906245_0331020246.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0981036975_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0981036975", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0981036975.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_2366911301_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_2366911301", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_2366911301.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2366911301_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2366911301", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_2366911301.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0708068040_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0708068040", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1850819733_1957906245_0708068040.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0699438758_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0699438758", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_0699438758.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0285057852_1957906245_0090056760_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0285057852_1957906245_0090056760", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0285057852_1957906245_0090056760.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3445495524_1957906245_0030626954_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3445495524_1957906245_0030626954", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3445495524_1957906245_0030626954.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0489131564_1957906245_0001130173_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0489131564_1957906245_0001130173", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0489131564_1957906245_0001130173.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_0039289060_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_0039289060", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_0039289060.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0468174636_1957906245_0039289060_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0468174636_1957906245_0039289060", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0468174636_1957906245_0039289060.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1103043099_1957906245_0429581836_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1103043099_1957906245_0429581836", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1103043099_1957906245_0429581836.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4215175055_1957906245_0429581836_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4215175055_1957906245_0429581836", "isim/ckt_tb_isim_par.exe.sim/simprim/a_4215175055_1957906245_0429581836.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0408456251_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0408456251", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0763864647_1957906245_0408456251.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3960525574_1957906245_0319081222_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3960525574_1957906245_0319081222", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3960525574_1957906245_0319081222.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4215175055_1957906245_0319081222_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4215175055_1957906245_0319081222", "isim/ckt_tb_isim_par.exe.sim/simprim/a_4215175055_1957906245_0319081222.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3102250333_1957906245_1591420089_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3102250333_1957906245_1591420089", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3102250333_1957906245_1591420089.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3680186179_1957906245_2963144131_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3680186179_1957906245_2963144131", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3680186179_1957906245_2963144131.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0457469204_1957906245_2963144131_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0457469204_1957906245_2963144131", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0457469204_1957906245_2963144131.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2547982789_1957906245_2428346191_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2547982789_1957906245_2428346191", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2547982789_1957906245_2428346191.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3252644452_1957906245_2428346191_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3252644452_1957906245_2428346191", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3252644452_1957906245_2428346191.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_2899522781_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_2899522781", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_2899522781.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2191589964_1957906245_2899522781_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2191589964_1957906245_2899522781", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2191589964_1957906245_2899522781.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1737484152_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1737484152", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1737484152.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2770387757_1957906245_1737484152_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2770387757_1957906245_1737484152", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2770387757_1957906245_1737484152.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1716358479_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1716358479", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1716358479.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2770387757_1957906245_1716358479_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2770387757_1957906245_1716358479", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2770387757_1957906245_1716358479.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1619414948_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1619414948", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1619414948.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0999260011_1957906245_1619414948_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0999260011_1957906245_1619414948", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0999260011_1957906245_1619414948.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_2903596778_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_2903596778", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_2903596778.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0990665418_1957906245_2903596778_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0990665418_1957906245_2903596778", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0990665418_1957906245_2903596778.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1631856019_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1631856019", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1631856019.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2770387757_1957906245_1631856019_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2770387757_1957906245_1631856019", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2770387757_1957906245_1631856019.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_2883230721_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_2883230721", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_2883230721.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0470728202_1957906245_2883230721_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0470728202_1957906245_2883230721", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0470728202_1957906245_2883230721.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1678455574_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1678455574", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1678455574.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0999260011_1957906245_1678455574_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0999260011_1957906245_1678455574", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0999260011_1957906245_1678455574.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_2929035908_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_2929035908", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_2929035908.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2660863500_1957906245_2929035908_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2660863500_1957906245_2929035908", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2660863500_1957906245_2929035908.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_2853762614_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_2853762614", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_2853762614.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2191589964_1957906245_2853762614_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2191589964_1957906245_2853762614", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2191589964_1957906245_2853762614.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_1707694369_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_1707694369", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_1707694369.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2833581735_1957906245_1707694369_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2833581735_1957906245_1707694369", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2833581735_1957906245_1707694369.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_2941771955_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_2941771955", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_2941771955.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2191589964_1957906245_2941771955_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2191589964_1957906245_2941771955", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2191589964_1957906245_2941771955.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_1193640670_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_1193640670", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_1193640670.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0479042475_1957906245_1193640670_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0479042475_1957906245_1193640670", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0479042475_1957906245_1193640670.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_3287764521_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_3287764521", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_3287764521.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2770387757_1957906245_3287764521_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2770387757_1957906245_3287764521", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2770387757_1957906245_3287764521.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0257136773_1957906245_4271938000_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0257136773_1957906245_4271938000", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0257136773_1957906245_4271938000.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_2231474301_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_2231474301", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_2231474301.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0420151950_1957906245_2227434058_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0420151950_1957906245_2227434058", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0420151950_1957906245_2227434058.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_2227434058_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_2227434058", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_2227434058.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3229891572_1957906245_4284675047_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3229891572_1957906245_4284675047", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3229891572_1957906245_4284675047.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2435080839_1957906245_4284675047_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2435080839_1957906245_4284675047", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2435080839_1957906245_4284675047.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0303622996_1957906245_2173494479_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0303622996_1957906245_2173494479", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0303622996_1957906245_2173494479.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2088738187_1957906245_2173494479_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2088738187_1957906245_2173494479", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2088738187_1957906245_2173494479.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1547700976_1957906245_4126990061_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1547700976_1957906245_4126990061", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1547700976_1957906245_4126990061.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2062668644_1957906245_4126990061_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2062668644_1957906245_4126990061", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2062668644_1957906245_4126990061.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1190241348_1957906245_3013529098_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1190241348_1957906245_3013529098", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1190241348_1957906245_3013529098.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_3013529098_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_3013529098", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_3013529098.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0495117405_1957906245_1541593169_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0495117405_1957906245_1541593169", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0495117405_1957906245_1541593169.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1541593169_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1541593169", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1541593169.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0848502549_1957906245_1151424176_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0848502549_1957906245_1151424176", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0848502549_1957906245_1151424176.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_1151424176_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_1151424176", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_1151424176.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4090678721_1957906245_3703002227_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4090678721_1957906245_3703002227", "isim/ckt_tb_isim_par.exe.sim/simprim/a_4090678721_1957906245_3703002227.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3703002227_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3703002227", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3703002227.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3466153576_1957906245_2975832052_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3466153576_1957906245_2975832052", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3466153576_1957906245_2975832052.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1714902704_1957906245_2975832052_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1714902704_1957906245_2975832052", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1714902704_1957906245_2975832052.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3448241394_1957906245_3448123379_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3448241394_1957906245_3448123379", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3448241394_1957906245_3448123379.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3448123379_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3448123379", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_3448123379.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0274254157_1957906245_2486232061_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0274254157_1957906245_2486232061", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0274254157_1957906245_2486232061.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0422775190_1957906245_2486232061_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0422775190_1957906245_2486232061", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0422775190_1957906245_2486232061.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2370809018_1957906245_2524339620_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2370809018_1957906245_2524339620", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2370809018_1957906245_2524339620.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1628610954_1957906245_2524339620_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1628610954_1957906245_2524339620", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1628610954_1957906245_2524339620.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3751166703_1957906245_0482524733_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3751166703_1957906245_0482524733", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3751166703_1957906245_0482524733.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2140580687_1957906245_0482524733_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2140580687_1957906245_0482524733", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2140580687_1957906245_0482524733.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3607345621_1957906245_2152632056_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3607345621_1957906245_2152632056", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3607345621_1957906245_2152632056.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1455144347_1957906245_2152632056_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1455144347_1957906245_2152632056", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1455144347_1957906245_2152632056.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2846842492_1957906245_4097750234_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2846842492_1957906245_4097750234", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2846842492_1957906245_4097750234.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1969569212_1957906245_4097750234_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1969569212_1957906245_4097750234", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1969569212_1957906245_4097750234.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_1306107830_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_1306107830", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_1306107830.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1306107830_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1306107830", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1306107830.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1504178867_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1504178867", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1504178867.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1504178867_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1504178867", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1504178867.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_2269586980_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_2269586980", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_2269586980.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0244861175_1957906245_2638752507_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0244861175_1957906245_2638752507", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0244861175_1957906245_2638752507.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0420151950_1957906245_2626306252_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0420151950_1957906245_2626306252", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0420151950_1957906245_2626306252.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2689333215_1957906245_2626306252_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2689333215_1957906245_2626306252", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2689333215_1957906245_2626306252.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0244861175_1957906245_2302035966_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0244861175_1957906245_2302035966", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0244861175_1957906245_2302035966.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2153841838_1957906245_2302035966_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2153841838_1957906245_2302035966", "isim/ckt_tb_isim_par.exe.sim/simprim/a_2153841838_1957906245_2302035966.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1164131463_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1164131463", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1164131463.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_1164131463_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_1164131463", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_1164131463.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_3309079746_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_3309079746", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_3309079746.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_3309079746_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_3309079746", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_3309079746.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_2339436967_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_2339436967", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_2339436967.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_2386554658_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_2386554658", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_2386554658.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_2415756565_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_2415756565", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_2415756565.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_1558933645_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_1558933645", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3110391562_1957906245_1558933645.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1189603561_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1189603561", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0667644748_1957906245_1189603561.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_1189603561_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_1189603561", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0297270247_1957906245_1189603561.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1908037633_1957906245_3254966871_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1908037633_1957906245_3254966871", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1908037633_1957906245_3254966871.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3152211871_1957906245_0242166165_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3152211871_1957906245_0242166165", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3152211871_1957906245_0242166165.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4073738940_1957906245_0242166165_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4073738940_1957906245_0242166165", "isim/ckt_tb_isim_par.exe.sim/simprim/a_4073738940_1957906245_0242166165.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_2545394472_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_2545394472", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_2545394472.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_2524301599_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_2524301599", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_2524301599.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_2524301599_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_2524301599", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_2524301599.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_2470109082_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_2470109082", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1479615998_1957906245_2470109082.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3832545642_1957906245_2470109082_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3832545642_1957906245_2470109082", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3832545642_1957906245_2470109082.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_2465772973_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_2465772973", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_2465772973.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_2428374004_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_2428374004", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_2428374004.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_2428374004_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_2428374004", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1479615998_1957906245_2428374004.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_2440847811_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_2440847811", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_2440847811.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3832545642_1957906245_2440847811_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3832545642_1957906245_2440847811", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3832545642_1957906245_2440847811.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_2585798398_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_2585798398", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_2585798398.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_2585798398_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_2585798398", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1479615998_1957906245_2585798398.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_2615299273_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_2615299273", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_2615299273.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_2615299273_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_2615299273", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_2615299273.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_0747573283_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_0747573283", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_0747573283.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0301746575_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0301746575", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_0301746575.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1449421150_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1449421150", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_1449421150.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0464308309_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0464308309", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_0464308309.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0385212755_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0385212755", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_0385212755.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_2346709422_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_2346709422", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_2346709422.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_3484652817_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_3484652817", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_3484652817.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1595494030_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1595494030", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_1595494030.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_3367648717_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_3367648717", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_3367648717.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0304058863_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0304058863", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_0304058863.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1877926632_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1877926632", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_1877926632.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1848412383_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1848412383", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_1848412383.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1397530991_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1397530991", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_1397530991.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0811171445_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0811171445", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_0811171445.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_2930506720_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_2930506720", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_2930506720.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0960726801_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0960726801", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_0960726801.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_2499809467_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_2499809467", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_2499809467.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_2238880966_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_2238880966", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_2238880966.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0013447695_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0013447695", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_0013447695.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0130325203_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0130325203", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_0130325203.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4261297807_1957906245_2954361577_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4261297807_1957906245_2954361577", "isim/ckt_tb_isim_par.exe.sim/simprim/a_4261297807_1957906245_2954361577.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_2983563486_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_2983563486", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_2983563486.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0737552639_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0737552639", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_0737552639.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0417771755_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0417771755", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_0417771755.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_2362857842_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_2362857842", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_2362857842.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0585945499_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0585945499", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1897869936_1957906245_0585945499.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_0077349391_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_0077349391", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1479615998_1957906245_0077349391.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_0077349391_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_0077349391", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_0077349391.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_0030626954_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_0030626954", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_0030626954.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_1591420089_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_1591420089", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1479615998_1957906245_1591420089.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_1557227658_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_1557227658", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_1557227658.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_1557227658_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_1557227658", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_1557227658.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3832545642_1957906245_1561526973_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3832545642_1957906245_1561526973", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3832545642_1957906245_1561526973.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_1561526973_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_1561526973", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1479615998_1957906245_1561526973.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_1599454436_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_1599454436", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_1599454436.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_1599454436_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_1599454436", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_1599454436.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3832545642_1957906245_1587009235_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3832545642_1957906245_1587009235", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3832545642_1957906245_1587009235.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_1587009235_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_1587009235", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1479615998_1957906245_1587009235.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_1540931670_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_1540931670", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_1540931670.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_1540931670_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_1540931670", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_1540931670.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3832545642_1957906245_1511696993_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3832545642_1957906245_1511696993", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3832545642_1957906245_1511696993.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_1511696993_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_1511696993", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1479615998_1957906245_1511696993.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_1482429496_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_1482429496", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_1482429496.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_1482429496_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_1482429496", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1479615998_1957906245_1482429496.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_1503559183_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_1503559183", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1479615998_1957906245_1503559183.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_1503559183_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_1503559183", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_1503559183.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_1388460338_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_1388460338", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_1388460338.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_1388460338_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_1388460338", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_1388460338.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_1392530181_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_1392530181", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_1392530181.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_1392530181_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_1392530181", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_1392530181.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_1315227492_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_1315227492", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1479615998_1957906245_1315227492.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3832545642_1957906245_1315227492_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3832545642_1957906245_1315227492", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3832545642_1957906245_1315227492.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_1336323411_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_1336323411", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_1336323411.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_1336323411_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_1336323411", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_1336323411.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_1306530570_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_1306530570", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1479615998_1957906245_1306530570.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3832545642_1957906245_1306530570_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3832545642_1957906245_1306530570", "isim/ckt_tb_isim_par.exe.sim/simprim/a_3832545642_1957906245_1306530570.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_1277327677_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_1277327677", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_1277327677.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_1277327677_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_1277327677", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0852086946_1957906245_1277327677.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_1231908792_init()
{
	static char *pe[] = {(void *)simprim_a_0873044386_1957906245_p_0,(void *)simprim_a_0873044386_1957906245_p_1,(void *)simprim_a_0873044386_1957906245_p_2,(void *)simprim_a_0873044386_1957906245_p_3,(void *)simprim_a_0873044386_1957906245_p_4,(void *)simprim_a_0873044386_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_0873044386_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_1231908792", "isim/ckt_tb_isim_par.exe.sim/simprim/a_0873044386_1957906245_1231908792.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
