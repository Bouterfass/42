/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 10:35:21 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 21:01:12 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	int		i;
	char	*tmp;
	int		len;

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
