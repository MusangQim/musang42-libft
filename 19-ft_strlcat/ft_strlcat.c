/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 23:46:29 by adzmusta          #+#    #+#             */
/*   Updated: 2025/12/21 23:52:58 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;

	dst_len = 0;
	while (dest[dst_len] && dst_len < destsize)
		dst_len++;
	src_len = 0;
	while (src[src_len])
		src_len++;
	if (dst_len == destsize)
		return (destsize + src_len);
	i = 0;

