/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matnusko <matnusko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:37:23 by matnusko          #+#    #+#             */
/*   Updated: 2025/07/12 10:39:07 by matnusko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_line(column, col)
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

void	last_line(column, col)
{
	if (col == 0)
	{
		ft_putchar('C');
	}
	else if (col == column -1)
	{
		ft_putchar('A');
	}
	else
	{
		ft_putchar('B');
	}
}

void	midle_line(column, col)
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

char	line_def(int line, int column, int lin, int col)
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
}

void	rush4(int column, int line)
{
	int		lin;
	int		col;

	lin = 0;
	while (lin < line)
	{
		col = 0;
		while (col < column)
		{
			line_def(line, column, lin, col);
			col++;
		}
		ft_putchar('\n');
		lin++;
	}
}

