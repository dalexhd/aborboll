/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 09:27:41 by aborboll          #+#    #+#             */
/*   Updated: 2019/09/25 10:44:12 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/generic.h"

void	ft_print(char **map, int size, int y)
{
	int x;

	x = 0;
	while (x < size)
	{
		ft_putstrb(map[x], y);
		ft_putchar('\n');
		x++;
	}
}
