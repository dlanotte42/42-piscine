/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 18:40:06 by dlanotte          #+#    #+#             */
/*   Updated: 2020/12/10 15:49:36 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;
	unsigned int counter_src;

	counter = 0;
	counter_src = 0;
	while (counter < n)
	{
		if (src[counter_src] != '\0')
			dest[counter] = src[counter_src++];
		else
			dest[counter] = '\0';
		counter++;
	}
	return (dest);
}
