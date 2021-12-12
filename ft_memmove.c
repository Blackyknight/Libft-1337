/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:07:43 by aidouiss          #+#    #+#             */
/*   Updated: 2021/11/29 13:32:37 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;
	int				c;
	int				d;

	if (!dst && !src)
		return (0);
	a = (unsigned char *) dst;
	b = (unsigned char *) src;
	c = len;
	d = 0;
	if (a > b)
	{
		while (d < c)
		{
			a[c - 1] = b[c - 1];
			c--;
		}
	}
	while (d < c)
	{
		a[d] = b[d];
		d++;
	}
	return (dst);
}
