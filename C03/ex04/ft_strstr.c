/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:07:39 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/16 20:30:15 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	y = 0;
	x = 0;
	if (to_find[x] == '\0')
	{
		return (str);
	}
	while (str[x] != '\0')
	{
		y = 0;
		while (str[x + y] == to_find[y] && str[x + y] != '\0')
		{
			if (to_find[y + 1] == '\0')
				return (&str[x]);
			y++;
		}
		x++;
	}
	return (0);
}
