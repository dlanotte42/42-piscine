/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:25:01 by dlanotte          #+#    #+#             */
/*   Updated: 2020/12/09 13:27:57 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		counter;

	counter = 0;
	while (n > 0 && s1[counter] != '\0' && s2[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
		{
			break ;
		}
		counter++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[counter] - s2[counter]);
}
