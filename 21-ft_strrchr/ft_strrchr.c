/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 23:55:32 by adzmusta          #+#    #+#             */
/*   Updated: 2025/12/24 23:56:33 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	&ft_strrchr(const char *str, int ch)
{
	int		i;
	char	*last;

	last = NULL;
	i = 0;
	while (str[i])
	{
		if (
