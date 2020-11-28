/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 14:27:08 by dlanotte          #+#    #+#             */
/*   Updated: 2020/11/27 12:46:53 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb_numb(char a, char b, char c, bool finish)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (!finish)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;
	bool finish;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				if (a == '7' && b == '8' && c == '9')
					finish = true;
				ft_print_comb_numb(a, b, c, finish);
				c++;
			}
			b++;
		}
		a++;
	}
}
