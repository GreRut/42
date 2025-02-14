/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:26:58 by gruta             #+#    #+#             */
/*   Updated: 2024/08/29 15:53:45 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	set_big;

	i = 0;
	set_big = 1;
	while (str[i] != '\0')
	{
		if (set_big == 1 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (set_big == 0 && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		set_big = 0;
		if ((str[i] < '0' || str[i] > '9') && (str[i] < 'A' || str[i] > 'Z') \
		&& (str[i] < 'a' || str[i] > 'z'))
			set_big = 1;
		else
			set_big = 0;
		i++;
	}
	return (str);
}
