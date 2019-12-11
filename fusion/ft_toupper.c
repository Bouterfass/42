/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 16:30:11 by yobouter          #+#    #+#             */
/*   Updated: 2019/10/09 16:32:52 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}


#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
        (void)ac;
        printf("%c \n", ft_toupper(atoi(av[1])));
        return (0);
}
