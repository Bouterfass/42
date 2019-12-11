/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 18:27:43 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/02 12:32:58 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
 
void *ft_memset(void *block, int c, size_t size)
{
	size_t i;	
	unsigned char *ptr;
	
	i = 0;
	ptr = block;

	while (i < size)
	{
		ptr[i] = c; 
		i++;
	}
	return ((void *)block);
}

int main()
{
	char b[16] = "salut ca va";
	char c[16] = "salut a va";
	memset(b, 0,  5);
	ft_memset(c, 0, 5);
	printf("size of b %lu\n", sizeof(b));
	printf("size of c %lu\n", sizeof(c));
	printf("vrai : %s\n", b);
	printf("la mienne : %s\n", c);
	return (0);
}
