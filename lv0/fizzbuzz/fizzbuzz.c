/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 20:44:38 by tvo               #+#    #+#             */
/*   Updated: 2023/04/05 20:27:17 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	write_number(int	nb)
{
	char	str[] = "0123456789";

	if (nb > 9)
	{
		write_number(nb / 10);
	}
	write(1, &str[nb % 10], 1);
}



int	main()
{
	int	nb = 1;

	while (nb <= 100)
	{
		if ((nb % 3) == 0)
			write(1, "fizz", 4);
		else if ((nb % 5) == 0)
			write(1, "fuzz", 4);
		else if ((nb % 3) == 0 && (nb % 5) == 0)
			write(1, "fizzbuzz", 8);
		else
			write_number(nb);
		write(1, "\n", 1);
		nb++;
	}
	return (0);
}
