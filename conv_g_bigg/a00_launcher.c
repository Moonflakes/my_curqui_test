#include "conv_g_bigg_test.h"

int		conv_g_bigg_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSIONS g-G --------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &g_basic_01);
	ft_load_test(&test, "basic_02", &g_basic_02);
	return(ft_launch_tests(&test, success, total));
}
