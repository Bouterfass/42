/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 20:36:45 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/02 12:32:35 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *to, void *from, size_t size)
{
	size_t i;
	char *s;
	char *d;
	
	i = 0;
	s = from;
	d = to;

	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}	


int main()
{

	char src[25] = "youcef bouterfass";
	char dest[25]= "";
	char s[25] = "youcef bouterfass";
	char d[25] = "";

	printf("vrai %s\n", memcpy(dest, src, 17));
	printf("moi %s\n", ft_memcpy(d , s , 17));
	return (0);
}
