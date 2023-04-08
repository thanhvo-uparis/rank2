/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:23:00 by tvo               #+#    #+#             */
/*   Updated: 2023/04/08 21:25:10 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	i = 0;
		int	j = 0;
		int	wd = 0;

		while (av[2][i])
		{
			if (av[2][i] == av[1][j])
			{
				i++;
				j++;
				wd++;
			}
			else
				i++;
		}
		j = 0;
		while (av[1][j])
			j++;
		if (j == wd)
		{
			j = 0;
			while (av[1][j])
			{
				ft_putchar(av[1][j]);
				j++;
			}
		}
	}
	ft_putchar('\n');
}
