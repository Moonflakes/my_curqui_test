#include "conv_a_biga_test.h"

int		a_round_a_01(void)
{
	t_data	data;
	int		pfd[2];
	int		ret;
	int		save_stdout;

	ft_write_test_name("%a %.1a %.2a %.3a %.5a %.7a %.9a %.11a , 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449");
	ft_connect_stdout(pfd, &save_stdout);
	data.r1 = ft_printf("%a %.1a %.2a %.3a %.5a %.7a %.9a %.11a \n", 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449);
	data.s1 = ft_get_stdout(pfd, &save_stdout);
	ft_connect_stdout(pfd, &save_stdout);
	data.r2 = printf("%a %.1a %.2a %.3a %.5a %.7a %.9a %.11a \n", 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449, 1.470834294502112449);
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
