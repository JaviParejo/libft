/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <jparejo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:47:20 by jparejo-          #+#    #+#             */
/*   Updated: 2021/10/08 17:08:37 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	**ft_split(char const *s, char c)
{
	int		i;
	int		l;
	int		w;
	char	**des;

	i = 0;
	l = 0;
	w = 0;
	while (i < strlen(s) && s[i] != '\0')
	{
		while (s[i] != c)
		{
			l++;
			i++;
		}
		des[w] = (char **)malloc(sizeof(*des) * (l + 1));
		while (des[w] != '\0')
			des[w][j] = '\0';
		w++;
		l = 0;
		i++;
	}
	printf ("%d\n", w);
	return (des);
}

int	main(void)
{
	char str[23] = "Esto es una gran mierda";
	char d = 32;

	printf ("%s", ft_split(str, d));
}
