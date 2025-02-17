/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 21:56:30 by gruta             #+#    #+#             */
/*   Updated: 2024/09/08 22:15:04 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	guthenberg(int i, int j)
{
	char	first;
	char	second;
	char	third;
	char	fourth;

	first = (i / 10) + '0';
	second = (i % 10) + '0';
	third = (j / 10) + '0';
	fourth = (j % 10) + '0';
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, " ", 1);
	write (1, &third, 1);
	write (1, &fourth, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			guthenberg(i, j);
			if (!(i == 98 && j <= 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
