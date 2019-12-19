/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 11:00:23 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/02 11:18:01 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static int	ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strdup(const char * s)
{
	char	*duplicate;
	int		i;

	duplicate = NULL;
	duplicate = (char*)malloc(sizeof(*duplicate) * (ft_strlen(s) + 1));
	if (!duplicate)
		return (NULL);
	i = 0;
	while (s[i])
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}

int main(int ac, char **av)
{
	(void)ac;
	printf("result %s\n", strdup(av[1]));
	printf("my result %s\n", ft_strdup(av[1]));
	return (0);
}
