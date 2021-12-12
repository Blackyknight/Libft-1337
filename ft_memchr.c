/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:03:30 by aidouiss          #+#    #+#             */
/*   Updated: 2021/11/29 13:53:53 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			b;

	a = (unsigned char *) s;
	b = 0;
	while (b < n)
	{
		if (a[b] == (unsigned char)c)
			return (&a[b]);
		b++;
	}
	return (0);
}
