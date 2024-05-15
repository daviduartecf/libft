/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daduarte <daduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 09:24:18 by daduarte          #+#    #+#             */
/*   Updated: 2024/05/10 12:27:12 by daduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s[i])
		i ++;
	dup = (char *)malloc((i + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (s[j])
	{
		dup[j] = s[j];
		j ++;
	}
	dup[j] = '\0';
	return (dup);
}
