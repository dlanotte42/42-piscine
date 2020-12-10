/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:32:27 by dlanotte          #+#    #+#             */
/*   Updated: 2020/12/09 13:32:39 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int tab)
{
	char *dest_p;

	dest_p = dest;
	while (*dest_p != '\0')
		dest_p++;
	while (*src != '\0' && tab > 0)
	{
		*dest_p = *src;
		dest_p++;
		src++;
		tab--;
	}
	*dest_p = '\0';
	return (dest);
}
