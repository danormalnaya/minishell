/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloko <lloko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 16:54:13 by lloko             #+#    #+#             */
/*   Updated: 2022/09/10 16:54:15 by lloko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*res;

	res = malloc(sizeof(*res));
	if (!res)
		return (0);
	res->content = content;
	res->next = NULL;
	return (res);
}
