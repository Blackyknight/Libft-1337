/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 02:53:40 by aidouiss          #+#    #+#             */
/*   Updated: 2021/11/11 08:38:36 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t	dstsize)
{
	size_t	b;
	size_t	a;

	b = ft_strlen(dst);
	if (dstsize <= b)
		return (dstsize + ft_strlen(src));
	a = 0;
	while (src[a] && b + 1 < dstsize)
	{
		dst[b] = src[a];
		b++;
		a++;
	}
	dst[b] = '\0';
	return (b + ft_strlen(&src[a]));
}
