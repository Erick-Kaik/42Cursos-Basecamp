/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:53:28 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/08 16:07:12 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	contador(int a, int b, int c, int d);

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	contador(a, b, c, d);
}

void	printar_num(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (a == '9' && b == '8' && c == '9' && d == '9')
		;
	else
	{
		write(1, ", ", 1);
	}
}

void	soma(int *x, int *y)
{
	*x = *x + 1;
	*y = '0';
}

void	contador(int a, int b, int c, int d)
{
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					if (c == a && d > b)
					{
						printar_num(a, b, c, d);
					}
					if (c > a)
					{
						printar_num(a, b, c, d);
					}
					d++;
				}
				soma(&c, &d);
			}
			soma(&b, &c);
		}
		soma(&a, &b);
	}
}
