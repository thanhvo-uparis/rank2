/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvo <tvo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 18:20:28 by tvo               #+#    #+#             */
/*   Updated: 2023/04/09 18:33:02 by tvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		max(int* tab, unsigned int len)
{
	int	i = 1;
	int max = tab[0];

	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int main()
{
	int tab[] = {11, 7, 2, 10};
	printf("%d\n", max(tab, 4));
}
