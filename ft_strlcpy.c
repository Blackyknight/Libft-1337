/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:18:44 by aidouiss          #+#    #+#             */
/*   Updated: 2021/11/11 03:16:00 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	a;

	a = 0;
	if (dstsize > 0)
	{
		while (src[a] && a < (dstsize - 1))
		{
			dst[a] = src[a];
			a++;
		}
		dst[a] = 0;
	}
	while (src[a])
		a++;
	return (a);
}
