/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 11:50:59 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 20:09:07 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		my_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static void		*my_memcpy(void *to, void *from, size_t size)
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

size_t			ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t srclen;

	srclen = my_strlen(src);
	if (srclen + 1 < dstsize)
		my_memcpy(dest, (void *)src, srclen + 1);
	else if (dstsize != 0)
	{
		my_memcpy(dest, (void *)src, dstsize - 1);
		dest[dstsize - 1] = '\0';
	}
	return (srclen);
}
