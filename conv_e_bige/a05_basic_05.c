#include "conv_e_bige_test.h"

int		e_basic_05(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_write_test_name("%e %e %e %e %e %e %e %e , 4.1, 4.01, 4.001, 4.0001, 4.00001, 4.000001, 4.0000001, 4.00000001");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%e %e %e %e %e %e %e %e", 4.1, 4.01, 4.001, 4.0001, 4.00001, 4.000001, 4.0000001, 4.00000001);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%e %e %e %e %e %e %e %e", 4.1, 4.01, 4.001, 4.0001, 4.00001, 4.000001, 4.0000001, 4.00000001);
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
