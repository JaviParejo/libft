/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <jparejo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:14:54 by jparejo-          #+#    #+#             */
/*   Updated: 2021/10/06 10:18:00 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	const char	*src;
	char		*dest;
	size_t		i;

	if (!(str1 || str2 || n) || (str1 == NULL && str2 == NULL))
		return (0);
	i = 0;
	dest = str1;
	src = str2;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
