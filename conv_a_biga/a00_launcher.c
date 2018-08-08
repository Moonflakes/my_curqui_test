#include "conv_a_biga_test.h"

int		conv_a_biga_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSIONS a-A --------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &a_basic_01);
	ft_load_test(&test, "basic_02", &a_basic_02);
	ft_load_test(&test, "basic_03", &a_basic_03);
	ft_load_test(&test, "basic_04", &a_basic_04);
	ft_load_test(&test, "basic_05", &a_basic_05);
	ft_load_test(&test, "basic_06", &a_basic_06);
	ft_load_test(&test, "basic_07", &a_basic_07);
	ft_load_test(&test, "basic_08", &a_basic_08);
	ft_load_test(&test, "basic_09", &a_basic_09);
	ft_load_test(&test, "basic_10", &a_basic_10);
	ft_load_test(&test, "basic_11", &a_basic_11);
	ft_load_test(&test, "basic_12", &a_basic_12);
	ft_load_test(&test, "devil_00", &a_devil_00);
	ft_load_test(&test, "longnb_01", &a_longnb_01);
	ft_load_test(&test, "longnb_02", &a_longnb_02);
	ft_load_test(&test, "longnb_03", &a_longnb_03);
	ft_load_test(&test, "padding_01", &a_padding_01);
	ft_load_test(&test, "padding_02", &a_padding_02);
	ft_load_test(&test, "padding_03", &a_padding_03);
	ft_load_test(&test, "padding_04", &a_padding_04);
	ft_load_test(&test, "padding_05", &a_padding_05);
	ft_load_test(&test, "precision_01", &a_precision_01);
	ft_load_test(&test, "precision_02", &a_precision_02);
	ft_load_test(&test, "precision_03", &a_precision_03);
	ft_load_test(&test, "precision_04", &a_precision_04);
	ft_load_test(&test, "precision_05", &a_precision_05);
	ft_load_test(&test, "precision_06", &a_precision_06);
	ft_load_test(&test, "longa_01", &a_longa_01);
	ft_load_test(&test, "longa_02", &a_longa_02);
	ft_load_test(&test, "longa_03", &a_longa_03);
	ft_load_test(&test, "longa_04", &a_longa_04);
	ft_load_test(&test, "longa_05", &a_longa_05);
	ft_load_test(&test, "all_01", &a_all_01);
	ft_load_test(&test, "all_02", &a_all_02);
	ft_load_test(&test, "all_03", &a_all_03);
	ft_load_test(&test, "all_04", &a_all_04);
	ft_load_test(&test, "all_05", &a_all_05);
	ft_load_test(&test, "all_06", &a_all_06);
	ft_load_test(&test, "all_07", &a_all_07);
	ft_load_test(&test, "all_08", &a_all_08);
	return(ft_launch_tests(&test, success, total));
}
