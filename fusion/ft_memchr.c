/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 23:21:23 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 16:53:38 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void *ft_memchr(const void *block, int c, size_t size)
{
	char *str;
	size_t i;

	str = (char *)block;
	i = 0;

	while (str[i] && i < size)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}

int main(int ac, char **av)
{
	(void)ac;
	printf("my result %s\n", ft_memchr(av[1], 111, 4));
	printf("result %s\n", memchr(av[1], 111, 4));
	return (0);
}
