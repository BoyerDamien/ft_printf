/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:16:51 by dboyer            #+#    #+#             */
/*   Updated: 2020/01/02 15:26:04 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_strrev(char *str)
{
	int		i;
	size_t	len;
	char	*result;

	i = 0;
	result = ft_strdup(str);
	len = ft_strlen(str);
	while (str[len - 1 - i])
	{
		result[i] = str[len - 1 - i];
		i++;
	}
	return (result);
}
