/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapprepare.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matnusko <matnusko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 19:03:51 by matnusko          #+#    #+#             */
/*   Updated: 2025/07/19 21:49:21 by matnusko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	maketab(char tab[6][6])
{
	int		i;
	int		j;

	j = 1;
	while (j < 5)
	{
		i = 1;
		while (i < 5)
		{
			tab[j][i] = '0';
			i++;
		}
		j++;
	}
}

void	put_input_up(char tab[6][6], char *input)
{
	int	i;
	int	y;

	i = 0;
	y = 0;
	while (y < 6)
	{
		if (y == 0 || y == 5)
		{
			tab[0][y] = '*';
			tab[5][y] = '*';
		}
		else
		{
			tab[0][y] = input[i];
			tab[5][y] = input[i + 8];
			i += 2;
		}
		y++;
	}
}

void	put_input_side(char tab[6][6], char *input)
{
	int	i;
	int	y;

	i = 16;
	y = 0;
	while (y < 6)
	{
		if (y == 0 || y == 5)
		{
			tab[y][0] = '*';
			tab[y][5] = '*';
		}
		else
		{
			tab[y][0] = input[i];
			tab[y][5] = input[i + 8];
			i += 2;
		}
		y++;
	}
}

void	mapprepare(char tab[6][6], char *input)
{
	maketab(tab);
	put_input_up(tab, input);
	put_input_side(tab, input);
}
