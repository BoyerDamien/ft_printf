/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 10:39:05 by dboyer            #+#    #+#             */
/*   Updated: 2020/01/02 14:34:42 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_base(int nb, char *base)
{
	size_t	n_base;

	n_base = ft_strlen(base);
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, 1);
		ft_putnbr_fd(nb % 10, 1);
	}
	else
		ft_putchar_fd(nb + '0', 1);
}
