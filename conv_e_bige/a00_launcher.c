#include "conv_e_bige_test.h"

int		conv_e_bige_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSIONS e-E --------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &e_basic_01);
	ft_load_test(&test, "basic_02", &e_basic_02);
	return(ft_launch_tests(&test, success, total));
}
