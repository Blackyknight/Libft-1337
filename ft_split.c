/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 14:54:26 by aidouiss          #+#    #+#             */
/*   Updated: 2021/12/02 09:20:32 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static int	len(const char *str, char c)
{
	int	a;
	int	b;
	int	d;

	a = 0;
	b = 0;
	d = 0;
	while (str[d])
	{
		if (str[d] != c && b == 0)
		{
			b = 1;
			a++;
		}
		else if (str[d] == c)
			b = 0;
		d++;
	}
	return (a);
}

static char	*substr(char **str, const char *s, int a, int b)
{
	char	*c;
	int		d;

	d = 0;
	c = malloc((b - a + 1) * sizeof(char));
	if (!c)
		ft_free(str);
	while (a < b)
		c[d++] = s[a++];
	c[d] = '\0';
	return (c);
}

char	**ft_split(char const *s, char c)
{
	size_t	a;
	int		b;
	int		d;
	char	**str;

	if (!s)
		return (0);
	str = (char **)malloc((len(s, c) + 1) * sizeof(char *));
	if (!str)
		return (0);
	a = -1;
	b = 0;
	d = -1;
	while (++a <= ft_strlen(s))
	{
		if (s[a] != c && d < 0)
			d = a;
		else if ((s[a] == c || a == ft_strlen(s)) && d >= 0)
		{
			str[b++] = substr(str, s, d, a);
			d = -1;
		}
	}
	str[b] = 0;
	return (str);
}
