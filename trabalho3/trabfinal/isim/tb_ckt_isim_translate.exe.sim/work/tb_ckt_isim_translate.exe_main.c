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
    simprim_a_3592211381_2402822232_0433961640_init();
    simprim_a_0720641496_2402822232_0433961640_init();
    simprim_a_1133662370_3688764588_0433961640_init();
    simprim_a_3936907874_4055128042_0433961640_init();
    simprim_a_1387470219_3879906181_0433961640_init();
    simprim_a_2620028433_2341067045_0433961640_init();
    simprim_a_0060070196_1912361408_0433961640_init();
    simprim_a_3305665799_1912361408_0433961640_init();
    simprim_a_0740213596_1912361408_0433961640_init();
    simprim_a_3934400367_1912361408_0433961640_init();
    simprim_a_0767417567_1912361408_0433961640_init();
    simprim_a_3645667616_1912361408_0433961640_init();
    simprim_a_1013618204_1912361408_0433961640_init();
    simprim_a_1808384574_1912361408_0433961640_init();
    simprim_a_2564782328_1912361408_0433961640_init();
    simprim_a_0562922936_1912361408_0433961640_init();
    simprim_a_0406293034_1912361408_0433961640_init();
    simprim_a_1329461408_1912361408_0433961640_init();
    simprim_a_3463845361_1912361408_0433961640_init();
    simprim_a_2398039298_1912361408_0433961640_init();
    simprim_a_1385652478_1883126775_0433961640_init();
    simprim_a_0094179956_1883126775_0433961640_init();
    simprim_a_3624651761_1883126775_0433961640_init();
    simprim_a_4244631919_1883126775_0433961640_init();
    simprim_a_3949771542_1883126775_0433961640_init();
    simprim_a_3160852892_1883126775_0433961640_init();
    simprim_a_1157900935_1883126775_0433961640_init();
    simprim_a_2399254907_1883126775_0433961640_init();
    simprim_a_0302929933_1883126775_0433961640_init();
    simprim_a_3960525574_1957906245_0433961640_init();
    simprim_a_0667644748_1957906245_0433961640_init();
    simprim_a_2560165321_1957906245_0433961640_init();
    simprim_a_0567015561_1957906245_0433961640_init();
    simprim_a_0029141076_1957906245_0433961640_init();
    simprim_a_0510933507_1957906245_0433961640_init();
    simprim_a_2355376532_1957906245_0433961640_init();
    simprim_a_3925590799_1957906245_0433961640_init();
    simprim_a_2667177899_1957906245_0433961640_init();
    simprim_a_3252644452_1957906245_0433961640_init();
    simprim_a_3117924395_1957906245_0433961640_init();
    simprim_a_1626464249_1957906245_0433961640_init();
    simprim_a_3343830033_1957906245_0433961640_init();
    simprim_a_1786422316_1957906245_0433961640_init();
    simprim_a_0208406996_1957906245_0433961640_init();
    simprim_a_1724022758_1957906245_0433961640_init();
    simprim_a_0551464694_1957906245_0433961640_init();
    simprim_a_0026674959_1957906245_0433961640_init();
    simprim_a_3281684846_1957906245_0433961640_init();
    simprim_a_3938734686_1957906245_0433961640_init();
    simprim_a_3390089403_1957906245_0433961640_init();
    simprim_a_1714902704_1957906245_0433961640_init();
    simprim_a_3520198852_1957906245_0433961640_init();
    simprim_a_0623721086_1957906245_0433961640_init();
    simprim_a_2903724860_1957906245_0433961640_init();
    simprim_a_3604876535_1957906245_0433961640_init();
    simprim_a_4005933550_1957906245_0433961640_init();
    simprim_a_2027651288_3300903326_0433961640_init();
    simprim_a_1859873907_2082082460_init();
    simprim_a_3702995043_2431929443_0433961640_init();
    simprim_a_0364081627_2220112960_0433961640_init();
    simprim_a_4130118134_1564065396_0433961640_init();
    simprim_a_0860940424_1564065396_0433961640_init();
    simprim_a_3156740924_4150518722_0433961640_init();
    simprim_a_4181367278_3380326129_0433961640_init();
    simprim_a_2155285624_1178295121_0433961640_init();
    work_a_1178799658_0632001823_init();
    work_a_2911298851_2372691052_init();


    xsi_register_tops("work_a_2911298851_2372691052");

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
