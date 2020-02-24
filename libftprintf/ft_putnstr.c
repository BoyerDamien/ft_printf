/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:56:52 by dboyer            #+#    #+#             */
/*   Updated: 2019/12/20 11:02:59 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnstr(char *str, int n)
{
	int i;

	if (str != NULL)
	{
		i = 0;
		while (i < n && (str[i]))
		{
			ft_putchar(str[i]);
			i++;
		}
	}
}
