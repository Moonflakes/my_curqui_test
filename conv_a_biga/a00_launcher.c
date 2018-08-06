#include "conv_a_biga_test.h"

int		conv_a_biga_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSIONS a-A --------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &a_basic_01);
	ft_load_test(&test, "basic_02", &a_basic_02);
	return(ft_launch_tests(&test, success, total));
}
