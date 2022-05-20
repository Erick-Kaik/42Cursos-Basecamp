/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:52:13 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/18 19:24:55 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
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
			nb *= 1;
		else
		{
			return (x * ft_recursive_power(x, power - 1));
		}
	}	
	return (x);
}
