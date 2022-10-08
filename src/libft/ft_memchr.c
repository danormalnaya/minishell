/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:54:51 by lloko             #+#    #+#             */
/*   Updated: 2022/09/10 16:54:53 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	void			*p;
	unsigned char	ch;

	i = 0;
	p = (void *)s;
	ch = (unsigned char) c;
	while (i < n)
	{
		if (*(unsigned char *)(p + i) == ch)
			return (p + i);
		i++;
	}
	return (0);
}
