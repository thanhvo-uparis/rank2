/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 20:23:00 by tvo               #+#    #+#             */
/*   Updated: 2023/04/08 21:55:15 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		int	i = 0;
		int	j = 0;

		while (av[2][i])
		{
			if (av[2][i++] == av[1][j])
				j++;
		}
		if (!av[1][j])
			ft_putstr(av[1]);
	}
	write(1, "\n", 1);
}
