/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:01:06 by aidouiss          #+#    #+#             */
/*   Updated: 2021/11/30 14:34:09 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	int		a;
	int		b;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	a = 0;
	b = 0;
	s = (char *)(malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)));
	if (!s)
		return (0);
	while (s1[a])
	{
		s[a] = s1[a];
		a++;
	}
	while (s2[b])
	{
		s[a] = s2[b];
		a++;
		b++;
	}
	s[a] = '\0';
	return (s);
}
