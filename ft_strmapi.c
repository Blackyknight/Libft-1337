/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 14:41:02 by aidouiss          #+#    #+#             */
/*   Updated: 2021/11/29 13:47:09 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*a;
	unsigned int	b;

	if (!s || !f)
		return (NULL);
	a = ft_strdup(s);
	b = 0;
	if (!a)
		return (NULL);
	while (a[b])
	{
		a[b] = f(b, a[b]);
		b++;
	}
	return (a);
}
