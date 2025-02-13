/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 21:38:57 by gruta             #+#    #+#             */
/*   Updated: 2024/08/26 20:42:11 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap_the_bubble(int *tab, int size, int *sorted, int i);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	sorted;

	i = 0;
	sorted = 0;
	while (i < size - 1)
	{
		swap_the_bubble(tab, size, &sorted, i);
		if (sorted == 1)
			break ;
		i++;
	}
}

void	swap_the_bubble(int *tab, int size, int *sorted, int i)
{
	int	j;
	int	temp;

	*sorted = 1;
	j = 0;
	while (j < size - 1 - i)
	{
		if (tab[j] > tab[j + 1])
		{
			temp = tab[j];
			tab[j] = tab [j + 1];
			tab[j + 1] = temp;
			*sorted = 0;
		}
		j++;
	}
}
