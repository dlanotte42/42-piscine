/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 13:08:30 by dlanotte          #+#    #+#             */
/*   Updated: 2020/11/27 13:10:36 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb_numb(a, b, finish)
{
	//ft_putchar(48 + a / 10);
	//ft_putchar(48 + a % 10);
	//ft_putchar(' ');
	//ft_putchar(48 + b / 10);
	//ft_putchar(48 + b % 10);
	if (finish == 1 )
	{
		ft_putchar(',');
		ft_putchar(' '); 
	}
}

/*void	ft_print_comb2(void)
{
	int  a;
	int  b;
	int finish;
		
	a = 0;
	b = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			if (a == 98 && b == 99)
				finish = 1;
			ft_write_comb_numb(a, b, finish);
			b++;
		}
		a++;
	}
}
