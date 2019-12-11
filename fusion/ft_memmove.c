/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 22:54:44 by yobouter          #+#    #+#             */
/*   Updated: 2019/11/30 09:01:06 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memmove(void *to, const void *from, size_t size)
{
	char *src;
   	char *dest;
	char tmp[size];
	size_t i;

	src = (char *)from;
	dest = to;
	i = 0;

	while (i < size)
	{
		tmp[i] = src[i];
		i++;
	}
	i = 0;
	while (i < size)
	{
		dest[i] = tmp[i];
		i++;		
	}
	return (to);
}

int main()
{
	char s[100] = "";
	char s2[100]= "";
	memmove(s + 7, s, 17);
	ft_memmove(s2 + 7, s2, 17);
	printf("vrai %s\n", s);
	printf("moi %s\n", s2);
	return (0);
}
