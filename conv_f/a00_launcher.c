#include "conv_f_test.h"

int		conv_f_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSIONS f ----------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &f_basic_01);
	ft_load_test(&test, "basic_02", &f_basic_02);
	ft_load_test(&test, "basic_03", &f_basic_03);
	ft_load_test(&test, "basic_04", &f_basic_04);
	ft_load_test(&test, "basic_05", &f_basic_05);
	ft_load_test(&test, "basic_06", &f_basic_06);
	ft_load_test(&test, "basic_07", &f_basic_07);
	ft_load_test(&test, "basic_08", &f_basic_08);
	ft_load_test(&test, "devil_00", &f_devil_00);
	ft_load_test(&test, "longnb_01", &f_longnb_01);
	ft_load_test(&test, "longnb_02", &f_longnb_02);
	ft_load_test(&test, "padding_01", &f_padding_01);
	ft_load_test(&test, "padding_02", &f_padding_02);
	ft_load_test(&test, "padding_03", &f_padding_03);
	ft_load_test(&test, "precision_01", &f_precision_01);
	ft_load_test(&test, "precision_02", &f_precision_02);
	ft_load_test(&test, "precision_03", &f_precision_03);
	ft_load_test(&test, "precision_04", &f_precision_04);
	ft_load_test(&test, "precision_05", &f_precision_05);
	ft_load_test(&test, "all_01", &f_all_01);
	ft_load_test(&test, "all_02", &f_all_02);
	ft_load_test(&test, "all_03", &f_all_03);
	ft_load_test(&test, "all_04", &f_all_04);
	ft_load_test(&test, "all_05", &f_all_05);
	return(ft_launch_tests(&test, success, total));
}
