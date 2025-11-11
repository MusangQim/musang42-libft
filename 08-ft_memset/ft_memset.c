/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 21:38:41 by adzmusta          #+#    #+#             */
/*   Updated: 2025/11/11 21:43:48 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void memory, int value, size_t bytes)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)memory;
	i = 0;
	while (i < bytes)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (memory);
}
