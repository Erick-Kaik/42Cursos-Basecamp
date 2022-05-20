/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 17:28:30 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/08 17:40:21 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alfabeto_inv;

	alfabeto_inv = 'z';
	while (alfabeto_inv >= 'a')
	{
		write(1, &alfabeto_inv, 1);
		alfabeto_inv--;
	}
}
