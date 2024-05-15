/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daduarte <daduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:29:19 by daduarte          #+#    #+#             */
/*   Updated: 2024/05/10 12:27:35 by daduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		checker;
	int		little_len;
	size_t	i;

	i = 0;
	checker = 0;
	little_len = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (little[little_len])
		little_len ++;
	while (i < len && big[i] && len > 0)
	{
		while ((little[checker] && big[i + checker]) \
		&& little[checker] == big[i + checker] && i + checker < len)
		{
			checker ++;
		}
		if (checker == little_len)
			return ((char *)&big[i]);
		checker = 0;
		i ++;
	}
	return (NULL);
}
