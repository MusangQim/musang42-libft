/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 22:31:09 by adzmusta          #+#    #+#             */
/*   Updated: 2025/12/27 22:29:01 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*str_empty(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	*str = '\0';
	return (str);
}

static char	*str_new(char const *s, size_t start, size_t len)
{
	char		*str;
	size_t		i;

	str = malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	substr_len;
	size_t	real_len;

	if (!s)
		return (NULL);
	substr_len = ft_strlen(s);
	if (start >= ft_strlen(s))
		return (str_empty());
	real_len = substr_len - start;
	if (real_len > len)
		real_len = len;
	return (str_new(s, start, real_len));
}
