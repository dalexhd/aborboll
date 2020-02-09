/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:42:23 by aborboll          #+#    #+#             */
/*   Updated: 2020/01/22 19:17:22 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*res;

	if (!(res = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (0);
	res = ft_strcat(ft_strcpy(res, s1), s2);
	free(s1);
	free(s2);
	return (res);
}
