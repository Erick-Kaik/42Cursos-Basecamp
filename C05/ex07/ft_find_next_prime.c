/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 18:59:44 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/19 01:15:15 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int n)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	if (n == 0 && n == 1)
		return (0);
	else if (n < 0)
		return (0);
	while (x <= n)
	{
		if (n % x == 0)
			y++;
		x++;
	}
	if (y == 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_prime(nb))
		nb++;
	return (nb);
}
