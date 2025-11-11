/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:44:55 by adzmusta          #+#    #+#             */
/*   Updated: 2025/11/11 21:47:48 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void memory, size_t bytes)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)memory;
	i = 0;
	while (i < bytes)
	{
		ptr[i] = 0;
		i++;
	}
	return (memory);
}
