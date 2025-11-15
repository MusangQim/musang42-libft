/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:50:25 by adzmusta          #+#    #+#             */
/*   Updated: 2025/11/16 01:49:42 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t bytes)
{
	const unsigned char	*src;
	unsigned char		*dst;
	size_t				i;

	src = (const unsigned char *)source;
	dst = (unsigned char *)destination;
	if (!dst && !src)
		return (NULL);
	i = 0;
	while (i < bytes)
	{
		dst[i] = src[i];
		i++;
	}
	return (destination);
}
