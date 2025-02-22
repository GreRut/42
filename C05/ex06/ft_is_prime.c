/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 21:04:24 by gruta             #+#    #+#             */
/*   Updated: 2024/09/04 20:09:52 by gruta            ###   ########.fr       */
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
