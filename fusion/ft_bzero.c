/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 20:15:13 by yobouter          #+#    #+#             */
/*   Updated: 2019/10/14 20:35:03 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
 
void ft_bzero(void *block,  size_t size)
{
	int i;	
	unsigned char *ptr;
	
	i = 0;

	printf("block %s\n\n", block);	
	
	ptr = block;
	
	printf("ptr %s\n\n", ptr);
	
	while (i < size)
	{
		ptr[i] = 0; 
		i++;
	}
}

int main()
{
	char b[12] = "salut ca va";
	char c[12] = "salut ca va";
	bzero(&b, 12);
	ft_bzero(&c, 12);
	printf("vrai : %s\n", b);
	printf("la mienne : %s\n", c);
	return (0);
}
