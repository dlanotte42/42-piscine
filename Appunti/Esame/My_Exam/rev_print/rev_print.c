/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:10:45 by exam              #+#    #+#             */
/*   Updated: 2020/12/04 16:23:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*rev_print(char *str)
{
	int lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		lenght++;
	}
	lenght = lenght - 1;
	while (lenght >= 0)
	{
		ft_putchar(str[lenght]);
		lenght--;
	}
	return (str);
}
