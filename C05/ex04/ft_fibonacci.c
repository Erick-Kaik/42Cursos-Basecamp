/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:53:43 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/18 19:59:14 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	x;

	if (index == 0)
		return (0);
	else if (index == 1 || index < 0)
		return (1);
	else if (index > 1)
		x = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (x);
}
