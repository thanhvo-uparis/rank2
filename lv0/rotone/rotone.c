/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 17:33:20 by tvo               #+#    #+#             */
/*   Updated: 2023/04/08 18:49:45 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void	rotone(char *av)
{
	while (*av)
	{
		if ((*av >= 'a' && *av < 'z') || (*av >= 'A' && *av < 'Z'))
			ft_putchar(*av + 1);
		else if (*av == 'z' || *av == 'Z')
			ft_putchar(*av - 25);
		else
			ft_putchar(*av);
		++av;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	write(1, "\n", 1);
}
