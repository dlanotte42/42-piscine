/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:35:54 by dlanotte          #+#    #+#             */
/*   Updated: 2020/12/08 18:52:48 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != '\0')
		counter++;
	return (counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;

	counter = 0;
	while (size > 1)
	{
		if (counter == size - 1 || src[counter] == '\0')
			break ;
		dest[counter] = src[counter];
		counter++;
	}
	if (size > 0)
	{
		dest[counter] = '\0';
	}
	return (ft_strlen(src));
}
