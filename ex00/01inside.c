/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01inside.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matnusko <matnusko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:09:06 by matnusko          #+#    #+#             */
/*   Updated: 2025/07/19 22:19:13 by matnusko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	top4(int column, int row, char tab[6][6])
{
	if (row == 0)
	{
		tab[1][column] = '1';
		tab[2][column] = '2';
		tab[3][column] = '3';
		tab[4][column] = '4';
	}
	else
	{
		tab[1][column] = '4';
		tab[2][column] = '3';
		tab[3][column] = '2';
		tab[4][column] = '1';
	}
}

void	side4(int column, int row, char tab[6][6])
{
	if (column == 0)
	{
		tab[row][1] = '1';
		tab[row][2] = '2';
		tab[row][3] = '3';
		tab[row][4] = '4';
	}
	else
	{
		tab[row][1] = '4';
		tab[row][2] = '3';
		tab[row][3] = '2';
		tab[row][4] = '1';
	}
}

void	the4(char tab[6][6])
{
	int	y;

	y = 1;
	while (y < 5)
	{
		if (tab[y][0] == '4')
			top4(y, 0, tab);
		if (tab[y][5] == '4')
			top4(y, 5, tab);
		if (tab[0][y] == '4')
			side4(0, y, tab);
		if (tab[5][y] == '4')
			side4(5, y, tab);
		y++;
	}
}

void	the1(char tab[6][6])
{
	int	y;

	y = 1;
	while (y < 5)
	{
		if (tab[y][0] == '1')
		{
			tab[y][1] = '4';
		}
		if (tab[y][5] == '1')
		{
			tab[y][4] = '4';
		}
		if (tab[0][y] == '1')
		{
			tab[1][y] = '4';
		}
		if (tab[5][y] == '1')
		{
			tab[4][y] = '4';
		}
		y++;
	}
}

void	inside(char tab[6][6])
{
	the4(tab);
	the1(tab);
}
