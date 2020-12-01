n = x + 1;/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomasel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:56:23 by etomasel          #+#    #+#             */
/*   Updated: 2020/12/01 17:51:35 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int new;
	int n;
	int x;

	x = 0;
	while (x < size)
	{
		n = x + 1;
		while (n < size)
		{
			if (*(tab + n) < *(tab + x))
			{
				new = *(tab + n);
				*(tab + n) = *(tab + x);
				*(tab + x) = new;
			}
			n++;
		}
		x++;
	}
}
