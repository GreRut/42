/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 21:28:43 by gruta             #+#    #+#             */
/*   Updated: 2024/09/06 21:03:27 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*string;
	int		j;

	i = 0;
	while (src[i] != '\0')
		i++;
	string = malloc(i + 1);
	j = 0;
	while (src[j] != '\0')
	{
		string[j] = src[j];
		j++;
	}
	string [j] = '\0';
	return (string);
}
