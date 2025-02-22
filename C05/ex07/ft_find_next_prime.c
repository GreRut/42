/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 12:47:27 by gruta             #+#    #+#             */
/*   Updated: 2024/09/04 21:06:09 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	boolean;
	int	check;

	if (nb < 2)
		return (0);
	boolean = 1;
	check = nb - 1;
	while (nb > 3 && check > 1)
	{
		if (nb % check == 0)
		{
			boolean = 0;
			break ;
		}
		check --;
	}
	return (boolean);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	if (nb == 2147483647)
		return (nb);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
