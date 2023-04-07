/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 01:05:52 by tvo               #+#    #+#             */
/*   Updated: 2023/04/07 18:42:47 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_repeat_alpha(char ch)
{
	int	i;
	int	index;

	index = 0;
	if (ch >= 'a' && ch <= 'z')
		index = ch + 1 - 'a';
	else if (ch >= 'A' && ch <= 'Z')
		index = ch + 1 - 'A';
	else
		index = 1;
	i = 0;
	while (i < index)
	{
		write(1, &ch, 1);
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int	i;

		i = 0;
		while (av[1][i])
		{
			ft_repeat_alpha(av[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}
