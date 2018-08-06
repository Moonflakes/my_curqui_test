#ifndef TEST_H
# define TEST_H

# include "libunit.h"
# include <wchar.h>
# include <locale.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>


# define NB_TEST_TYPE 14
# define NB_BONUS 5

int				ft_printf(char *s, ...);

void			ft_putstr(char const *s);
void			ft_putstr_col(char *str, char *color, char *colreset);
void			ft_putendl(char const *s);
void			ft_putendl_col(char *str, char *color, char *colreset);
int				ft_strcmp(const char *s1, const char *s2);
void			ft_strdel(char **as);

void	        ft_run_tests(t_score **score, int (**f)(int *, int *), char **name);
void            ft_bonus(t_score **score);

int				basics_launcher(int *success, int *total);
int				conv_d_i_bigd_launcher(int *success, int *total);
int				conv_p_launcher(int *success, int *total);
int				conv_c_launcher(int *success, int *total);
int				conv_s_launcher(int *success, int *total);
int				conv_bigc_launcher(int *success, int *total);
int				conv_bigs_launcher(int *success, int *total);
int				conv_u_bigu_launcher(int *success, int *total);
int				conv_x_bigx_launcher(int *success, int *total);
int				conv_o_bigo_launcher(int *success, int *total);
int				percent_launcher(int *success, int *total);
int				mixed_launcher(int *success, int *total);

int             conv_f_launcher(int *success, int *total);
int             conv_e_bige_launcher(int *success, int *total);
int             conv_g_bigg_launcher(int *success, int *total);
int             conv_a_biga_launcher(int *success, int *total);

#endif
