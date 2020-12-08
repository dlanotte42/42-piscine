/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scilla <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 15:31:27 by scilla            #+#    #+#             */
/*   Updated: 2020/12/03 17:02:26 by scilla           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int p;
	unsigned int str_len;

	str_len = 0;
	i = 0;
	while (dest[i])
	{
		str_len++;
		i++;
	}
	p = 0;
	while (src[str_len - i])
	{
		if (i + p + 1 < size)
		{
			dest[i + p] = src[p];
			p++;
		}
		str_len++;
	}
	if (size > 0)
		dest[i + p] = 0;
	return (str_len);
}
