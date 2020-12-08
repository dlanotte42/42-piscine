/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:08:25 by exam              #+#    #+#             */
/*   Updated: 2020/12/04 19:24:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int 	lenght;
	char 	sx_word;
	int 	dx_word;
	int 	counter;
	int		count_space;

	if(argc != 2)
    {
        ft_putchar('\n');
        return (0);
    }
	count_space = 0;
	lenght = 0;
	dx_word = 0;
	while (argv[1][lenght] != '\0')
    {
        lenght++;
    }
	lenght = lenght - 1;
	counter = 0;
	while(counter <= lenght)
	{
		if(argv[1][counter] == ' ' || argv[1][counter] == '	')
		{
			count_space++;
		}
		counter++;
	}
	if(count_space == lenght + 1)
	{
		ft_putchar('\n');
		return (0);
	}
	if(count_space == 0)
	{
		counter = 0;
		while(counter <= lenght)
		{
			ft_putchar(argv[1][counter]);
			counter++;
		}
		ft_putchar('\n');
		return (0);
	}
	while(lenght >= 0)
	{
		sx_word = argv[1][lenght - 1];
		if(argv[1][lenght] >= 33 && argv[1][lenght] <= 126)
		{
			if(dx_word == 0)
				dx_word = lenght;
			if(sx_word == ' ' || sx_word == '	' || sx_word == '\0') 
			{
				while(lenght <= dx_word)
				{
					ft_putchar(argv[1][lenght]);
					lenght++;
				}
				ft_putchar('\n');
				return (0);
			}	
		}
		lenght--;
	}
	ft_putchar('\n');
	return (0);
}
