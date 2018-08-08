#include "conv_a_biga_test.h"

int		a_basic_04(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_write_test_name("%a , 5.2");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%a", 5.2);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%a", 5.2);
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
