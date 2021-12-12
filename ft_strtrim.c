/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 15:25:56 by aidouiss          #+#    #+#             */
/*   Updated: 2021/11/29 13:56:50 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	int	a;
	int	b;
	int	c;

	if (!s1)
		return (NULL);
	a = 0;
	b = ft_strlen(s1) - 1;
	c = 0;
	while (ft_strchr(set, s1[a]))
		a++;
	while (ft_strchr(set, s1[b]))
	{
		b--;
		c++;
	}
	return (ft_substr(s1, a, (ft_strlen(s1) - a - c)));
}
