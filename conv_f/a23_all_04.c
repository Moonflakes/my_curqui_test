#include "conv_f_test.h"

int		f_all_04(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_write_test_name("%#7.5f %#0.12f %#7.5f %#0.12f /\n, 0.0, -45.789, 1.0, 0.0004745");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%#7.5f %#0.12f %#7.5f %#0.12f \n", 0.0, -45.789, 1.0, 0.0004745);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%#7.5f %#0.12f %#7.5f %#0.12f \n", 0.0, -45.789, 1.0, 0.0004745);
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
