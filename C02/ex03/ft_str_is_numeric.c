/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 13:03:22 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/15 16:50:50 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] == '\0')
		{
			return (1);
		}
		else if (str[x] < '0' || str[x] > '9')
		{
			return (0);
		}
		x++;
	}
	return (1);
}
