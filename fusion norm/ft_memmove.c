/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 22:54:44 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 20:54:04 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t size)
{
	char	*src;
	char	*dest;
	char	tmp[size];
	size_t	i;

	src = (char *)from;
	dest = to;
	i = 0;
	while (i < size)
	{
		tmp[i] = src[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		dest[i] = tmp[i];
		i++;
	}
	return (to);
}
