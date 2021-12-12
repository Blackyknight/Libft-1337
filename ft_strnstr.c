/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:16:11 by aidouiss          #+#    #+#             */
/*   Updated: 2021/11/12 18:55:35 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*s1;
	char	*s2;
	size_t	a;
	size_t	b;

	s1 = (char *) haystack;
	s2 = (char *) needle;
	a = 0;
	b = 0;
	if (s2[0] == '\0')
		return (s1);
	while (s1[a] && a < len)
	{
		while ((s1[a] == s2[b] || s2[b] == '\0') && a < len)
		{
			a++;
			b++;
			if (s2[b] == '\0')
				return (&s1[a - b]);
		}
		a++;
	}
	return (0);
}
