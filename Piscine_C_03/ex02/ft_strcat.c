/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:31:56 by dlanotte          #+#    #+#             */
/*   Updated: 2020/12/09 13:32:14 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char *dest_p;

	dest_p = dest;
	while (*dest_p != '\0')
		dest_p++;
	while (*src != '\0')
	{
		*dest_p = *src;
		dest_p++;
		src++;
	}
	*dest_p = '\0';
	return (dest);
}
