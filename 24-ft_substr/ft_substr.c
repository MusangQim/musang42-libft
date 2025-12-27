/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 22:31:09 by adzmusta          #+#    #+#             */
/*   Updated: 2025/12/27 22:19:18 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*str_empty(void)
{
	char	*string;

	string = malloc(1);
	if (!string)
		return (NULL);
	*string = '\0';
	return (string);
}

static char	*str_new(char const *s, size_t start, size_t len)
{
	char		*string;
	size_t		i;
	
	string = malloc(len + 1);
	

}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		substr_len;
	size_t		i;
	char		*str_new;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (str_empty());
	substr_len = ft_strlen(s) - start;
	if (substr_len > len)
		substr_len = len;
}

