/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:06:33 by yobouter          #+#    #+#             */
/*   Updated: 2019/10/09 17:13:03 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





int ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}



#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_isalpha(atoi(av[1])));
	return (0);
}
