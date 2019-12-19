/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:19:55 by yobouter          #+#    #+#             */
/*   Updated: 2019/10/09 16:29:36 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}




#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	(void)ac;
	printf("%c \n", ft_tolower(atoi(av[1])));
	return (0);
}
