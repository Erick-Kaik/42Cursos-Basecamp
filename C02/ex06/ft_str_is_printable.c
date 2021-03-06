/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 18:15:48 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/15 16:54:43 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] == '\0')
		{
			return (1);
		}
		else if (str[x] < 32 || str[x] == 127)
		{
			return (0);
		}
		x++;
	}
	return (1);
}
