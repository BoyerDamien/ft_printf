/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minmax_nb_hex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 13:13:53 by dboyer            #+#    #+#             */
/*   Updated: 2019/12/27 17:00:21 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

t_format	ft_minmax_nb_hex(t_format format, int arg)
{
	int	nbrlen;

	nbrlen = (int)ft_nbrlen_base(arg, 16);
	nbrlen = arg < 0 ? nbrlen + (8 - nbrlen) : nbrlen;
	nbrlen = format.point && format.max == 0 && arg == 0 ? 0 : nbrlen;
	format = ft_minmax(format, nbrlen);
	return (format);
}
