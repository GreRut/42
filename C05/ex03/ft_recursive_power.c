/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 19:16:28 by gruta             #+#    #+#             */
/*   Updated: 2024/08/27 19:17:31 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)

{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
	{
		result = 1;
	}
	if (power > 0)
	{
		result = nb * ft_recursive_power(nb, power - 1);
	}
	return (result);
}
