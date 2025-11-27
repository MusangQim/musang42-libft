/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:07:24 by adzmusta          #+#    #+#             */
/*   Updated: 2025/11/25 02:14:49 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(long cache)
{
	int count;

	count = 0;
	if (cache < 0)
		cache = -cache;
	while (cache != 0)
	{
		cache = cache / 10;
		count++;
	}
	return (count);
}

static int	

char	*ft_itoa(int n)
{

	digit_count(n);
