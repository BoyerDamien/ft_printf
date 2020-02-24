/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/02 12:14:57 by dboyer            #+#    #+#             */
/*   Updated: 2020/01/02 12:15:11 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_nbrlen_base(long nb, int n_base)
{
	size_t i;

	i = 0;
	if (nb != 0)
	{
		nb = nb < 0 ? -nb : nb;
		while (nb >= 1)
		{
			nb = nb / n_base;
			i++;
		}
		return (i);
	}
	return (1);
}
