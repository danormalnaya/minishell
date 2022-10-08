/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:59:13 by lloko             #+#    #+#             */
/*   Updated: 2022/09/10 16:59:14 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dsize;

	dsize = 0;
	while (dst[dsize] != '\0' && dsize < size)
		dsize++;
	i = dsize;
	while (src[dsize - i] != '\0' && dsize + 1 < size)
	{
		dst[dsize] = src[dsize - i];
		dsize++;
	}
	if (i < size)
		dst[dsize] = '\0';
	return (i + ft_strlen(src));
}
