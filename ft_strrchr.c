/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:09:05 by aidouiss          #+#    #+#             */
/*   Updated: 2021/11/25 12:33:53 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*b;

	a = ft_strlen(s);
	b = (char *) s;
	while (a >= 0)
	{
		if (b[a] == (char)c)
			return (&b[a]);
		a--;
	}
	return (0);
}
