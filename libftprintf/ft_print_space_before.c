/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_space_before.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 13:06:15 by dboyer            #+#    #+#             */
/*   Updated: 2019/12/27 18:10:22 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_space_before(t_format format)
{
	int	i;

	if (format.space_padding > 0 && (format.point || !format.min_zero))
	{
		i = 0;
		while (i < format.space_padding)
		{
			ft_putchar(' ');
			i++;
		}
		return (i);
	}
	return (0);
}
