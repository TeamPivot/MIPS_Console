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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/nimer/Documents/GitHub/MIPS16/FPGA/ControlUnit.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {8U, 0U};
static unsigned int ng12[] = {9U, 0U};
static unsigned int ng13[] = {10U, 0U};
static unsigned int ng14[] = {11U, 0U};
static unsigned int ng15[] = {12U, 0U};
static unsigned int ng16[] = {13U, 0U};
static unsigned int ng17[] = {14U, 0U};
static unsigned int ng18[] = {15U, 0U};
static unsigned int ng19[] = {16U, 0U};
static unsigned int ng20[] = {17U, 0U};
static unsigned int ng21[] = {31U, 0U};
static int ng22[] = {7237488, 0, 0, 0};
static int ng23[] = {6382692, 0, 0, 0};
static int ng24[] = {7566690, 0, 0, 0};
static int ng25[] = {28530, 0, 0, 0};
static int ng26[] = {6385252, 0, 0, 0};
static int ng27[] = {7892850, 0, 0, 0};
static int ng28[] = {7171958, 0, 0, 0};
static int ng29[] = {27767, 0, 0, 0};
static int ng30[] = {29559, 0, 0, 0};
static int ng31[] = {27753, 0, 0, 0};
static int ng32[] = {1633969257, 0, 0, 0};
static int ng33[] = {1937072745, 0, 0, 0};
static int ng34[] = {6516080, 0, 0, 0};
static int ng35[] = {27258, 0, 0, 0};
static int ng36[] = {6975098, 0, 0, 0};
static int ng37[] = {27239, 0, 0, 0};
static int ng38[] = {27244, 0, 0, 0};
static int ng39[] = {6974832, 0, 0, 0};
static int ng40[] = {1937010544, 0, 0, 0};
static int ng41[] = {1482184792, 0, 1482184792, 0, 1482184792, 0, 1482184792, 0, 88, 0};



static void Always_42_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;

LAB0:    t1 = (t0 + 4160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4500);
    *((int *)t2) = 1;
    t3 = (t0 + 4188);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2348);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2440);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2532);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2624);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2716);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2808);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2900);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2992);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3084);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3268);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3360);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3452);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);

LAB6:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 5, t2, 5);
    if (t6 == 1)
        goto LAB41;

LAB42:
LAB43:    goto LAB2;

LAB7:    xsi_set_current_line(61, ng0);

LAB44:    xsi_set_current_line(62, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2348);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2900);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB43;

LAB9:    xsi_set_current_line(68, ng0);

LAB45:    xsi_set_current_line(69, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2348);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2900);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB43;

LAB11:    xsi_set_current_line(75, ng0);

LAB46:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2348);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2900);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng7)));
    t4 = (t0 + 2808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB43;

LAB13:    xsi_set_current_line(82, ng0);

LAB47:    xsi_set_current_line(83, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2348);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2900);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng6)));
    t4 = (t0 + 2808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB43;

LAB15:    xsi_set_current_line(89, ng0);

LAB48:    xsi_set_current_line(90, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2348);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2900);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng8)));
    t4 = (t0 + 2808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB43;

LAB17:    xsi_set_current_line(96, ng0);

LAB49:    xsi_set_current_line(97, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2348);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2440);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB43;

LAB19:    xsi_set_current_line(102, ng0);

LAB50:    xsi_set_current_line(103, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2348);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2532);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB43;

LAB21:    xsi_set_current_line(108, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2992);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB43;

LAB23:    xsi_set_current_line(111, ng0);

LAB51:    xsi_set_current_line(112, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2348);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2624);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB43;

LAB25:    xsi_set_current_line(117, ng0);

LAB52:    xsi_set_current_line(118, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2348);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2716);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2900);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng3)));
    t4 = (t0 + 2808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB43;

LAB27:    xsi_set_current_line(125, ng0);

LAB53:    xsi_set_current_line(126, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2348);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2716);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng4)));
    t4 = (t0 + 2900);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    xsi_set_current_line(129, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB43;

LAB29:    xsi_set_current_line(133, ng0);

LAB54:    xsi_set_current_line(134, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 2900);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(135, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 2808);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 3);
    goto LAB43;

LAB31:    xsi_set_current_line(139, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3084);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB43;

LAB33:    xsi_set_current_line(142, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3176);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB43;

LAB35:    xsi_set_current_line(145, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3360);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB43;

LAB37:    xsi_set_current_line(148, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3268);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB43;

LAB39:    xsi_set_current_line(151, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3452);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB43;

LAB41:    xsi_set_current_line(154, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 3544);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB43;

}

static void Always_162_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4304U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 4508);
    *((int *)t2) = 1;
    t3 = (t0 + 4332);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(162, ng0);

LAB5:    xsi_set_current_line(163, ng0);
    t4 = (t0 + 2120U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t4, 5);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng8)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng12)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng20)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 5, t2, 5);
    if (t6 == 1)
        goto LAB43;

LAB44:
LAB46:
LAB45:    xsi_set_current_line(203, ng0);
    t2 = ((char*)((ng41)));
    t3 = (t0 + 3636);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 33);

LAB47:    goto LAB2;

LAB7:    xsi_set_current_line(165, ng0);
    t7 = ((char*)((ng22)));
    t8 = (t0 + 3636);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 33);
    goto LAB47;

LAB9:    xsi_set_current_line(167, ng0);
    t3 = ((char*)((ng23)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB11:    xsi_set_current_line(169, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB13:    xsi_set_current_line(171, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB15:    xsi_set_current_line(173, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB17:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng27)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB19:    xsi_set_current_line(177, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB21:    xsi_set_current_line(179, ng0);
    t3 = ((char*)((ng29)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB23:    xsi_set_current_line(181, ng0);
    t3 = ((char*)((ng30)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB25:    xsi_set_current_line(183, ng0);
    t3 = ((char*)((ng31)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB27:    xsi_set_current_line(185, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB29:    xsi_set_current_line(187, ng0);
    t3 = ((char*)((ng33)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB31:    xsi_set_current_line(189, ng0);
    t3 = ((char*)((ng34)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB33:    xsi_set_current_line(191, ng0);
    t3 = ((char*)((ng35)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB35:    xsi_set_current_line(193, ng0);
    t3 = ((char*)((ng36)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB37:    xsi_set_current_line(195, ng0);
    t3 = ((char*)((ng37)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB39:    xsi_set_current_line(197, ng0);
    t3 = ((char*)((ng38)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB41:    xsi_set_current_line(199, ng0);
    t3 = ((char*)((ng39)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

LAB43:    xsi_set_current_line(201, ng0);
    t3 = ((char*)((ng40)));
    t4 = (t0 + 3636);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 33);
    goto LAB47;

}


extern void work_m_00000000002908347451_1938225339_init()
{
	static char *pe[] = {(void *)Always_42_0,(void *)Always_162_1};
	xsi_register_didat("work_m_00000000002908347451_1938225339", "isim/CPU_Test_isim_beh.exe.sim/work/m_00000000002908347451_1938225339.didat");
	xsi_register_executes(pe);
}
