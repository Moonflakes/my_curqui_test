#include "conv_g_bigg_test.h"

int		g_all_05(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_write_test_name("%0*.*i %*.*g  /\n, 15, 2, 45456, 20, 8, 12.45");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%0*.*i %*.*g  \n", 15, 2, 45456, 20, 8, 12.45);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%0*.*i %*.*g  \n", 15, 2, 45456, 20, 8, 12.45);
	data.s2 = ft_get_stdout(pfd, &save_stdout);
	ret = 0;
	if (data.r1 != data.r2)
		ret = -1;
	if (ft_strcmp(data.s1, data.s2))
		ret = -1;
	ft_write_rslt(data, ret);
	ft_strdel(&data.s1);
	ft_strdel(&data.s2);
	return (ret);
}
