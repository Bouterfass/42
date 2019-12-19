/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:54:11 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/17 19:15:44 by yobouter         ###   ########.fr       */
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
	while (str[i] == c && str[i])
		i++;
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

static int		fws(char const *str, char c)
{
	int count_letters;
	int index;

	index = 0;
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

char			**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = -1;
	if (!(str = (char**)malloc(sizeof(char*) *
		(count_word(s, c) + 1))) || !s)
		return (NULL);
	while (i < count_word(s, c))
	{
		if (!(str[i] = (char*)malloc(sizeof(char) * (fws(&s[++k], c) + 1))))
			return (NULL);
		while (s[k] == c)
				k++;
		while (s[k] != c && s[k])
			str[i][j++] = s[k++];
		str[i][j] = '\0';
		j = 0;
		i++;
	}
	str[i] = NULL;
	return (str);
}



int		main(int ac, char **av)
{
	(void)ac;
	char **tab;


	tab = ft_split(av[1], ' ');
	int i = 0;
	int j = 0;

		while (i < count_word(av[1], ' '))
		{
			while (tab[i][j] != '\0')
			{
				printf("%c", tab[i][j]);
				j++;
			}
			printf("\n");
			j = 0;
			i++;
		}

	return (0);
}
