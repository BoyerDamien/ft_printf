/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 10:41:11 by dboyer            #+#    #+#             */
/*   Updated: 2020/01/02 18:02:30 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#	ifndef LIBFTPRINTF_H
#	define LIBFTPRINTF_H
#	define CONVERTER "cspdiuxX%"
# 	include "libft.h"
#	include <stdarg.h>

typedef struct		s_format
{
	char			converter;
	int				min;
	int				max;
	int				point;
	int				padding;
	int				inversed;
	int				min_zero;
	int				max_zero;
	int				space_padding;
	int				zero_padding;
	char			*flag;
}					t_format;

int					ft_isflag(const char *flag);
int					ft_print(t_format format, va_list *va);
int					ft_print_percent(t_format format);
int					ft_print_char(t_format format, va_list *va);
int					ft_print_str(t_format format, va_list *va);
int					ft_print_nb(t_format format, va_list *va);
int					ft_print_unsigned_nb(t_format format, va_list *va);
int					ft_print_nb_hex(t_format format, va_list *va);
int					ft_print_memory(t_format format, va_list *va);
int					ft_print_space_before(t_format format);
int					ft_print_space_after(t_format format);
int					ft_print_zero_padding(t_format format);
int					ft_printf(const char *str, ...);

char				*ft_strrev(char *str);

size_t				ft_nbrlen(long nb);
size_t				ft_nbrlen_unsigned(unsigned int nb);
size_t				ft_nbrlen_base(long nb, int n_base);

char				*ft_getflag(const char *occurence);

void				ft_putnbr_hex(long nb, char *base, char *neg);
void				ft_putnbr_unsigned(unsigned int nb);
void				ft_putnstr(char *str, int n);

t_format			ft_minmax(t_format format, int nbrlen);
t_format			ft_minmax_str(t_format format, char *arg);
t_format			ft_minmax_nb(t_format format, int arg);
t_format			ft_minmax_nb_hex(t_format format, int arg);
t_format			ft_minmax_unsigned_nb(t_format format, unsigned int arg);
t_format			ft_minmax_memory(t_format format, long arg);
t_format			ft_parsing(t_format format, va_list *va);
t_format			ft_format(char *flag, va_list *va);
#	endif
