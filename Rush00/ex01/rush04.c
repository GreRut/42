/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 22:21:54 by gruta             #+#    #+#             */
/*   Updated: 2024/08/25 19:31:31 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	print_first_line(int columns);
void	print_body(int columns);
void	print_last_line(int columns);

void	rush(int columns, int rows)
{
	int	rows_counter;

	if (columns <= 0 || rows <= 0)
	{
		write(1, "Invalid number of rows or columns\n", 35);
	}
	else
	{
		print_first_line(columns);
		ft_putchar('\n');
		rows_counter = 1;
		while (rows_counter < rows -1)
		{
			print_body(columns);
			ft_putchar('\n');
			rows_counter++;
		}
		if (rows > 1)
		{
			print_last_line(columns);
		}
		ft_putchar('\n');
	}
}

void	print_first_line(int columns)
{
	int	column_counter;

	column_counter = 1;
	ft_putchar('A');
	while (column_counter < columns - 1)
	{
		ft_putchar('B');
		column_counter++;
	}
	if (columns > 1)
	{
		ft_putchar('C');
	}
}

void	print_body(int columns)
{
	int	column_counter;

	column_counter = 1;
	ft_putchar('B');
	while (column_counter < columns - 1)
	{
		ft_putchar(' ');
		column_counter++;
	}
	if (columns > 1)
	{
		ft_putchar('B');
	}
}

void	print_last_line(int columns)
{
	int	column_counter;

	column_counter = 1;
	ft_putchar('C');
	while (column_counter < columns - 1)
	{
		ft_putchar('B');
		column_counter++;
	}
	if (columns > 1)
	{
		ft_putchar('A');
	}
}
