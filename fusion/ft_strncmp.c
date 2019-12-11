/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 11:00:13 by yobouter          #+#    #+#             */
/*   Updated: 2019/11/30 11:22:20 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	size_t i;

	i = 0;
	
	while ((s1[i] != '\0' || s2[i] != '\0') && i < size)
	{
		if (s1[i] != s2[i])
			return ((unsigned int)s1[i] - (unsigned int)s2[i]);
		i++;
	}
	return (0);
}

int main(int ac, char **av)
{
	(void)ac;
	printf("result %d\n", strncmp(av[1], av[2], atoi(av[3])));
	printf("my result %d\n", ft_strncmp(av[1], av[2], atoi(av[3])));
	return (0);
}

