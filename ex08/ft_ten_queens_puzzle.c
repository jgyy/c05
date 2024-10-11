/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jegoh <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 15:47:27 by jegoh             #+#    #+#             */
/*   Updated: 2023/08/13 14:42:02 by jegoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_board(int board[10])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	is_safe(int board[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row || board[i] - i == row - col
			|| board[i] + i == row + col)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int board[10], int col)
{
	int	count;
	int	i;

	if (col == 10)
	{
		print_board(board);
		return (1);
	}
	count = 0;
	i = 0;
	while (i < 10)
	{
		if (is_safe(board, i, col))
		{
			board[col] = i;
			count += solve(board, col + 1);
		}
		i++;
	}
	return (count);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];

	return (solve(board, 0));
}
