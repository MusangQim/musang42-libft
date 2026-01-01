/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_len_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 22:35:58 by adzmusta          #+#    #+#             */
/*   Updated: 2026/01/01 22:45:03 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	len_word(const char *s, char c)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	size_t		len;
	size_t		i;
	char		*str;
	char		delimiter;

	str = "    hello    world     42     ";
	delimiter = ' ';
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == delimiter)
		{
			i++;
			continue ;
		}
		len = len_word(&str[i], delimiter);
		printf("Word that start from the index %zu, length = %zu\n", i, len);
		i += len;
	}
	return (0);
}
