/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 19:31:34 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 19:38:11 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*my_memcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char			*ft_itoa(int n)
{
	char *str;

	if (!(str = (char*)malloc(sizeof(char) * 2)))
		return (NULL);
	if (n == -2147483648)
	{
		str = my_memcpy(str, "-2147483648");
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		str[1] = '\0';
		str = ft_strjoin(str, ft_itoa(-n));
	}
	else if (n >= 0 && n < 10)
	{
		str[0] = n + '0';
		str[1] = '\0';
	}
	else if (n >= 10)
		str = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	return (str);
}
