/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 12:50:09 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/02 13:06:16 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	str = NULL;
	i = 0;
	str = (char*)malloc(sizeof(char*) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[len] = '\0';
	return (str);
}

int main(int ac, char **av)
{
	(void)ac;

	printf("result  %s\n", ft_substr(av[1], atoi(av[2]), atoi(av[3])));
	return (0);
}
