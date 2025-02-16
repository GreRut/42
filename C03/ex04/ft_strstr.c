/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 21:31:39 by gruta             #+#    #+#             */
/*   Updated: 2024/08/29 19:52:20 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		mismatch;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			mismatch = 0;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					mismatch = 1;
				i++;
			}
			if (mismatch == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
