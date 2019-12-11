/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:14:03 by yobouter          #+#    #+#             */
/*   Updated: 2019/10/09 17:20:15 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




int ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <=57))
		return (1);
	return (0);
}









#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int ac, char **av)
{
	(void)ac;
	printf("lui %d\n", isalnum(atoi(av[1])));
	printf("%d\n", ft_isalnum(atoi(av[1])));
	return (0);
}

