/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matnusko <matnusko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:37:23 by matnusko          #+#    #+#             */
/*   Updated: 2025/07/12 15:54:56 by matnusko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(int column, int col)
{
	if (col == 0)
	{
		ft_putchar('A');
	}
	else if (col == column -1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	last_line(int column, int col)
{
	if (col == 0)
	{
		ft_putchar('A');
	}
	else if (col == column -1)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	midle_line(int column, int col)
{
	if (col == 0 || col == column -1)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	make_line(int line, int column, int lin, int col)
{
	while (col < column)
	{
		if (lin == 0)
		{
			first_line(column, col);
		}
		else if (lin == line -1)
		{
			last_line(column, col);
		}
		else
		{
			midle_line(column, col);
		}
		col++;
	}
}

void	rush(int x, int y)
{
	int		lin;
	int		col;

	lin = 0;
	col = 0;
	while (lin < y)
	{
		make_line(y, x, lin, col);
		ft_putchar('\n');
		lin++;
	}
}
