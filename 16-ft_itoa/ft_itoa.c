/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:07:24 by adzmusta          #+#    #+#             */
/*   Updated: 2025/12/15 12:48:42 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_count(long cache)
{
	int	count;

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

static int	total_len(int count, int isnegative)
{
	int	total_len;

	if (isnegative == -1)
		total_len = count + 1;
	else
		total_len = count;
	return (total_len);
}

static char	*build_string(long number, int count, int total_len, int isnegative)
{
	char	*str;

	str = (char *)malloc(total_length + 1);
	if (!str)
		return (NULL);
	str[total_len] = '\0';
	while (count > 0)
	{
		total_len--;
		str[total_len] = (number % 10) + '0';
		number = number / 10;
		count--;
	}
	if (isnegative == -1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		count;
	int		length;
	int		sign;
	long	temp;

	if (n == 0)
		return (ft_strdup("0"));
	sign = 1;
	if (n < 0)
		sign = -1;
	temp = n;
	count = digit_count(temp);
	length = total_len(count, sign);
	if (n < 0)
		temp = (long)n * 1;
	else
		temp = n;
	return (build_string(temp, count, length, sign));
}
