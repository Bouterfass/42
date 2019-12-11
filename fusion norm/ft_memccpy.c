/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:03:17 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 20:49:40 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *to, void *from, int c, size_t size)
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
		if (s[i] == c)
			return (to);
		i++;
	}
	d[i] = '\0';
	return (to);
}
