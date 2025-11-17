/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:45:30 by adzmusta          #+#    #+#             */
/*   Updated: 2025/11/17 11:37:49 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memory, int search, size_t bytes)
{
	const unsigned char	*ptr;
	unsigned char		find;
	size_t				i;

	ptr = (const unsigned char *)memory;
	find = (unsigned char)search;
	i = 0;
	while (i < bytes)
	{
		if (ptr[i] == find)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
