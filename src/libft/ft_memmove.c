/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:55:25 by lloko             #+#    #+#             */
/*   Updated: 2022/09/10 16:55:27 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	i;

	if (n > 0 && (src || dest))
	{
		if (dest > src)
		{
			i = (int)n - 1;
			while (i >= 0)
			{
				*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
				i--;
			}
		}
		else
		{
			i = 0;
			while (i < (int)n)
			{
				*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
				i++;
			}
		}
	}
	return (dest);
}
