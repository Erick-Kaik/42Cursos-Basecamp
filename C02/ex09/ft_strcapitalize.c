/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekaik-ne <ekaik-ne@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 20:00:19 by ekaik-ne          #+#    #+#             */
/*   Updated: 2022/02/15 22:22:29 by ekaik-ne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main(void)
{
	char str1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	char str2[] = " sALuT, ComMenT tu VAS ? 42Mots QUarante-deUX; cinQuantE+ET+un";

	char empty[] = "";

	printf("\n-----\nBEF = %s", str1);
	printf("\nAFT = %s\n", ft_strcapitalize(str1));
	printf("\nBEF = %s", str2);
	printf("\nAFt = %s\n", ft_strcapitalize(str2));
	printf("\nEmpty = %s\n-----\n", ft_strcapitalize(empty));

}

char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x - 1] >= 32 && str[x - 1] <= 47)
		{
			if (str[x] >= 'a' && str[x] <= 'z')
			{
				str[x] -= 32;
			}
		}
		else if (x == 0 && (str[x] >= 'a' && str[x] <= 'z'))
		{
			str[x] -= 32;
		}
		else if (str[x - 1] != 32 && (str[x] >= 'A' && str[x] <= 'Z'))
		{
			str[x] += 32;
		}
		x++;
	}
	return (str);
}
