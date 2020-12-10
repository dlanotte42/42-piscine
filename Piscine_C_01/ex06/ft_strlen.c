/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:04:37 by dlanotte          #+#    #+#             */
/*   Updated: 2020/12/02 18:02:09 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int counter_characters;

	counter_characters = 0;
	while (str[counter_characters] != '\0')
	{
		counter_characters++;
	}
	return (counter_characters);
}
