/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yobouter <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:39:35 by yobouter          #+#    #+#             */
/*   Updated: 2019/10/09 18:05:42 by yobouter         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int ft_atoi(const char* string)
{
	int neg;
	int res;

	neg = 1;
	res = 0;
	while (*string == ' ' || *string == '\t' || *string == '\v' || *string == '\f' || *string == '\r' || *string == '\n')
		string++;
	  if (*string == '-')
	    neg = -1;	
	  if (*string == '-' || *string == '+')
	    string++;
	while (*string >= '0' && *string <= '9')
	{
	  res = (res * 10) + (*string - 48);
	  string++;
	}
	return (res * neg);
}


#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	(void)ac;
	printf("lui %d\n", atoi(av[1]));
	printf("moi %d\n", ft_atoi(av[1]));
	return (0);
}
