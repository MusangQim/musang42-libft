/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 21:51:14 by adzmusta          #+#    #+#             */
/*   Updated: 2025/12/29 22:52:45 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
	}
	return (0);
}

static char	*str_new(size_t len)
{
	char	*str;

	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	return (str);
}

static char	*str_empty(void)
{
	char	*str;

	str = malloc(1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

static void	*start_end(char const *s1, char const *set, size_t *start, size_t *end)
{
	*start = 0;
	while (s1[start] && check_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	if (end > 0)
		end--;
	while ((end >= start) && check_set(s1[end], set))
		end--;
	if (start > end)
		return(str_empty);

}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		i;
	char		*result;

	if (!s1 || !set)
		return (NULL);
	start_end(s1, set, &start, &end);
	result = str_new(end - start + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (start <= end)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}
