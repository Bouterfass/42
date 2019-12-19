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

void	*ft_memccpy(void *to, void *from, int c, size_t size)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)from;
	d = (char *)to;
	while (i < size)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (to + i + 1);
		i++;
	}
	return (NULL);
}

int main ()
{
	char src[25] = "youcef";
	char dest[25] = "";
	memccpy(dest, src, 99 , 6); 
	char s[25] = "youcef";
	char d[25] = "";
	ft_memccpy(d, s, 99, 6);
	printf("vrai %s\n", dest);
	printf("moi %s\n", d);
	return (0);
}


