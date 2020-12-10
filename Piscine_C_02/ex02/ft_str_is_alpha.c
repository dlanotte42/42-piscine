/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 19:01:07 by dlanotte          #+#    #+#             */
/*   Updated: 2020/12/07 16:50:12 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	char	let_count;
	int		max;
	int		counter;

	max = 0;
	let_count = 'a';
	counter = 0;
	while (str[counter] != '\0')
	{
		while (let_count <= 'z')
		{
			if (str[counter] == let_count || str[counter] == let_count - 32)
				max++;
			let_count++;
		}
		let_count = 'a';
		counter++;
	}
	if (max == counter)
		return (1);
	else
		return (0);
}
