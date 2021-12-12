/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:00:37 by aidouiss          #+#    #+#             */
/*   Updated: 2021/11/27 14:06:30 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	int		a;
	int		b;
	char	*c;

	a = 0;
	b = ft_strlen(s1);
	c = (char *) malloc(sizeof(char) * b + 1);
	if (c == '\0')
		return (0);
	while (s1[a] != '\0')
	{
		c[a] = s1[a];
		a++;
	}
	c[a] = '\0';
	return (c);
}
