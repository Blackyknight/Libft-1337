/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:37:21 by aidouiss          #+#    #+#             */
/*   Updated: 2021/11/12 18:34:55 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t	n)
{
	size_t		c;
	char		*a;
	const char	*b;

	c = 0;
	a = (char *) dst;
	b = (char *) src;
	if (a == b)
		return (0);
	while (c < n)
	{
		a[c] = b[c];
		c++;
	}
	return (dst);
}
