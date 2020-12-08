/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserapon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 19:43:26 by cserapon          #+#    #+#             */
/*   Updated: 2020/12/07 15:04:50 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (count < n)
	{
		if (src[count] == '\0')
		{
			while (count < n)
			{
				dest[count] = '\0';
				count++;
			}
			return (dest);
		}
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
