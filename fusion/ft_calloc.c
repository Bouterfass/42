/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 12:29:55 by yobouter          #+#    #+#             */
/*   Updated: 2019/12/02 12:45:49 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void static	*my_memset(void *block, int c, size_t size)
{
	size_t		i;
	unsigned char	*ptr;

	i = 0;
	ptr = block;
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return ((void*)block);
}

void	*ft_calloc(size_t count, size_t eltsize)
{
	size_t size = count * eltsize;
	void *value = malloc(size);
	if (value != 0)
		my_memset(value, 0, size);
	return (value);
}

int main()
{
	size_t len = 10;
	char	*ptr = (char*)calloc(10, sizeof(char*));
	size_t i = 0;
	while (i < len)
	{	
		printf("%d ",ptr[i]);
		i++;
	}
	return (0);
}
