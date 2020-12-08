/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 16:25:57 by exam              #+#    #+#             */
/*   Updated: 2020/12/04 17:05:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int counter;
	int write_counter; 

	write_counter = 0;
	counter = 0;
	if(argc != 2)	
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][counter] != '\0')
	{
		 if (argv[1][counter] >= 'A' && argv[1][counter] <= 'Z') 
		 {
			if (argv[1][counter] + 13 <= 90)
				argv[1][counter] = argv[1][counter] + 13;
			else
			{
				argv[1][counter] = argv[1][counter] - 13;
			}
		 }else if(argv[1][counter] >= 'a' && argv[1][counter] <= 'z')
		 {
			if (argv[1][counter] + 13 <= 122)
				argv[1][counter] = argv[1][counter] + 13;
			else
			{
				argv[1][counter] = argv[1][counter] - 13;
			}

		 }
		 counter++;
	}
	while (write_counter < counter)
	{
		ft_putchar(argv[1][write_counter]);
		write_counter++;
	}
	ft_putchar('\n');
	return (0);
}	
