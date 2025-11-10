/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 19:48:18 by adzmusta          #+#    #+#             */
/*   Updated: 2025/11/10 19:49:40 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	lowcase;

	if (c >= 'A' && c <= 'Z')
	{
		lowcase = c + 32;
		return (lowcase);
	}
	else
		return (c);
}
