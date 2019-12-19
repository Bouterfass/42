/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 11:19:06 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/02 11:41:29 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*cursor;

	i = 0;
	cursor = 0;
	if (needle[i] == '\0')
		return ((char*)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			cursor = (char*)haystack + i;
			j = 0;
			while (haystack[i + j] == needle[j] && i + j < len)
			{
				if (needle[j + 1] == '\0')
					return (cursor);
				j++;
			}
			cursor = 0;
		}
		i++;
	}
	return (NULL);	
}


int main(int ac, char **av)
{
	(void)ac;
	printf("result %s\n", strnstr(av[1], av[2], atoi(av[3])));
	printf("my result %s\n", ft_strnstr(av[1], av[2], atoi(av[3])));

	return (0);
}
