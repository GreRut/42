/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:16:07 by gruta             #+#    #+#             */
/*   Updated: 2024/09/04 16:57:05 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_basesize(char *base)
{
	int	j;
	int	base_size;

	base_size = 0;
	while (base[base_size] != '\0')
	{
		if (base[base_size] == '+' || base[base_size] == '-')
			return (0);
		j = base_size + 1;
		while (base[j] != '\0')
		{
			if (base[base_size] == base[j])
				return (0);
			j++;
		}
		base_size++;
	}
	if (base_size <= 1)
		return (0);
	return (base_size);
}

int	ft_calculate(int i, char *str, char *base, int base_size)
{
	int	result;
	int	value;
	int	l;

	result = 0;
	while (str[i] != '\0')
	{
		l = 0;
		value = -1;
		while (base[l] != '\0')
		{
			if (base[l] == str[i])
			{
				value = l;
				break ;
			}
			l++;
		}
		if (value == -1)
			return (result);
		result = result * base_size + value;
		i++;
	}
	return (result);
}

int	char_in_base(char c, char *base)
{
	int	t;

	t = 0;
	while (base[t] != '\0')
	{
		if (c == base[t])
			return (1);
		t++;
	}
	return (0);
}

int	ft_str_not_in_base(char *str, char *base)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
	{
		if (str[s] == '+' || str[s] == '-' || str[s] == ' ' \
		|| (str[s] >= 9 && str[s] <= 13))
		{
			s++;
			continue ;
		}
		if (!char_in_base(str[s], base))
			return (-1);
		s++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)

{
	int	base_size;
	int	i;
	int	minuses;
	int	result;

	base_size = ft_basesize(base);
	if (base_size == 0)
		return (0);
	i = 0;
	minuses = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minuses++;
		i++;
	}
	if (ft_str_not_in_base(str, base) == -1)
		return (0);
	result = ft_calculate(i, str, base, base_size);
	if (minuses % 2 == 1)
		result = -result;
	return (result);
}
