/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:34:19 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 18:45:42 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_in_set(char const c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int		get_last(char const *str, char const *set)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	len--;
	while (len > 0 && is_in_set(str[len], set) == 1)
	{
		len--;
	}
	return (len);
}

static int		get_first(char const *str, char const *set)
{
	int i;

	i = 0;
	while (str[i] && is_in_set(str[i], set) == 1)
		i++;
	return (i);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	char	*new_s1;
	int		deb;
	int		fin;
	int		i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	len = get_last(s1, set) - get_first(s1, set);
	deb = get_first(s1, set);
	fin = get_last(s1, set);
	if (!(new_s1 = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (deb <= fin)
	{
		new_s1[i] = s1[deb];
		i++;
		deb++;
	}
	new_s1[i] = '\0';
	return (new_s1);
}
