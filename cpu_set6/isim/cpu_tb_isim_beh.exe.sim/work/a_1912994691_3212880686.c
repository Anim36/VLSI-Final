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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/shared/untitled folder/project/cpu_set6/cpu_tb.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *STD_STANDARD;

int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3307759752501503797_1035706684(char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1912994691_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int64 t10;
    int64 t11;

LAB0:    t1 = (t0 + 3584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);

LAB4:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(37, ng0);

LAB18:    *((char **)t1) = &&LAB19;

LAB1:    return;
LAB5:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4248);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, t11);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:;
LAB8:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 4248);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t10 = *((int64 *)t3);
    t11 = (t10 / 2);
    t2 = (t0 + 3392);
    xsi_process_wait(t2, t11);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    goto LAB4;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    goto LAB2;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

}

static void work_a_1912994691_3212880686_p_1(char *t0)
{
    char t25[16];
    char t31[16];
    char t33[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    int64 t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t34;
    char *t35;
    int t36;
    unsigned int t37;
    unsigned int t38;

LAB0:    t1 = (t0 + 3832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(44, ng0);

LAB6:    t2 = (t0 + 4152);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 4152);
    *((int *)t4) = 0;
    xsi_set_current_line(45, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 3640);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 7048U);
    t10 = ieee_p_1242562249_sub_3307759752501503797_1035706684(IEEE_P_1242562249, t3, t2, 0);
    if (t10 == 1)
        goto LAB17;

LAB18:    t9 = (unsigned char)0;

LAB19:    if (t9 == 1)
        goto LAB14;

LAB15:    t7 = (unsigned char)0;

LAB16:    if (t7 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4312);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 7252);
    *((int *)t2) = 1;
    t3 = (t0 + 7256);
    *((int *)t3) = 8;
    t16 = 1;
    t17 = 8;

LAB20:    if (t16 <= t17)
        goto LAB21;

LAB23:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 7323);
    xsi_report(t2, 45U, (unsigned char)0);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2128U);
    t3 = *((char **)t2);
    t8 = *((int64 *)t3);
    t2 = (t0 + 3640);
    xsi_process_wait(t2, t8);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t14 = (t0 + 7228);
    xsi_report(t14, 24U, (unsigned char)2);
    goto LAB13;

LAB14:    t4 = (t0 + 1672U);
    t6 = *((char **)t4);
    t4 = (t0 + 7064U);
    t13 = ieee_p_1242562249_sub_3307759752501503797_1035706684(IEEE_P_1242562249, t6, t4, 0);
    t7 = t13;
    goto LAB16;

LAB17:    t4 = (t0 + 1512U);
    t5 = *((char **)t4);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t9 = t12;
    goto LAB19;

LAB21:    xsi_set_current_line(51, ng0);

LAB26:    t4 = (t0 + 4168);
    *((int *)t4) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB22:    t2 = (t0 + 7252);
    t16 = *((int *)t2);
    t3 = (t0 + 7256);
    t17 = *((int *)t3);
    if (t16 == t17)
        goto LAB23;

LAB41:    t18 = (t16 + 1);
    t16 = t18;
    t4 = (t0 + 7252);
    *((int *)t4) = t16;
    goto LAB20;

LAB24:    t6 = (t0 + 4168);
    *((int *)t6) = 0;
    xsi_set_current_line(52, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 3640);
    xsi_process_wait(t2, t8);

LAB30:    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    t5 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t5, 0U, 0U);
    if (t7 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t7 = *((unsigned char *)t3);
    t9 = (t7 == (unsigned char)3);
    if (t9 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t2 = (t3 + 0);
    *((int *)t2) = 0;

LAB33:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 7048U);
    t18 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t4 = (t0 + 2248U);
    t5 = *((char **)t4);
    t4 = (t0 + 7252);
    t19 = *((int *)t4);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    xsi_vhdl_check_range_of_index(1, 8, 1, *((int *)t4));
    t22 = (4U * t21);
    t23 = (0 + t22);
    t6 = (t5 + t23);
    t24 = *((int *)t6);
    t7 = (t18 == t24);
    if (t7 == 0)
        goto LAB35;

LAB36:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2608U);
    t3 = *((char **)t2);
    t18 = *((int *)t3);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t2 = (t0 + 7252);
    t19 = *((int *)t2);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    xsi_vhdl_check_range_of_index(1, 8, 1, *((int *)t2));
    t22 = (4U * t21);
    t23 = (0 + t22);
    t5 = (t4 + t23);
    t24 = *((int *)t5);
    t7 = (t18 == t24);
    if (t7 == 0)
        goto LAB37;

