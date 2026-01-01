/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 23:42:52 by adzmusta          #+#    #+#             */
/*   Updated: 2026/01/01 22:19:58 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static size_t	count_word(char const *s, char c)
{
	size_t	count;
	size_t	i;

	while (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static size_t	len_word(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] = '\0')
		return (NULL);
	while (s[i] == c || s[i] == '\0')
		i++;
	return (i);
}

static char	*copy_word(char const *start, size_t len)
{
}

static void	free_word(char **arr, size_t used)
{
}

char	**ft_split(char const *s, char c)
{
}
