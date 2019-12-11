/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:36:32 by yobouter          #+#    #+#             */
/*   Updated: 2019/10/09 16:52:28 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */







int ft_toascii(int c)
{
	if (c >= 127)
		return (c % 128);
	else if (c < 0)
		if (c % 128 == 0)
			return (0);
		return (128 + (c % 128));

	return (c);
}








#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{	
	(void)ac;
	printf("moi %d\n", ft_toascii(atoi(av[1])));
	printf("lui %d\n", toascii(atoi(av[1])));	
	return (0);
}
