/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 21:20:50 by gruta             #+#    #+#             */
/*   Updated: 2024/09/03 19:26:44 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printing(long int n, int i, char *base)
{
	if (n >= i)
		printing(n / i, i, base);
	write(1, &base[n % i], 1);
}

int	norminette(char *base)
{
	int	k;
	int	j;

	k = 0;
	while (base[k] != '\0')
	{
		if (base[k] == '+' || base[k] == '-')
			return (-1);
		j = k + 1;
		while (base[j] != '\0')
		{
			if (base[k] == base[j])
				return (-1);
			j++;
		}
		k++;
	}
	return (k);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	long int	n;

	n = nbr;
	i = norminette (base);
	if (i <= 1)
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	printing (n, i, base);
}
