/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 13:50:33 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/17 16:41:19 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb / 10 == 0)
		ft_putchar('-');
	if (nb / 10 != 0)
		ft_putnbr(nb / 10);
	if (nb % 10 < 0)
		ft_putchar((nb % 10) * -1 + '0');
	else
		ft_putchar(nb % 10 + '0');
}
