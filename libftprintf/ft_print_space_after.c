/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_space_after.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 13:08:35 by dboyer            #+#    #+#             */
/*   Updated: 2019/12/27 13:08:56 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_space_after(t_format format)
{
	int i;

	if (format.space_padding < 0 && (format.point || !format.min_zero))
	{
		i = 0;
		while (i < -format.space_padding)
		{
			ft_putchar(' ');
			i++;
		}
		return (i);
	}
	return (0);
}
