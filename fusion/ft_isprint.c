/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:29:29 by yobouter          #+#    #+#             */
/*   Updated: 2019/10/09 17:37:50 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isprint(int c)
{
	if (c >= 32 && c <= 127)
		return (1);
	return (0);
}


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int ac,char **av)
{
	(void)ac;
	printf("lui %d\n", isprint(atoi(av[1])));
	printf("%d\n", ft_isprint(atoi(av[1])));
	return (0);
}
