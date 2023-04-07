/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 20:17:32 by tvo               #+#    #+#             */
/*   Updated: 2023/04/07 20:30:13 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int	size;

		size = ft_strlen(av[1]);
		size--;
		while (size >= 0)
		{
			write(1, &av[1][size], 1);
			size--;
		}
	}
	write(1, "\n", 1);
}
