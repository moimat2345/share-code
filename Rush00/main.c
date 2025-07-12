/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matnusko <matnusko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 21:20:22 by matnusko          #+#    #+#             */
/*   Updated: 2025/07/12 17:15:53 by matnusko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

/*int	main(void)
{
	rush(1, 1);
	return (0);
}*/
int	ft_to_int(char const *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	if (argc > 1)
	{
		x = ft_to_int(argv[1]);
		y = ft_to_int(argv[2]);
		rush(x, y);
	}
	else
	{
		rush(5, 3);
	}
	return (0);
}
