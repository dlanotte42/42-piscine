/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etomasel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:52:47 by etomasel          #+#    #+#             */
/*   Updated: 2020/12/01 17:48:54 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev_int_tab(int *tab, int size)
{
	int swap;
	int val;
	int last;

	val = 0;
	while (val < size)
	{
		last = size - 1;
		swap = *(tab + val);
		*(tab + val) = *(tab + last);
		*(tab + last) = swap;
		val++;
		size--;
	}
}
