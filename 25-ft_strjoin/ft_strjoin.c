/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 23:37:53 by adzmusta          #+#    #+#             */
/*   Updated: 2025/12/28 23:51:15 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t		total_len;
	char		*str_new;
	
	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_Strlen(s2);
	str_new = (char *)malloc(sizeof(char) * (total_len + 1));
