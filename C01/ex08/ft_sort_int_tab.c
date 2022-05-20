/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:55:43 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/14 00:50:12 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	y;
	int	min;

	x = 0;
	while (x < (size - 1))
	{
		min = x;
		y = x + 1;
		while (y < size)
		{
			if (tab[y] < tab[min])
			{
				min = y;
			}
			y++;
		}
		ft_swap(&tab[min], &tab[x]);
		x++;
	}
}