LAB38:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 7064U);
    t18 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t3, t2);
    t4 = (t0 + 2488U);
    t5 = *((char **)t4);
    t4 = (t0 + 7252);
    t19 = *((int *)t4);
    t20 = (t19 - 1);
    t21 = (t20 * 1);
    xsi_vhdl_check_range_of_index(1, 8, 1, *((int *)t4));
    t22 = (4U * t21);
    t23 = (0 + t22);
    t6 = (t5 + t23);
    t24 = *((int *)t6);
    t7 = (t18 == t24);
    if (t7 == 0)
        goto LAB39;

LAB40:    goto LAB22;

LAB29:    goto LAB28;

LAB31:    goto LAB29;

LAB32:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2608U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 1;
    goto LAB33;

LAB35:    t14 = (t0 + 7260);
    t26 = ((STD_STANDARD) + 384);
    t27 = (t0 + 7252);
    t28 = xsi_int_to_mem(*((int *)t27));
    t29 = xsi_string_variable_get_image(t25, t26, t28);
    t32 = ((STD_STANDARD) + 984);
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 1;
    t35 = (t34 + 4U);
    *((int *)t35) = 22;
    t35 = (t34 + 8U);
    *((int *)t35) = 1;
    t36 = (22 - 1);
    t37 = (t36 * 1);
    t37 = (t37 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t37;
    t30 = xsi_base_array_concat(t30, t31, t32, (char)97, t14, t33, (char)97, t29, t25, (char)101);
    t35 = (t25 + 12U);
    t37 = *((unsigned int *)t35);
    t38 = (22U + t37);
    xsi_report(t30, t38, (unsigned char)2);
    goto LAB36;

LAB37:    t6 = (t0 + 7282);
    t15 = ((STD_STANDARD) + 384);
    t26 = (t0 + 7252);
    t27 = xsi_int_to_mem(*((int *)t26));
    t28 = xsi_string_variable_get_image(t25, t15, t27);
    t30 = ((STD_STANDARD) + 984);
    t32 = (t33 + 0U);
    t34 = (t32 + 0U);
    *((int *)t34) = 1;
    t34 = (t32 + 4U);
    *((int *)t34) = 20;
    t34 = (t32 + 8U);
    *((int *)t34) = 1;
    t36 = (20 - 1);
    t37 = (t36 * 1);
    t37 = (t37 + 1);
    t34 = (t32 + 12U);
    *((unsigned int *)t34) = t37;
    t29 = xsi_base_array_concat(t29, t31, t30, (char)97, t6, t33, (char)97, t28, t25, (char)101);
    t34 = (t25 + 12U);
    t37 = *((unsigned int *)t34);
    t38 = (20U + t37);
    xsi_report(t29, t38, (unsigned char)2);
    goto LAB38;

LAB39:    t14 = (t0 + 7302);
    t26 = ((STD_STANDARD) + 384);
    t27 = (t0 + 7252);
    t28 = xsi_int_to_mem(*((int *)t27));
    t29 = xsi_string_variable_get_image(t25, t26, t28);
    t32 = ((STD_STANDARD) + 984);
    t34 = (t33 + 0U);
    t35 = (t34 + 0U);
    *((int *)t35) = 1;
    t35 = (t34 + 4U);
    *((int *)t35) = 21;
    t35 = (t34 + 8U);
    *((int *)t35) = 1;
    t36 = (21 - 1);
    t37 = (t36 * 1);
    t37 = (t37 + 1);
    t35 = (t34 + 12U);
    *((unsigned int *)t35) = t37;
    t30 = xsi_base_array_concat(t30, t31, t32, (char)97, t14, t33, (char)97, t29, t25, (char)101);
    t35 = (t25 + 12U);
    t37 = *((unsigned int *)t35);
    t38 = (21U + t37);
    xsi_report(t30, t38, (unsigned char)2);
    goto LAB40;

LAB42:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4376);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(65, ng0);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

LAB46:    goto LAB2;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

}


extern void work_a_1912994691_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1912994691_3212880686_p_0,(void *)work_a_1912994691_3212880686_p_1};
	xsi_register_didat("work_a_1912994691_3212880686", "isim/cpu_tb_isim_beh.exe.sim/work/a_1912994691_3212880686.didat");
	xsi_register_executes(pe);
}
