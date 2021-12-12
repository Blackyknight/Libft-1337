/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:04:23 by aidouiss          #+#    #+#             */
/*   Updated: 2021/11/20 17:02:35 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		a;
	char	*b;

	a = 0;
	b = (char *)s;
	while (b[a])
	{
		if (b[a] == (char)c)
			return (&b[a]);
		a++;
	}
	if (b[a] == (char)c)
		return (&b[a]);
	return (0);
}
