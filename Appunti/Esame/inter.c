/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 12:35:12 by exam              #+#    #+#             */
/*   Updated: 2020/12/08 15:54:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_source(char *src, char c)
{
	int counter;
	
	counter = 0;
	while (src[counter])
	{
		if (src[counter] == c)
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

void	ft_inter(char *str, char *check)
{
	int 	counter_check;
	int 	counter;
	char 	control[200];
	int 	control_counter;
	
	counter_check = 0;
	counter = 0;
	control_counter = 0;
	while (str[counter])
	{
		while (check[counter_check])
		{
			if (str[counter] == check[counter_check] && check_source(control, check[counter_check]) == 1)
			{
				control[control_counter] = check[counter_check];
				control_counter++;
			}
			counter_check++;
		}
		counter_check = 0;
		counter++;
	}
	counter_check = 0;
	while(control[counter_check])
	{
		ft_putchar(control[counter_check]);
		counter_check++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if(argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	ft_inter(argv[1], argv[2]);
	return (0);
}
