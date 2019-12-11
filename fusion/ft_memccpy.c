/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 21:03:17 by yobouter          #+#    #+#             */
/*   Updated: 2019/10/14 22:47:00 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

void *ft_memccpy(void *to, void *from, int c, size_t size)
{
	int i;
	char *s;
	char *d;
	int len;

	i = 0;
	s = from;
	d = to;
	len = 0;
	while ((i < size))
	{
		d[i] = s[i];
		if (s[i] == c)
			return (to);
		i++;
	}
	//d[i] = s[i];
	d[i] = '\0';
	return (to);
}	


int main ()
{
	char src[25] = "youcef";
	char dest[25] = "";
	memccpy(dest, src, 'q' , 2); 
	char s[25] = "youcef";
	char d[25] = "";
	ft_memccpy(d, s, 'q', 2);
	printf("vrai %s\n", dest);
	printf("moi %s\n", d);
	return (0);
}


