/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 17:15:08 by tvo               #+#    #+#             */
/*   Updated: 2023/04/09 18:13:19 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_power_of_2(int n)
{
	if (n == 0)
		return (0);
	while (n != 1)
	{
		if (n % 2 != 0)
			return (0);
		n /= 2;
	}
	return (1);
}

int main(int ac, char **av)
{
	if (ac == 2)
		printf("%d", is_power_of_2(atoi(av[1])));
}
