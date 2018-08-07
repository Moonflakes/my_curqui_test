#include "conv_g_bigg_test.h"

int		conv_g_bigg_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSIONS g-G --------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &g_basic_01);
	ft_load_test(&test, "basic_02", &g_basic_02);
	ft_load_test(&test, "basic_03", &g_basic_03);
	ft_load_test(&test, "basic_04", &g_basic_04);
	ft_load_test(&test, "basic_05", &g_basic_05);
	ft_load_test(&test, "basic_06", &g_basic_06);
	ft_load_test(&test, "basic_07", &g_basic_07);
	ft_load_test(&test, "basic_08", &g_basic_08);
	ft_load_test(&test, "devil_00", &g_devil_00);
	ft_load_test(&test, "longnb_01", &g_longnb_01);
	ft_load_test(&test, "longnb_02", &g_longnb_02);
	ft_load_test(&test, "padding_01", &g_padding_01);
	ft_load_test(&test, "padding_02", &g_padding_02);
	ft_load_test(&test, "padding_03", &g_padding_03);
	ft_load_test(&test, "precision_01", &g_precision_01);
	ft_load_test(&test, "precision_02", &g_precision_02);
	ft_load_test(&test, "precision_03", &g_precision_03);
	ft_load_test(&test, "precision_04", &g_precision_04);
	ft_load_test(&test, "precision_05", &g_precision_05);
	ft_load_test(&test, "all_01", &g_all_01);
	ft_load_test(&test, "all_02", &g_all_02);
	ft_load_test(&test, "all_03", &g_all_03);
	ft_load_test(&test, "all_04", &g_all_04);
	ft_load_test(&test, "all_05", &g_all_05);
	return(ft_launch_tests(&test, success, total));
}
