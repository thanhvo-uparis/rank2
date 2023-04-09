/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 23:40:10 by tvo               #+#    #+#             */
/*   Updated: 2023/04/09 13:14:38 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_doubles(char *str, char ch)
{
	int	i = 0;

	while (str[i])
	{
		if (str[i] == ch)
			return (0);
		i++;
	}
	return (1);
}

int	check_doubles_pos(char *str, char ch, int pos)
{
	int	i = 0;

	while (i < pos && str[i])
	{
		if (str[i] == ch)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union2(char *str, char *str1)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (check_doubles_pos(str, str[i], i) == 1)
			write(1, &str[i], 1);
		i++;
	}
	i = 0;
	while (str1[i])
	{
		if (check_doubles(str, str1[i]) == 1)
		{
			if (check_doubles_pos(str1, str1[i], i))
				write(1, &str1[i], 1);
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ft_union2(av[1], av[2]);
	write(1, "\n", 1);
}
