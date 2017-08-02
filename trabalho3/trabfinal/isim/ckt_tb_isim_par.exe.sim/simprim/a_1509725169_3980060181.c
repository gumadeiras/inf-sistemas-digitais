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



static void simprim_a_1509725169_3980060181_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:
LAB3:    t1 = (t0 + 2720);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void simprim_a_1509725169_3980060181_2954361577_init()
{
	static char *pe[] = {(void *)simprim_a_1509725169_3980060181_p_0};
	xsi_register_didat("simprim_a_1509725169_3980060181_2954361577", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1509725169_3980060181_2954361577.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_1509725169_3980060181_0319081222_init()
{
	static char *pe[] = {(void *)simprim_a_1509725169_3980060181_p_0};
	xsi_register_didat("simprim_a_1509725169_3980060181_0319081222", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1509725169_3980060181_0319081222.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_1509725169_3980060181_0315007281_init()
{
	static char *pe[] = {(void *)simprim_a_1509725169_3980060181_p_0};
	xsi_register_didat("simprim_a_1509725169_3980060181_0315007281", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1509725169_3980060181_0315007281.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_1509725169_3980060181_0262288720_init()
{
	static char *pe[] = {(void *)simprim_a_1509725169_3980060181_p_0};
	xsi_register_didat("simprim_a_1509725169_3980060181_0262288720", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1509725169_3980060181_0262288720.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_1509725169_3980060181_1591420089_init()
{
	static char *pe[] = {(void *)simprim_a_1509725169_3980060181_p_0};
	xsi_register_didat("simprim_a_1509725169_3980060181_1591420089", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1509725169_3980060181_1591420089.didat");
	xsi_register_executes(pe);
}

extern void simprim_a_1509725169_3980060181_0433961640_init()
{
	static char *pe[] = {(void *)simprim_a_1509725169_3980060181_p_0};
	xsi_register_didat("simprim_a_1509725169_3980060181_0433961640", "isim/ckt_tb_isim_par.exe.sim/simprim/a_1509725169_3980060181_0433961640.didat");
	xsi_register_executes(pe);
}
