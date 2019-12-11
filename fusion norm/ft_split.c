/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:54:11 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/11 19:07:00 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_word(char const *str, char c)
{
	int i;
	int count;
	int lenstr;

	i = 0;
	lenstr = 0;
	count = 1;
	while (str[lenstr])
		lenstr++;
	if (lenstr == 0)
		return (0);
	while (str[i++])
	{
		if (str[i] == c)
			if (i < lenstr - 1 && str[i + 1] != c)
				count++;
	}
	return (count);
}

static int		find_word_size(char const *str, int index, char c)
{
	int count_letters;

	count_letters = 0;
	while (str[index] == c && str[index])
		index++;
	while (str[index] != c && str[index])
	{
		count_letters++;
		index++;
	}
	return (count_letters);
}

static int		find_first_letter(char const *str, int index, char c)
{
	while (str[index] == c && str[index])
		index++;
	return (index);
}

char			**ft_split(char const *s, char c)
{
	char	**chaine;
	int		i;
	int		j;
	int		index;
	int		fws;

	i = 0;
	j = 0;
	chaine = NULL;
	index = find_first_letter(s, 0, c);
	if (!(chaine = (char**)malloc(sizeof(char*) *
		(count_word(s, c) + 1))))
		return (NULL);
	while (i < count_word(s, c))
	{
		index = find_first_letter(s, index, c);
		fws = find_word_size(s, index, c);
		if (!(chaine[i] = (char*)malloc(sizeof(char) * (fws + 1))))
			return (NULL);
		while (s[index] != c && s[index])
			chaine[i][j++] = s[index++];
		j = 0;
		i++;
	}
	return (chaine);
}
