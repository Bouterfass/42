/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 10:35:21 by yobouter          #+#    #+#             */
/*   Updated: 2019/11/30 10:56:09 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strrchr(const char *string, int c)
{
	int i;
	char *tmp;
	int len;

	tmp = (char *)string;
	len = 0;

	while (string[len] != '\0')
		len++;
	i = len;
	while (i > 0)
	{
		if (tmp[i] == (char)c)
			return (tmp + len - (len - i));
		i--;
	}
	return (NULL);
}

int main (int ac, char **av)
{
	(void)ac;
	printf("result %s\n", strrchr(av[1], atoi(av[2])));
	printf("my result %s\n", ft_strrchr(av[1], atoi(av[2])));
	return (0);
}
