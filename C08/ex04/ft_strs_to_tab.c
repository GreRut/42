/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 20:20:41 by gruta             #+#    #+#             */
/*   Updated: 2024/09/12 15:51:06 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*str_dup(char *str)
{
	char	*dup;
	int		len;
	int		j;

	len = ft_strlen(str);
	dup = malloc((len + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		dup[j] = str[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}

struct s_stock_str	*create_arr(int ac)
{
	struct s_stock_str	*arr;

	arr = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (arr == NULL)
		return (NULL);
	return (arr);
}

int	populate_array(int ac, char **av, struct s_stock_str *arr)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = str_dup(av[i]);
		if (arr[i].copy == NULL)
		{
			while (i > 0)
			{
				i--;
				free(arr[i].copy);
			}
			free(arr);
			return (0);
		}
		i++;
	}
	arr[ac].size = 0;
	arr[ac].str = NULL;
	arr[ac].copy = NULL;
	return (1);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*arr;

	if (ac < 0)
		return (NULL);
	arr = create_arr(ac);
	if (arr == NULL)
		return (NULL);
	if (!(populate_array(ac, av, arr)))
		return (NULL);
	return (arr);
}
