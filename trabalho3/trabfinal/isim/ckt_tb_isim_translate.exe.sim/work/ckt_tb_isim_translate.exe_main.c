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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *SIMPRIM_P_0947159679;
char *IEEE_P_2717149903;
char *STD_TEXTIO;
char *SIMPRIM_P_4208868169;
char *IEEE_P_1367372525;
char *IEEE_P_3499444699;
char *IEEE_P_0774719531;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    std_textio_init();
    ieee_p_2717149903_init();
    simprim_p_0947159679_init();
    ieee_p_1367372525_init();
    simprim_p_4208868169_init();
    ieee_p_3499444699_init();
    ieee_p_0774719531_init();
    simprim_a_3395610110_2220797900_0433961640_init();
    simprim_a_1509725169_3980060181_0433961640_init();
    simprim_a_4130118134_1564065396_0433961640_init();
    simprim_a_0860940424_1564065396_0433961640_init();
    simprim_a_3993270235_3688764588_0433961640_init();
    simprim_a_1385652478_1883126775_0433961640_init();
    simprim_a_0094179956_1883126775_0433961640_init();
    simprim_a_4244631919_1883126775_0433961640_init();
    simprim_a_3482878344_1883126775_0433961640_init();
    simprim_a_3624651761_1883126775_0433961640_init();
    simprim_a_1157900935_1883126775_0433961640_init();
    simprim_a_2399254907_1883126775_0433961640_init();
    simprim_a_3949771542_1883126775_0433961640_init();
    simprim_a_3160852892_1883126775_0433961640_init();
    simprim_a_0302929933_1883126775_0433961640_init();
    simprim_a_3936907874_4055128042_0433961640_init();
    simprim_a_1387470219_3879906181_0433961640_init();
    simprim_a_2620028433_2341067045_0433961640_init();
    simprim_a_3463845361_1912361408_0433961640_init();
    simprim_a_4216677804_1912361408_0433961640_init();
    simprim_a_2697357545_1912361408_0433961640_init();
    simprim_a_0811257723_1912361408_0433961640_init();
    simprim_a_2870030007_1912361408_0433961640_init();
    simprim_a_1476891761_1912361408_0433961640_init();
    simprim_a_1107794156_1912361408_0433961640_init();
    simprim_a_2981627010_1912361408_0433961640_init();
    simprim_a_0992259981_1912361408_0433961640_init();
    simprim_a_2504801820_1912361408_0433961640_init();
    simprim_a_3259387030_1912361408_0433961640_init();
    simprim_a_2901815694_1912361408_0433961640_init();
    simprim_a_0363121870_1912361408_0433961640_init();
    simprim_a_3549496917_1912361408_0433961640_init();
    simprim_a_2398039298_1912361408_0433961640_init();
    simprim_a_1455144347_1957906245_0433961640_init();
    simprim_a_0313297006_1957906245_0433961640_init();
    simprim_a_2074619900_1957906245_0433961640_init();
    simprim_a_3370445208_1957906245_0433961640_init();
    simprim_a_3960525574_1957906245_0433961640_init();
    simprim_a_0029141076_1957906245_0433961640_init();
    simprim_a_3173279446_1957906245_0433961640_init();
    simprim_a_3571099025_1957906245_0433961640_init();
    simprim_a_0667644748_1957906245_0433961640_init();
    simprim_a_1563489339_1957906245_0433961640_init();
    simprim_a_4049390796_1957906245_0433961640_init();
    simprim_a_0297270247_1957906245_0433961640_init();
    simprim_a_3110391562_1957906245_0433961640_init();
    simprim_a_2320585154_1957906245_0433961640_init();
    simprim_a_2801644072_1957906245_0433961640_init();
    simprim_a_4005933550_1957906245_0433961640_init();
    simprim_a_0646064845_1957906245_0433961640_init();
    simprim_a_1757335439_1957906245_0433961640_init();
    simprim_a_2374143732_1957906245_0433961640_init();
    simprim_a_2667177899_1957906245_0433961640_init();
    simprim_a_3359736809_1957906245_0433961640_init();
    simprim_a_0285057852_1957906245_0433961640_init();
    simprim_a_2191589964_1957906245_0433961640_init();
    simprim_a_2335312714_1957906245_0433961640_init();
    simprim_a_1395901807_1957906245_0433961640_init();
    simprim_a_0303622996_1957906245_0433961640_init();
    simprim_a_3400729219_1957906245_0433961640_init();
    simprim_a_3702995043_2431929443_0433961640_init();
    simprim_a_1859873907_2082082460_init();
    simprim_a_2027651288_3300903326_0433961640_init();
    simprim_a_1054162189_2220112960_0433961640_init();
    simprim_a_3156740924_4150518722_0433961640_init();
    simprim_a_4181367278_3380326129_0433961640_init();
    simprim_a_2155285624_1178295121_0433961640_init();
    work_a_2611180878_0632001823_init();
    work_a_3716758133_2372691052_init();


    xsi_register_tops("work_a_3716758133_2372691052");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    SIMPRIM_P_0947159679 = xsi_get_engine_memory("simprim_p_0947159679");
    IEEE_P_2717149903 = xsi_get_engine_memory("ieee_p_2717149903");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    SIMPRIM_P_4208868169 = xsi_get_engine_memory("simprim_p_4208868169");
    IEEE_P_1367372525 = xsi_get_engine_memory("ieee_p_1367372525");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_0774719531 = xsi_get_engine_memory("ieee_p_0774719531");

    return xsi_run_simulation(argc, argv);

}
