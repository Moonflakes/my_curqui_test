#include "conv_g_bigg_test.h"

int		g_all_03(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_write_test_name("%#.1G %#.1g %#.1G %#.1g /\n, 0.0, -45.789, 1.0, 0,.004745");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%#.1G %#.1g %#.1G %#.1g \n", 0.0, -45.789, 1.0, 0.0004745);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%#.1G %#.1g %#.1G %#.1g \n", 0.0, -45.789, 1.0, 0.0004745);
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
