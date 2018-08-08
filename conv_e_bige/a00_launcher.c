#include "conv_e_bige_test.h"

int		conv_e_bige_launcher(int *success, int *total)
{
	t_test	*test;

	test = NULL;
	ft_putendl_col("---- CONVERSIONS e-E --------------------", B_YELLOW, DEF);
	ft_putendl("");
	ft_load_test(&test, "basic_01", &e_basic_01);
	ft_load_test(&test, "basic_02", &e_basic_02);
	ft_load_test(&test, "basic_03", &e_basic_03);
	ft_load_test(&test, "basic_04", &e_basic_04);
	ft_load_test(&test, "basic_05", &e_basic_05);
	ft_load_test(&test, "basic_06", &e_basic_06);
	ft_load_test(&test, "basic_07", &e_basic_07);
	ft_load_test(&test, "basic_08", &e_basic_08);
	ft_load_test(&test, "basic_09", &e_basic_09);
	ft_load_test(&test, "basic_10", &e_basic_10);
	ft_load_test(&test, "basic_11", &e_basic_11);
	ft_load_test(&test, "basic_12", &e_basic_12);
	ft_load_test(&test, "devil_00", &e_devil_00);
	ft_load_test(&test, "longnb_01", &e_longnb_01);
	ft_load_test(&test, "longnb_02", &e_longnb_02);
	ft_load_test(&test, "longnb_03", &e_longnb_03);
	ft_load_test(&test, "padding_01", &e_padding_01);
	ft_load_test(&test, "padding_02", &e_padding_02);
	ft_load_test(&test, "padding_03", &e_padding_03);
	ft_load_test(&test, "padding_04", &e_padding_04);
	ft_load_test(&test, "precision_01", &e_precision_01);
	ft_load_test(&test, "precision_02", &e_precision_02);
	ft_load_test(&test, "precision_03", &e_precision_03);
	ft_load_test(&test, "precision_04", &e_precision_04);
	ft_load_test(&test, "precision_05", &e_precision_05);
	ft_load_test(&test, "all_01", &e_all_01);
	ft_load_test(&test, "all_02", &e_all_02);
	ft_load_test(&test, "all_03", &e_all_03);
	ft_load_test(&test, "all_04", &e_all_04);
	ft_load_test(&test, "all_05", &e_all_05);
	ft_load_test(&test, "all_06", &e_all_06);
	return(ft_launch_tests(&test, success, total));
}
