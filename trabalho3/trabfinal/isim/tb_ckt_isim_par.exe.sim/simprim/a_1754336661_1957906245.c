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


unsigned char simprim_a_1754336661_1957906245_sub_655425482_3127390018(char *t1, char *t2, char *t3)
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

static void simprim_a_1754336661_1957906245_p_0(char *t0)
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

static void simprim_a_1754336661_1957906245_p_1(char *t0)
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

static void simprim_a_1754336661_1957906245_p_2(char *t0)
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

static void simprim_a_1754336661_1957906245_p_3(char *t0)
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

static void simprim_a_1754336661_1957906245_p_4(char *t0)
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
    t4 = simprim_a_1754336661_1957906245_sub_655425482_3127390018(t0, t2, t5);
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
    t6 = simprim_a_1754336661_1957906245_sub_655425482_3127390018(t0, t9, t13);
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
    t11 = simprim_a_1754336661_1957906245_sub_655425482_3127390018(t0, t19, t21);
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
    t16 = simprim_a_1754336661_1957906245_sub_655425482_3127390018(t0, t44, t64);
    t70 = ((IEEE_P_2592010699) + 4024);
    t69 = xsi_base_array_concat(t69, t12, t70, (char)97, t42, t7, (char)99, t16, (char)101);
    t71 = (t0 + 4472U);
    t72 = *((char **)t71);
    t73 = (3 - 3);
    t74 = (t73 * 1U);
    t75 = (0 + t74);
    t71 = (t72 + t75);
    t24 = simprim_a_1754336661_1957906245_sub_655425482_3127390018(t0, t69, t71);
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

static void simprim_a_1754336661_1957906245_p_5(char *t0)
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


