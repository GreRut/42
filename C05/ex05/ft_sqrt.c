/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:42:04 by gruta             #+#    #+#             */
/*   Updated: 2024/09/05 19:33:55 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	recursive_sqrt(int nb, int low, int high)
{
	long long	mid;
	long long	square;

	if (low > high)
		return (0);
	mid = (low + high) / 2;
	square = mid * mid;
	if (square == nb)
		return (mid);
	else if (square < nb)
		return (recursive_sqrt(nb, mid + 1, high));
	else
		return (recursive_sqrt(nb, low, mid - 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	return (recursive_sqrt(nb, 0, nb));
}
