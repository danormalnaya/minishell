/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:58:01 by lloko             #+#    #+#             */
/*   Updated: 2022/09/10 16:58:03 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				flag;
	unsigned char	ch;

	flag = 1;
	ch = (unsigned char)c;
	while (*s != '\0' && flag)
	{
		if (*s == ch)
			flag = 0;
		s++;
	}
	if (flag && ch != '\0')
		return (0);
	if (ch == '\0')
		return ((char *)s);
	s--;
	return ((char *)s);
}
