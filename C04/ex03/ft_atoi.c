/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:41:45 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/18 21:35:52 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int main(void)
{
  printf("\n---- ft_atoi --- ex03:\n");
    printf("1 - tem que ser : -1234, é : %d\n", ft_atoi(" ---+--+1234ab567"));
    printf("2 - tem que ser : 1234, é : %d\n", ft_atoi(" --+--+1234ab567"));
    printf("3 - tem que ser : -1234, é : %d\n", ft_atoi("---+--+1234ab567"));
    printf("4 - tem que ser : 1234, é : %d\n", ft_atoi("   1234ab567"));
    printf("5 - tem que ser : 1234, é : %d\n", ft_atoi("1234ab567"));
    printf("6 - tem que ser : 0, é : %d\n", ft_atoi(" ---+--+ 1234ab567"));
    printf("7 - tem que ser : -1234, é : %d\n", ft_atoi(" ---+--+1234+b567"));
    printf("8 - tem que ser : 0, é : %d\n", ft_atoi(" ---+--+A1234+r567"));
    printf("9 - tem que ser : 0, é : %d\n", ft_atoi("A"));
    printf("10 - tem que ser : 0, é : %d\n", ft_atoi("-0"));
    printf("11 - tem que ser : -2147483648, é : %d\n", ft_atoi("-2147483648"));
    printf("12 - tem que ser : 2147483647, é : %d\n", ft_atoi("2147483647"));
}

int	ft_atoi(char *str)
{
	int	x;
	int	y;
	int	value;

	x = 0;
	y = 1;
	value = 0;
	while ((str[x] >= '\t' && str[x] <= '\r') || str[x] == ' ')
	{
		x++;
	}
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			y *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		value = (value * 10) + str[x] - '0';
		x++;
	}
	return (value * y);
}
