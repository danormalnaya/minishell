/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:59:20 by lloko             #+#    #+#             */
/*   Updated: 2022/09/10 16:59:22 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;
	int		j;

	s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (s)
	{
		i = 0;
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
		j = i;
		while (s2[i - j] != '\0')
		{
			s[i] = s2[i - j];
			i++;
		}
		s[i] = '\0';
		return (s);
	}
	return (0);
}
