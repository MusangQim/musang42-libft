/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adzmusta <adzmusta@student.42iskandarpute  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 21:37:11 by adzmusta          #+#    #+#             */
/*   Updated: 2026/01/07 21:54:24 by adzmusta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strnstr(const char *s1, const char *s2, size len);

#endif
