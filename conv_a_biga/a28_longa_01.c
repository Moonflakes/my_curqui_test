#include "conv_a_biga_test.h"

int		a_longa_01(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_write_test_name("%La **** %.5La, 4565445.5546456L, 0.0004567878L");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%La **** %.5La", 4565445.5546456L, 0.0004567878L);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%La **** %.5La", 4565445.5546456L, 0.0004567878L);
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
