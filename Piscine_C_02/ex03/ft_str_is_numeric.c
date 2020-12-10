/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 15:38:53 by dlanotte          #+#    #+#             */
/*   Updated: 2020/12/06 15:49:10 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	char	let_count;
	int		max;
	int		counter;

	max = 0;
	let_count = '0';
	counter = 0;
	while (str[counter] != '\0')
	{
		while (let_count <= '9')
		{
			if (str[counter] == let_count)
				max++;
			let_count++;
		}
		let_count = '0';
		counter++;
	}
	if (max == counter)
		return (1);
	else
		return (0);
}
