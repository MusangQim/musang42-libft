/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_count_word.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 22:22:17 by adzmusta          #+#    #+#             */
/*   Updated: 2026/01/01 22:27:41 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	count_word(char const *s, char c)
{
	size_t	count;
	size_t	i;

	while (!s)
		return (0);
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

int	main(void)
{
	size_t			total;
	char			*str;
	char			delimiter;

	str = "   hello    world   42   ";
	delimiter = ' ';
	total = count_word(str, delimiter);
	printf ("Total word: &zu\n", total);
	return (0);
}
