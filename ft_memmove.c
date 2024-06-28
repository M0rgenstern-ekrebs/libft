/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekrebs <ekrebs@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:58:51 by ekrebs            #+#    #+#             */
/*   Updated: 2023/11/29 11:06:23 by ekrebs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*bytes_dest;
	const unsigned char	*bytes_src;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	bytes_dest = dest;
	bytes_src = src;
	i = 0;
	if (bytes_src >= bytes_dest)
	{
		while (i < n)
		{
			bytes_dest[i] = bytes_src[i];
			i++;
		}
	}
	else
	{
		while (i++ < n)
		{
			bytes_dest[n - i] = bytes_src[n - i];
		}
	}
	return (dest);
}
