/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 22:21:36 by gruta             #+#    #+#             */
/*   Updated: 2024/08/25 20:08:34 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define INT_MAX 2147483647

void	rush(int columns, int rows);
int		string_to_int(char *str);

int	main(int argc, char *argv[])
{
	int	columns;
	int	rows;

	if (argc != 3)
	{
		write(1, "Please input a pair of positive integers\n", 41);
		return (1);
	}
	columns = string_to_int(argv[1]);
	rows = string_to_int(argv[2]);
	if (columns < 0 || rows < 0)
	{
		return (-1);
	}
	rush(columns, rows);
	return (0);
}

int	string_to_int(char *str)
{
	int	numeric_value;

	numeric_value = 0;
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
		{
			break ;
			return (-1);
		}
		if (numeric_value > (INT_MAX / 10))
		{
			write(1, "Integer overflow\n", 17);
			return (-1);
		}
		if (numeric_value == (INT_MAX / 10) && (*str - '0') > (INT_MAX % 10))
		{
			write(1, "Integer overflow\n", 17);
			return (-1);
		}
		numeric_value = numeric_value * 10 + (*str - '0');
		str++;
	}
	return (numeric_value);
}
// We check if our numeric_value will not exceed INT_MAX
// after multiplying by 10 in line 76
//
// INT_MAX == 			2147483647
// INT_MAX / 10 == 		214748364
// INT_MAX / 10 * 10 == 2147483640
// INT_MAX % 10 ==		7
// When numeric_value is exactly INT_MAX / 10
// Our current *str can be at maximum '7',
// because '8' will again overflow integer
// So we return error code if *str is above '7'
