/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:01:37 by gruta             #+#    #+#             */
/*   Updated: 2024/09/08 22:44:21 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	i;

	dest_length = 0;
	src_length = 0;
	i = 0;
	while (dest[dest_length] != '\0' && dest_length < size)
		dest_length++;
	while (src[src_length] != '\0')
		src_length++;
	if (size <= dest_length)
		return (size + src_length);
	while (src[i] != '\0' && (dest_length + i) < (size - 1))
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	if (dest_length + i < size)
		dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
