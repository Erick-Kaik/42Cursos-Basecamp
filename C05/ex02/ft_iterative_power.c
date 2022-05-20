/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:19:29 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/18 19:20:41 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power >= 1)
	{
		if (power == 1)
		{
			nb *= 1;
		}
		while (power > 1)
		{
			nb = nb * x;
			power--;
		}
	}
	return (nb);
}
