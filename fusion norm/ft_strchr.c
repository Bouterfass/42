/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 09:25:06 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 19:51:56 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	int		i;
	char	*tmp;

	i = 0;
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
