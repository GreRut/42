/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:39:01 by gruta             #+#    #+#             */
/*   Updated: 2024/09/04 16:55:31 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printing(long int nbr)
{
	char	c;

	if (nbr >= 10)
		printing(nbr / 10);
	c = (nbr % 10) + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	nbr;

	nbr = nb;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	printing(nbr);
}
