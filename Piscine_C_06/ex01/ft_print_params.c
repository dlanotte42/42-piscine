/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 20:14:48 by dlanotte          #+#    #+#             */
/*   Updated: 2020/12/10 20:15:54 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int counter;

	counter = 0;
	while (str[counter])
	{
		ft_putchar(str[counter]);
		counter++;
	}
}

int		main(int argc, char **argv)
{
	int counter;

	if (argc == 1)
		return (0);
	counter = 1;
	while (counter < argc)
	{
		ft_putstr(argv[counter]);
		counter++;
		ft_putchar('\n');
	}
	return (0);
}
