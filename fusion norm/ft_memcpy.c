/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 20:36:45 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 19:39:03 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, void *from, size_t size)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = from;
	d = to;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
