/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:49:12 by aborboll          #+#    #+#             */
/*   Updated: 2020/01/11 12:58:27 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int z;

	i = ft_strlen(s1);
	z = 0;
	while (s2[z] != '\0')
	{
		s1[z + i] = s2[z];
		z++;
	}
	s1[i + z] = '\0';
	return (s1);
}