extern void simprim_a_1754336661_1957906245_2734821202_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1754336661_1957906245_2734821202", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1754336661_1957906245_2734821202.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3102250333_1957906245_0822348900_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3102250333_1957906245_0822348900", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3102250333_1957906245_0822348900.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1754336661_1957906245_0822348900_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1754336661_1957906245_0822348900", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1754336661_1957906245_0822348900.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3570411777_1957906245_0818308691_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3570411777_1957906245_0818308691", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3570411777_1957906245_0818308691.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1398534107_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1398534107", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_1398534107.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1385793004_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1385793004", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_1385793004.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_3124226867_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_3124226867", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_3124226867.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0101118180_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0101118180", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_0101118180.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0055174753_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0055174753", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_0055174753.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1666055128_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1666055128", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1666055128.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1745992933_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1745992933", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1745992933.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1259494749_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1259494749", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_1259494749.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1255159658_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1255159658", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_1255159658.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3963212117_1957906245_1157696741_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3963212117_1957906245_1157696741", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3963212117_1957906245_1157696741.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_4126990061_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_4126990061", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_4126990061.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0453339275_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0453339275", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_0453339275.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0449249980_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0449249980", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_0449249980.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0449249980_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0449249980", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_0449249980.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1668390769_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1668390769", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1668390769.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1668390769_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1668390769", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_1668390769.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_3064768514_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_3064768514", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_3064768514.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_3064768514_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_3064768514", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_3064768514.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3960525574_1957906245_0183313365_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3960525574_1957906245_0183313365", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3960525574_1957906245_0183313365.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3960525574_1957906245_0028402920_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3960525574_1957906245_0028402920", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3960525574_1957906245_0028402920.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3960525574_1957906245_0007540447_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3960525574_1957906245_0007540447", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3960525574_1957906245_0007540447.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3608637837_1957906245_2231504070_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3608637837_1957906245_2231504070", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3608637837_1957906245_2231504070.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3656010061_1957906245_0849476860_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3656010061_1957906245_0849476860", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3656010061_1957906245_0849476860.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4005933550_1957906245_0849476860_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4005933550_1957906245_0849476860", "isim/tb_ckt_isim_par.exe.sim/simprim/a_4005933550_1957906245_0849476860.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3422369561_1957906245_3287764521_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3422369561_1957906245_3287764521", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3422369561_1957906245_3287764521.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1281701643_1957906245_3287764521_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1281701643_1957906245_3287764521", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1281701643_1957906245_3287764521.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0883749843_1957906245_4202298167_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0883749843_1957906245_4202298167", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0883749843_1957906245_4202298167.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1431407109_1957906245_4202298167_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1431407109_1957906245_4202298167", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1431407109_1957906245_4202298167.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0275337119_1957906245_0241196903_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0275337119_1957906245_0241196903", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0275337119_1957906245_0241196903.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1747685246_1957906245_0241196903_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1747685246_1957906245_0241196903", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1747685246_1957906245_0241196903.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_1354669932_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_1354669932", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_1354669932.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3787076264_1957906245_2297703881_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3787076264_1957906245_2297703881", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3787076264_1957906245_2297703881.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0883749843_1957906245_2297703881_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0883749843_1957906245_2297703881", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0883749843_1957906245_2297703881.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_3346674331_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_3346674331", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_3346674331.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2088738187_1957906245_3346674331_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2088738187_1957906245_3346674331", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2088738187_1957906245_3346674331.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2663214292_1957906245_1562974906_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2663214292_1957906245_1562974906", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2663214292_1957906245_1562974906.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1105204415_1957906245_4164896110_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1105204415_1957906245_4164896110", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1105204415_1957906245_4164896110.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4212618716_1957906245_4164896110_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4212618716_1957906245_4164896110", "isim/tb_ckt_isim_par.exe.sim/simprim/a_4212618716_1957906245_4164896110.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2063348719_1957906245_0145464716_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2063348719_1957906245_0145464716", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2063348719_1957906245_0145464716.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4062231289_1957906245_0145464716_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4062231289_1957906245_0145464716", "isim/tb_ckt_isim_par.exe.sim/simprim/a_4062231289_1957906245_0145464716.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1114409679_1957906245_3656925942_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1114409679_1957906245_3656925942", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1114409679_1957906245_3656925942.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_3656925942_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_3656925942", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_3656925942.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1114409679_1957906245_0312774995_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1114409679_1957906245_0312774995", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1114409679_1957906245_0312774995.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_0312774995_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_0312774995", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_0312774995.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_0325516132_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_0325516132", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_0325516132.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_0325516132_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_0325516132", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_0325516132.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_3665598104_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_3665598104", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_3665598104.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_2509289896_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_2509289896", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_2509289896.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_2509289896_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_2509289896", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_2509289896.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_2326958992_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_2326958992", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_2326958992.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3960525574_1957906245_0747406488_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3960525574_1957906245_0747406488", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3960525574_1957906245_0747406488.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3659348801_1957906245_0700682781_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3659348801_1957906245_0700682781", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3659348801_1957906245_0700682781.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1626464249_1957906245_0700682781_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1626464249_1957906245_0700682781", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1626464249_1957906245_0700682781.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2399535977_1957906245_3839441687_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2399535977_1957906245_3839441687", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2399535977_1957906245_3839441687.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1511047698_1957906245_3839441687_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1511047698_1957906245_3839441687", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1511047698_1957906245_3839441687.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3231437678_1957906245_0203874622_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3231437678_1957906245_0203874622", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3231437678_1957906245_0203874622.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1960116658_1957906245_0203874622_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1960116658_1957906245_0203874622", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1960116658_1957906245_0203874622.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_1558933645_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_1558933645", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2707860152_1957906245_1558933645.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4215175055_1957906245_2730517861_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4215175055_1957906245_2730517861", "isim/tb_ckt_isim_par.exe.sim/simprim/a_4215175055_1957906245_2730517861.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1754336661_1957906245_2730517861_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1754336661_1957906245_2730517861", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1754336661_1957906245_2730517861.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0042699862_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0042699862", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_0042699862.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0042699862_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0042699862", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_0042699862.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2260804617_1957906245_1153656530_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2260804617_1957906245_1153656530", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2260804617_1957906245_1153656530.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2152632056_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2152632056", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_2152632056.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1540931670_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1540931670", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_1540931670.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1655960902_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1655960902", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1655960902.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1626688287_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1626688287", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1626688287.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_3077489205_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_3077489205", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_3077489205.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_4014449788_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_4014449788", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_4014449788.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0549307915_1957906245_2231504070_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0549307915_1957906245_2231504070", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0549307915_1957906245_2231504070.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3523520601_1957906245_1353690037_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3523520601_1957906245_1353690037", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3523520601_1957906245_1353690037.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1942551952_1957906245_1353690037_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1942551952_1957906245_1353690037", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1942551952_1957906245_1353690037.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0737069551_1957906245_2616424464_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0737069551_1957906245_2616424464", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0737069551_1957906245_2616424464.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3092119340_1957906245_2616424464_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3092119340_1957906245_2616424464", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3092119340_1957906245_2616424464.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2331777579_1957906245_3859954954_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2331777579_1957906245_3859954954", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2331777579_1957906245_3859954954.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1441466606_1957906245_3802087864_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1441466606_1957906245_3802087864", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1441466606_1957906245_3802087864.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3370445208_1957906245_3802087864_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3370445208_1957906245_3802087864", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3370445208_1957906245_3802087864.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1011255764_1957906245_3859954954_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1011255764_1957906245_3859954954", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1011255764_1957906245_3859954954.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2713960649_1957906245_1562974906_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2713960649_1957906245_1562974906", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2713960649_1957906245_1562974906.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_2488456095_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_2488456095", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_2488456095.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_2488456095_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_2488456095", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_2488456095.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_3686726831_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_3686726831", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_3686726831.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1114409679_1957906245_3686726831_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1114409679_1957906245_3686726831", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1114409679_1957906245_3686726831.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_1512092262_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_1512092262", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_1512092262.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_1512092262_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_1512092262", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_1512092262.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_2326958992_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_2326958992", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_2326958992.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2655880337_1957906245_0747406488_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2655880337_1957906245_0747406488", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2655880337_1957906245_0747406488.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0284910453_1957906245_2211040813_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0284910453_1957906245_2211040813", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0284910453_1957906245_2211040813.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0453479024_1957906245_2211040813_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0453479024_1957906245_2211040813", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0453479024_1957906245_2211040813.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_3228801607_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_3228801607", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_3228801607.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_0626738583_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_0626738583", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2011134832_1957906245_0626738583.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3445495524_1957906245_0626738583_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3445495524_1957906245_0626738583", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3445495524_1957906245_0626738583.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_0538202898_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_0538202898", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2011134832_1957906245_0538202898.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3445495524_1957906245_0538202898_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3445495524_1957906245_0538202898", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3445495524_1957906245_0538202898.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2812732344_1957906245_0567687461_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2812732344_1957906245_0567687461", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2812732344_1957906245_0567687461.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_0938404473_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_0938404473", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0852086946_1957906245_0938404473.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3445495524_1957906245_1590454797_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3445495524_1957906245_1590454797", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3445495524_1957906245_1590454797.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0489131564_1957906245_1590454797_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0489131564_1957906245_1590454797", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0489131564_1957906245_1590454797.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2812732344_1957906245_1594753082_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2812732344_1957906245_1594753082", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2812732344_1957906245_1594753082.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_1594753082_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_1594753082", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2011134832_1957906245_1594753082.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3445495524_1957906245_1114281051_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3445495524_1957906245_1114281051", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3445495524_1957906245_1114281051.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_1114281051_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_1114281051", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2011134832_1957906245_1114281051.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0489131564_1957906245_1135148652_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0489131564_1957906245_1135148652", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0489131564_1957906245_1135148652.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3445495524_1957906245_1135148652_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3445495524_1957906245_1135148652", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3445495524_1957906245_1135148652.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2812732344_1957906245_1106133045_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2812732344_1957906245_1106133045", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2812732344_1957906245_1106133045.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_1106133045_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_1106133045", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2011134832_1957906245_1106133045.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2812732344_1957906245_1076636162_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2812732344_1957906245_1076636162", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2812732344_1957906245_1076636162.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_1076636162_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_1076636162", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2707860152_1957906245_1076636162.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_1164131463_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_1164131463", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2011134832_1957906245_1164131463.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_1164131463_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_1164131463", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2707860152_1957906245_1164131463.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2812732344_1957906245_1151424176_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2812732344_1957906245_1151424176", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2812732344_1957906245_1151424176.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_1151424176_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_1151424176", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2707860152_1957906245_1151424176.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2812732344_1957906245_1189603561_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2812732344_1957906245_1189603561", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2812732344_1957906245_1189603561.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_1189603561_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_1189603561", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2707860152_1957906245_1189603561.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2707860152_1957906245_1193640670_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2707860152_1957906245_1193640670", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2707860152_1957906245_1193640670.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_1193640670_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_1193640670", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2011134832_1957906245_1193640670.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2812732344_1957906245_1283048931_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2812732344_1957906245_1283048931", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2812732344_1957906245_1283048931.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_1283048931_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_1283048931", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2011134832_1957906245_1283048931.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4215175055_1957906245_2824751215_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4215175055_1957906245_2824751215", "isim/tb_ckt_isim_par.exe.sim/simprim/a_4215175055_1957906245_2824751215.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1569166939_1957906245_2824751215_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1569166939_1957906245_2824751215", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1569166939_1957906245_2824751215.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2533805011_1957906245_2845581912_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2533805011_1957906245_2845581912", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2533805011_1957906245_2845581912.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1103043099_1957906245_2845581912_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1103043099_1957906245_2845581912", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1103043099_1957906245_2845581912.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1473680233_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1473680233", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_1473680233.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1473680233_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1473680233", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1473680233.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1261162977_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1261162977", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1261162977.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1081579228_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1081579228", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1081579228.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1102445803_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1102445803", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_1102445803.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1102445803_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1102445803", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1102445803.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0017782840_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0017782840", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_0017782840.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0173219589_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0173219589", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_0173219589.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0194082098_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0194082098", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_0194082098.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0194082098_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0194082098", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_0194082098.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_3880864069_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_3880864069", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_3880864069.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_3868402546_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_3868402546", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_3868402546.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1356807093_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1356807093", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_1356807093.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1356807093_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1356807093", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_1356807093.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_3199899521_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_3199899521", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_3199899521.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_3153428740_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_3153428740", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_3153428740.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_3124226867_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_3124226867", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_3124226867.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1775490770_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1775490770", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_1775490770.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1775490770_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1775490770", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1775490770.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1306530570_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1306530570", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1306530570.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1277327677_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1277327677", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1277327677.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1231908792_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1231908792", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_1231908792.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1231908792_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1231908792", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_1231908792.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2403110285_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2403110285", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_2403110285.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1255159658_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1255159658", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_1255159658.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3963212117_1957906245_1153656530_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3963212117_1957906245_1153656530", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3963212117_1957906245_1153656530.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3963212117_1957906245_1504178867_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3963212117_1957906245_1504178867", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3963212117_1957906245_1504178867.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2173494479_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2173494479", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_2173494479.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_2211076758_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_2211076758", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_2211076758.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_2211076758_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_2211076758", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_2211076758.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1599454436_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1599454436", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1599454436.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1587009235_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1587009235", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1587009235.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1540931670_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1540931670", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1540931670.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0115014742_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0115014742", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_0115014742.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0119051873_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0119051873", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_0119051873.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_0119051873_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_0119051873", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_0119051873.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_2942931415_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_2942931415", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_2942931415.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2942931415_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2942931415", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_2942931415.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2754991850_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2754991850", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_2754991850.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_2784476381_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_2784476381", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_2784476381.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2784476381_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2784476381", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_2784476381.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1276900737_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1276900737", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1276900737.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_1306107830_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_1306107830", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_1306107830.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1335828975_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1335828975", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_1335828975.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1335828975_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1335828975", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_1335828975.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1388460338_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1388460338", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_1388460338.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1392530181_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1392530181", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_1392530181.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1315227492_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1315227492", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_1315227492.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1315227492_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1315227492", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_1315227492.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0274280374_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0274280374", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_0274280374.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3102250333_1957906245_3367648717_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3102250333_1957906245_3367648717", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3102250333_1957906245_3367648717.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0726134599_1957906245_3367648717_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0726134599_1957906245_3367648717", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0726134599_1957906245_3367648717.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3570411777_1957906245_3380107258_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3570411777_1957906245_3380107258", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3570411777_1957906245_3380107258.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3102250333_1957906245_3380107258_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3102250333_1957906245_3380107258", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3102250333_1957906245_3380107258.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3102250333_1957906245_3426173311_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3102250333_1957906245_3426173311", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3102250333_1957906245_3426173311.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0593743475_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0593743475", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_0593743475.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0656276430_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0656276430", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_0656276430.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_0652186105_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_0652186105", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_0652186105.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_0652186105_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_0652186105", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_0652186105.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1788443862_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1788443862", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_1788443862.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1640315883_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1640315883", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_1640315883.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_1611092444_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_1611092444", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_1611092444.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_1611092444_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_1611092444", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_1611092444.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1850819733_1957906245_2226190065_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1850819733_1957906245_2226190065", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1850819733_1957906245_2226190065.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_2181030004_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_2181030004", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_2181030004.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_2151516739_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_2151516739", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_2151516739.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0078229961_1957906245_2151516739_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0078229961_1957906245_2151516739", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0078229961_1957906245_2151516739.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_2173661300_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_2173661300", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2011134832_1957906245_2173661300.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2812732344_1957906245_2152536643_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2812732344_1957906245_2152536643", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2812732344_1957906245_2152536643.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_2152536643_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_2152536643", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2011134832_1957906245_2152536643.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1061827423_1957906245_2181800986_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1061827423_1957906245_2181800986", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1061827423_1957906245_2181800986.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2011134832_1957906245_2181800986_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2011134832_1957906245_2181800986", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2011134832_1957906245_2181800986.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1103043099_1957906245_0593374124_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1103043099_1957906245_0593374124", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1103043099_1957906245_0593374124.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4215175055_1957906245_0593374124_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4215175055_1957906245_0593374124", "isim/tb_ckt_isim_par.exe.sim/simprim/a_4215175055_1957906245_0593374124.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0763864647_1957906245_2975344794_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0763864647_1957906245_2975344794", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0763864647_1957906245_2975344794.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3960525574_1957906245_2962899629_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3960525574_1957906245_2962899629", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3960525574_1957906245_2962899629.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0726134599_1957906245_2962899629_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0726134599_1957906245_2962899629", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0726134599_1957906245_2962899629.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3960525574_1957906245_3000827124_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3960525574_1957906245_3000827124", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3960525574_1957906245_3000827124.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3190348893_1957906245_3005126339_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3190348893_1957906245_3005126339", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3190348893_1957906245_3005126339.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3960525574_1957906245_3005126339_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3960525574_1957906245_3005126339", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3960525574_1957906245_3005126339.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1593289911_1957906245_2586907175_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1593289911_1957906245_2586907175", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1593289911_1957906245_2586907175.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1267655461_1957906245_2586907175_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1267655461_1957906245_2586907175", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1267655461_1957906245_2586907175.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3197263542_1957906245_1366147458_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3197263542_1957906245_1366147458", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3197263542_1957906245_1366147458.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4248992813_1957906245_1366147458_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4248992813_1957906245_1366147458", "isim/tb_ckt_isim_par.exe.sim/simprim/a_4248992813_1957906245_1366147458.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_1072292131_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_1072292131", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0297270247_1957906245_1072292131.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_1072292131_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_1072292131", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0667644748_1957906245_1072292131.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_0820462245_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_0820462245", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3110391562_1957906245_0820462245.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_0820462245_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_0820462245", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0667644748_1957906245_0820462245.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3817870308_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3817870308", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0297270247_1957906245_3817870308.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_3817870308_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_3817870308", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3110391562_1957906245_3817870308.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_0554279212_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_0554279212", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0667644748_1957906245_0554279212.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_0550226715_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_0550226715", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0297270247_1957906245_0550226715.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_0550226715_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_0550226715", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0667644748_1957906245_0550226715.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_3952548030_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_3952548030", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0297270247_1957906245_3952548030.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_3952548030_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_3952548030", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3110391562_1957906245_3952548030.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_1230469055_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_1230469055", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_1230469055.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_1335670100_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_1335670100", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_1335670100.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1114409679_1957906245_1335670100_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1114409679_1957906245_1335670100", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1114409679_1957906245_1335670100.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_1255384017_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_1255384017", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_1255384017.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_1255384017_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_1255384017", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_1255384017.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_1259456998_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_1259456998", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_1259456998.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_1259456998_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_1259456998", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_1259456998.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3271299829_1957906245_3627690177_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3271299829_1957906245_3627690177", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3271299829_1957906245_3627690177.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0796896189_1957906245_3627690177_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0796896189_1957906245_3627690177", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0796896189_1957906245_3627690177.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1511047698_1957906245_2470109082_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1511047698_1957906245_2470109082", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1511047698_1957906245_2470109082.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3451804600_1957906245_2470109082_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3451804600_1957906245_2470109082", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3451804600_1957906245_2470109082.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1350448520_1957906245_1503946248_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1350448520_1957906245_1503946248", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1350448520_1957906245_1503946248.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2140580687_1957906245_1503946248_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2140580687_1957906245_1503946248", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2140580687_1957906245_1503946248.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0883749843_1957906245_2929035908_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0883749843_1957906245_2929035908", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0883749843_1957906245_2929035908.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_1619414948_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_1619414948", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_1619414948.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_1737484152_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_1737484152", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_1737484152.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_1707694369_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_1707694369", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_1707694369.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_1707694369_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_1707694369", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_1707694369.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_1631856019_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_1631856019", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_1631856019.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2229322725_1957906245_4022729733_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2229322725_1957906245_4022729733", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2229322725_1957906245_4022729733.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3362892137_1957906245_4022729733_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3362892137_1957906245_4022729733", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3362892137_1957906245_4022729733.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3362892137_1957906245_3947397303_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3362892137_1957906245_3947397303", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3362892137_1957906245_3947397303.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0365818923_1957906245_3947397303_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0365818923_1957906245_3947397303", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0365818923_1957906245_3947397303.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_0438186594_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_0438186594", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_0438186594.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_3934972544_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_3934972544", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_3934972544.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_3934972544_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_3934972544", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_3934972544.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_3905705177_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_3905705177", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_3905705177.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0883749843_1957906245_3905705177_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0883749843_1957906245_3905705177", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0883749843_1957906245_3905705177.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_1483082815_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_1483082815", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_1483082815.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0883749843_1957906245_2356760955_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0883749843_1957906245_2356760955", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0883749843_1957906245_2356760955.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1114409679_1957906245_2356760955_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1114409679_1957906245_2356760955", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1114409679_1957906245_2356760955.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_2428374004_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_2428374004", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_2428374004.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0883749843_1957906245_2440847811_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0883749843_1957906245_2440847811", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0883749843_1957906245_2440847811.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_1541593169_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_1541593169", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_1541593169.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_1541593169_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_1541593169", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_1541593169.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1114409679_1957906245_3309079746_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1114409679_1957906245_3309079746", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1114409679_1957906245_3309079746.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_3309079746_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_3309079746", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_3309079746.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_0233081609_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_0233081609", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_0233081609.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_0233081609_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_0233081609", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_0233081609.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_0884319774_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_0884319774", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3110391562_1957906245_0884319774.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_0467425365_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_0467425365", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0297270247_1957906245_0467425365.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_0467425365_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_0467425365", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0667644748_1957906245_0467425365.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_0921901127_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_0921901127", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0667644748_1957906245_0921901127.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_0921901127_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_0921901127", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0297270247_1957906245_0921901127.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0297270247_1957906245_0925987440_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0297270247_1957906245_0925987440", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0297270247_1957906245_0925987440.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_0925987440_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_0925987440", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3110391562_1957906245_0925987440.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3110391562_1957906245_4293490107_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3110391562_1957906245_4293490107", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3110391562_1957906245_4293490107.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0667644748_1957906245_4293490107_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0667644748_1957906245_4293490107", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0667644748_1957906245_4293490107.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_2465772973_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_2465772973", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_2465772973.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0883749843_1957906245_2524301599_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0883749843_1957906245_2524301599", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0883749843_1957906245_2524301599.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_2615299273_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_2615299273", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_2615299273.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_2585798398_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_2585798398", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_2585798398.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0883749843_1957906245_1367143771_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0883749843_1957906245_1367143771", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0883749843_1957906245_1367143771.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_1367143771_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_1367143771", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_1367143771.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_2903596778_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_2903596778", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_2903596778.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0975530732_1957906245_2903596778_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0975530732_1957906245_2903596778", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0975530732_1957906245_2903596778.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0883749843_1957906245_3797055955_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0883749843_1957906245_3797055955", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0883749843_1957906245_3797055955.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_3797055955_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_3797055955", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_3797055955.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_4239538652_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_4239538652", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_4239538652.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_4239538652_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_4239538652", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_4239538652.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_3910024942_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_3910024942", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_3910024942.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_3910024942_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_3910024942", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_3910024942.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_4281789874_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_4281789874", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_4281789874.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_4281789874_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_4281789874", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_4281789874.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_4277438341_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_4277438341", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_4277438341.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_4277438341_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_4277438341", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_4277438341.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3910184593_1957906245_4251997163_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3910184593_1957906245_4251997163", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3910184593_1957906245_4251997163.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_4251997163_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_4251997163", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_4251997163.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_0283258634_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_0283258634", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_0283258634.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3015169632_1957906245_0283258634_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3015169632_1957906245_0283258634", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3015169632_1957906245_0283258634.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_2339436967_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_2339436967", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_2339436967.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_2339436967_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_2339436967", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_2339436967.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_4041725501_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_4041725501", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_4041725501.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_3258262558_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_3258262558", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_3258262558.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_3258262558_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_3258262558", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_3258262558.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_2415756565_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_2415756565", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_2415756565.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1114409679_1957906245_2415756565_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1114409679_1957906245_2415756565", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1114409679_1957906245_2415756565.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2951689095_1957906245_0187648482_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2951689095_1957906245_0187648482", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2951689095_1957906245_0187648482.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1114409679_1957906245_0187648482_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1114409679_1957906245_0187648482", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1114409679_1957906245_0187648482.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0923001696_1957906245_2386554658_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0923001696_1957906245_2386554658", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0923001696_1957906245_2386554658.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_2386554658_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_2386554658", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_2386554658.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1141483966_1957906245_1656812029_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1141483966_1957906245_1656812029", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1141483966_1957906245_1656812029.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2900707653_1957906245_1656812029_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2900707653_1957906245_1656812029", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2900707653_1957906245_1656812029.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1141483966_1957906245_1661115338_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1141483966_1957906245_1661115338", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1141483966_1957906245_1661115338.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1097265165_1957906245_1661115338_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1097265165_1957906245_1661115338", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1097265165_1957906245_1661115338.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2854551621_1957906245_4200128449_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2854551621_1957906245_4200128449", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2854551621_1957906245_4200128449.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2885580078_1957906245_3408911738_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2885580078_1957906245_3408911738", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2885580078_1957906245_3408911738.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4039401155_1957906245_3408911738_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4039401155_1957906245_3408911738", "isim/tb_ckt_isim_par.exe.sim/simprim/a_4039401155_1957906245_3408911738.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3787076264_1957906245_2579846729_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3787076264_1957906245_2579846729", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3787076264_1957906245_2579846729.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2667177899_1957906245_2545394472_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2667177899_1957906245_2545394472", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2667177899_1957906245_2545394472.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0237160988_1957906245_2545394472_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0237160988_1957906245_2545394472", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0237160988_1957906245_2545394472.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3252644452_1957906245_3889190717_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3252644452_1957906245_3889190717", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3252644452_1957906245_3889190717.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0997357477_1957906245_4194119513_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0997357477_1957906245_4194119513", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0997357477_1957906245_4194119513.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2342202850_1957906245_4194119513_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2342202850_1957906245_4194119513", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2342202850_1957906245_4194119513.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2560165321_1957906245_2557979774_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2560165321_1957906245_2557979774", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2560165321_1957906245_2557979774.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2762627379_1957906245_2557979774_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2762627379_1957906245_2557979774", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2762627379_1957906245_2557979774.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2589770296_1957906245_4182910800_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2589770296_1957906245_4182910800", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2589770296_1957906245_4182910800.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0567015561_1957906245_1314840419_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0567015561_1957906245_1314840419", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0567015561_1957906245_1314840419.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_2587667359_1957906245_1314840419_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_2587667359_1957906245_1314840419", "isim/tb_ckt_isim_par.exe.sim/simprim/a_2587667359_1957906245_1314840419.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_0567687461_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_0567687461", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0873044386_1957906245_0567687461.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3832545642_1957906245_0596674428_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3832545642_1957906245_0596674428", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3832545642_1957906245_0596674428.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_0596674428_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_0596674428", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0852086946_1957906245_0596674428.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_0575860043_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_0575860043", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0852086946_1957906245_0575860043.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_0575860043_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_0575860043", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0873044386_1957906245_0575860043.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_0688826998_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_0688826998", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0852086946_1957906245_0688826998.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3832545642_1957906245_0688826998_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3832545642_1957906245_0688826998", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3832545642_1957906245_0688826998.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3832545642_1957906245_0684507201_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3832545642_1957906245_0684507201", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3832545642_1957906245_0684507201.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_0684507201_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_0684507201", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0852086946_1957906245_0684507201.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3832545642_1957906245_0900224032_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3832545642_1957906245_0900224032", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3832545642_1957906245_0900224032.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_0900224032_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_0900224032", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1479615998_1957906245_0900224032.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_0879377943_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_0879377943", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0873044386_1957906245_0879377943.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_0879377943_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_0879377943", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0852086946_1957906245_0879377943.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_3832545642_1957906245_0908886094_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_3832545642_1957906245_0908886094", "isim/tb_ckt_isim_par.exe.sim/simprim/a_3832545642_1957906245_0908886094.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_0908886094_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_0908886094", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1479615998_1957906245_0908886094.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_0938404473_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_0938404473", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0873044386_1957906245_0938404473.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1444215134_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1444215134", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_1444215134.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_4141391873_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_4141391873", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_4141391873.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_3170642392_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_3170642392", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_3170642392.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1360875906_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1360875906", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_1360875906.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_3094435178_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_3094435178", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_3094435178.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0013447695_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0013447695", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_0013447695.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_2256984232_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_2256984232", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_2256984232.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1219429775_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1219429775", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_1219429775.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1217825075_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1217825075", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_1217825075.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1504178867_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1504178867", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_1504178867.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1483053188_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1483053188", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_1483053188.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_2181574817_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_2181574817", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_2181574817.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1511696993_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1511696993", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_1511696993.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0090056760_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0090056760", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_0090056760.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0385212755_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0385212755", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_0385212755.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1314737112_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1314737112", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_1314737112.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1336323411_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1336323411", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_1336323411.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0754941987_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0754941987", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_0754941987.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1715374580_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1715374580", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_1715374580.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_4261297807_1957906245_3426173311_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_4261297807_1957906245_3426173311", "isim/tb_ckt_isim_par.exe.sim/simprim/a_4261297807_1957906245_3426173311.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_3455396680_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_3455396680", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_3455396680.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_0614018976_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_0614018976", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_0614018976.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_1631002920_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_1631002920", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_1631002920.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_2189112346_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_2189112346", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_2189112346.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1897869936_1957906245_3035240027_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1897869936_1957906245_3035240027", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1897869936_1957906245_3035240027.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0852086946_1957906245_2227201777_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0852086946_1957906245_2227201777", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0852086946_1957906245_2227201777.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_1479615998_1957906245_2227201777_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_1479615998_1957906245_2227201777", "isim/tb_ckt_isim_par.exe.sim/simprim/a_1479615998_1957906245_2227201777.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}

extern void simprim_a_0873044386_1957906245_2173661300_init()
{
	static char *pe[] = {(void *)simprim_a_1754336661_1957906245_p_0,(void *)simprim_a_1754336661_1957906245_p_1,(void *)simprim_a_1754336661_1957906245_p_2,(void *)simprim_a_1754336661_1957906245_p_3,(void *)simprim_a_1754336661_1957906245_p_4,(void *)simprim_a_1754336661_1957906245_p_5};
	static char *se[] = {(void *)simprim_a_1754336661_1957906245_sub_655425482_3127390018};
	xsi_register_didat("simprim_a_0873044386_1957906245_2173661300", "isim/tb_ckt_isim_par.exe.sim/simprim/a_0873044386_1957906245_2173661300.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
