/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daduarte <daduarte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:13:20 by daduarte          #+#    #+#             */
/*   Updated: 2024/05/10 12:27:22 by daduarte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = 0;
	dstlen = 0;
	while (dst[dstlen])
		dstlen++;
	if (dstlen < size)
	{
		while (src[srclen] && (dstlen < size - 1 - srclen))
		{
			dst[dstlen + srclen] = src[srclen];
			srclen++;
		}
		dst[dstlen + srclen] = '\0';
	}
	while (src[srclen])
		srclen++;
	if (dstlen >= size)
		dstlen = size;
	return (dstlen + srclen);
}
