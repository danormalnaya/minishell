/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:00:02 by lloko             #+#    #+#             */
/*   Updated: 2022/09/10 17:00:04 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *dst, const char *src, size_t n)
{
	size_t	len_src;

	if (*src == '\0')
		return ((char *)dst);
	len_src = ft_strlen(src);
	while (*dst && n >= len_src)
	{
		if (*dst == *src && ft_memcmp(dst, src, len_src) == 0)
			return ((char *)dst);
		dst++;
		n--;
	}
	return (NULL);
}
