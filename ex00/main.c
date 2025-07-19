/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matnusko <matnusko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:04:30 by matnusko          #+#    #+#             */
/*   Updated: 2025/07/19 22:19:46 by matnusko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	mapprepare(char tab[6][6], char *input);
void	inside(char tab[6][6]);

void	ft_puttab(char tab[6][6])
{
	int	i;
	int	j;

	j = 0;
	while (j < 6)
	{
		i = 0;
		while (i < 6)
		{
			write(1, &tab[j][i], 1);
			write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
}

int	check_input(char *input)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		if (!(input[i] >= '1' && input[i] <= '4'))
		{
			return (1);
		}
		i++;
		if (input[i] != ' ' && i != 31)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	char	tab[6][6];

	if ((check_input(argv[1]) == 1 || argc < 2) || ft_strlen(argv[1]) != 31)
		return (1);
	mapprepare(tab, argv[1]);
	inside(tab);
	ft_puttab(tab);
	return (0);
}
