/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:55:40 by aidouiss          #+#    #+#             */
/*   Updated: 2021/11/12 18:54:48 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const	void *s1, const void *s2, size_t n)
{
	size_t			a;
	unsigned char	*i;
	unsigned char	*j;

	a = 0;
	i = (unsigned char *) s1;
	j = (unsigned char *) s2;
	while (0 < n)
	{
		if (i[a] != j[a])
			return (i[a] - j[a]);
		a++;
		n--;
	}
	return (0);
}
