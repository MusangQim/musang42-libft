/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:45:30 by adzmusta          #+#    #+#             */
/*   Updated: 2025/11/16 16:42:09 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *memory, const void *search, size_t bytes)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)memory;
	i = 0;
	while (i < bytes)
	{
		if (ptr[i] == (unsigned char)search)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
