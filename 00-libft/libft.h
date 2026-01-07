/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 21:37:11 by adzmusta          #+#    #+#             */
/*   Updated: 2026/01/07 22:05:15 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s);
char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strnstr(const char *s1, const char *s2, size length);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif
