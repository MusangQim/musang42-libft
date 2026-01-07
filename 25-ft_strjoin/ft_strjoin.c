/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 23:37:53 by adzmusta          #+#    #+#             */
/*   Updated: 2026/01/07 21:49:16 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	str_copy(char *dest, const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[i])
	{
		dest[i] = s2[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		total_len;
	char		*str_new;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_Strlen(s2);
	str_new = (char *)malloc(sizeof(char) * (total_len + 1));
	if (!str_new)
		return (NULL);
	str_copy(str_new, s1, s2);
	return (str_new);
}
