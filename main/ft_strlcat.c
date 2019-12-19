/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 10:12:32 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/02 10:57:25 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize){
	size_t i;
	size_t j;
	size_t  src_len;
	
	i = 0;
	src_len = 0;
	while (dst[i] != '\0')
		i++;
	while (src[src_len] != '\0')
		src_len++;
	if (dstsize <= i)
		src_len = src_len + dstsize;
	else
		src_len = src_len + i;
	j = 0;
	while (src[j] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	dst[i] = '\0'; 
	return (src_len);
}

int main(int ac, char **av)
{
	(void)ac;

	char dest[10] = "bouters";
	printf("%lu\n", sizeof dest);
	printf("result %lu\n", strlcat(dest, av[1], 7));
	printf("my result %lu\n", ft_strlcat(dest, av[1], 7));
	return (0);
}
