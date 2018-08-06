#include "test.h"

static void	ft_init_btab(int (**f)(int *, int *))
{
	f[0] = &conv_f_launcher;
    f[1] = &conv_e_bige_launcher;
    f[2] = &conv_g_bigg_launcher;
    f[3] = &conv_a_biga_launcher;
	f[4] = NULL;
}

static void	ft_init_test_name(char **tab)
{
	tab[0] = strdup("Conv f");
    tab[1] = strdup("Conv e-E");
    tab[2] = strdup("Conv g-G");
    tab[3] = strdup("Conv a-A");
	tab[4] = NULL;
}

void	    ft_bonus(t_score **score)
{
	int		(*b[NB_BONUS + 1])(int *, int *);
    char	*test_name[NB_BONUS + 1];

	ft_init_btab(b);
	ft_init_test_name(test_name);
	ft_write_title();
	ft_putstr("");
	ft_putstr_col("*****************************************\n", B_YELLOW, DEF);
	ft_putstr_col("************ BONUS - MTHIERY ************\n", B_YELLOW, DEF);
	ft_putstr_col("*****************************************\n", B_YELLOW, DEF);
	ft_putstr("\n");
	ft_run_tests(score, b, test_name);
    ft_putstr("");
}