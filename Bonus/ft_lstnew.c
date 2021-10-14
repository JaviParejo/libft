/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <jparejo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:52:25 by jparejo-          #+#    #+#             */
/*   Updated: 2021/10/14 12:20:32 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{	
	int				i;
	void			*dst;
	struct s_list	*next;

	next = NULL;
	i = 0;
	while (!content)
		i++;
	dst = malloc(sizeof(*content) * (i + 1));
	i = 0;
	while (!content)
	{
		dst[i] = content[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
