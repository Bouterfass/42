/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 08:25:30 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 18:51:08 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *a1, const void *a2, size_t size)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)a1;
	str2 = (char *)a2;
	i = 0;
	while (i < size)
	{
		if (str1[i] == str2[i])
			i++;
		else
		{
			return ((unsigned int)str1[i] - (unsigned int)str2[i]);
		}
	}
	return (0);
}
