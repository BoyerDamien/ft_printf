/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getflag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 11:15:15 by dboyer            #+#    #+#             */
/*   Updated: 2019/11/28 09:04:23 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_getflag(const char *occurence)
{
	int i;

	if (occurence != NULL && ft_isflag(occurence))
	{
		i = 1;
		while (occurence[i])
		{
			if (ft_cinset(occurence[i], CONVERTER))
				return (ft_substr(occurence, 0, i + 1));
			i++;
		}
	}
	return (NULL);
}
