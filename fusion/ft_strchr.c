/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 09:25:06 by yobouter          #+#    #+#             */
/*   Updated: 2019/11/30 10:34:25 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strchr(const char *string, int c)
{
	int i;
	int j;
	char *tmp;

	i = 0;
	j = 0;
	tmp = (char *)string;
	while (tmp[i] != '\0')
	{
		if (tmp[i] == (char)c)
			return (tmp + i);
		else
			i++;
	}
	return (NULL);
}


int main(int ac, char **av)
{
	(void)ac;
	printf("result %s\n", strchr(av[1],atoi(av[2])));
	printf("my result %s\n", ft_strchr(av[1], atoi(av[2])));
	return (0);
}
