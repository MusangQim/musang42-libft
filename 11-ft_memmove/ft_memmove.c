/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:08:48 by adzmusta          #+#    #+#             */
/*   Updated: 2025/11/16 15:41:01 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t bytes)
{
	const unsigned char	*src;
	unsigned char		*dst;
	size_t				i;

	src = (const unsigned char *)source;
	dst = (unsigned char *)destination;
	if (!src && !dst)
		return (NULL);
	if (dst > src)
	{
		while (bytes--)
			dst[bytes] = src[bytes];
	}
	else
	{
		i = 0;
		while (i < bytes)
		{
			dst[i] = src[i];
			i++;
		}
	}
	return (destination);
}
