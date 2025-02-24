/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 19:46:41 by gruta             #+#    #+#             */
/*   Updated: 2024/09/11 21:53:08 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_len(char **strs, int size, char *sep)
{
	int	i;
	int	j;
	int	total_len;
	int	sep_len;

	if (sep == NULL)
		sep = "";
	i = 0;
	total_len = 0;
	sep_len = 0;
	while (sep[sep_len] != '\0')
		sep_len++;
	while (i < size)
	{
		j = 0;
		while (strs[i] && strs[i][j] != '\0')
			j++;
		total_len += j;
		i++;
	}
	total_len += sep_len * (size - 1) + 1;
	if (total_len < 0)
		return (-1);
	return (total_len);
}

char	*memory_allocation(int total_len)
{
	char	*new_string;

	if (total_len <= 0)
		return (NULL);
	new_string = malloc(total_len);
	if (new_string == NULL)
		return (NULL);
	return (new_string);
}

void	copy_strings(int size, char **strs, char *sep, char *new_string)
{
	int	i;
	int	j;
	int	k;
	int	t;

	if (sep == NULL)
		sep = "";
	i = 0;
	t = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i] && strs[i][j] != '\0')
			new_string[t++] = strs[i][j++];
		if (i < size - 1)
		{
			k = 0;
			while (sep[k] != '\0')
				new_string[t++] = sep[k++];
		}
		i++;
	}
	new_string[t] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_string;
	int		total_len;

	if (size < 0 || strs == NULL)
		return (NULL);
	total_len = get_len(strs, size, sep);
	if (total_len <= 0)
		return (NULL);
	new_string = memory_allocation(total_len);
	if (new_string == NULL)
		return (NULL);
	copy_strings(size, strs, sep, new_string);
	return (new_string);
}
