/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:11:47 by gruta             #+#    #+#             */
/*   Updated: 2024/09/03 17:23:25 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	my_integer;
	int	minuses;
	int	i;

	i = 0;
	minuses = 0;
	my_integer = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minuses++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		my_integer = my_integer * 10 + (str[i] - '0');
		i++;
	}
	if (minuses % 2 == 1)
		my_integer = -my_integer;
	return (my_integer);
}
