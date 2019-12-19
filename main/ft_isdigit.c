/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:21:56 by yobouter          #+#    #+#             */
/*   Updated: 2019/10/09 17:27:45 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);

}



#include <stdio.h>
#include <stdlib.h>


int main(int ac, char **av)
{
	(void)ac;
	printf("%d\n", ft_isdigit(atoi(av[1])));
	return (0);
}
