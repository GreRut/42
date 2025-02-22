/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruta <gruta@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:55:00 by gruta             #+#    #+#             */
/*   Updated: 2024/09/05 19:25:20 by gruta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_safe(int *board, int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row || col - i == row - board[i]
			|| col - i == board[i] - row)
			return (0);
		i++;
	}
	return (1);
}

void	output(int *board, int *count )
{
	int		i;
	char	digit;

	i = 0;
	while (i < 10)
	{
		digit = board[i] + '0';
		write(1, &digit, 1);
		i++;
	}
	write(1, "\n", 1);
	(*count)++;
}

void	solve(int *board, int col, int *count)
{
	int		row;

	if (col == 10)
	{
		output(board, count);
		return ;
	}
	row = 0;
	while (row < 10)
	{
		if (is_safe(board, row, col))
		{
			board[col] = row;
			solve(board, col + 1, count);
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	count;

	count = 0;
	solve(board, 0, &count);
	return (count);
}
