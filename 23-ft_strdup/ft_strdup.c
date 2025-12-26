/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/26 22:14:30 by adzmusta          #+#    #+#             */
/*   Updated: 2025/12/26 22:25:24 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t		length;
	size_t		i;
	char		*duplicate;

	length = ft_strlen(s);
	duplicate = (char *)malloc(length + 1);
	if (!duplicate)
		return (NULL);
	i = 0;
	while (i < length)
	{
		duplicate[i] = s[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);
}
