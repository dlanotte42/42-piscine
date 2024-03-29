/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 17:38:47 by dlanotte          #+#    #+#             */
/*   Updated: 2020/12/02 18:06:15 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_ditos(void)
{
	write(1, "__________________$$$$$$$\n", 26);
	write(1, "________________$$_______$$\n", 28);
	write(1, "________________$$_______$$\n", 28);
	write(1, "________________$$_______$$\n", 28);
	write(1, "________________$_$$$$$$__$\n", 28);
	write(1, "________________$$_______$$\n", 28);
	write(1, "________________$$_______$$\n", 28);
	write(1, "________________$$_______$$\n", 28);
	write(1, "________________$$_______$$\n", 28);
	write(1, "________________$$_______$$\n", 28);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int c;

	c = size;
	*tab = *tab;
	ft_print_ditos();
	write(1, "________________$$_______$$\n", 28);
	write(1, "________________$$_______$$\n", 28);
	write(1, "______$$$$$$$__$__________$\n", 28);
	write(1, "_____$_______$_$___$$_____$\n", 28);
	write(1, "____$$__$$_____$__________$_$$$$$\n", 35);
	write(1, "____$__$_______$__________$______$$\n", 36);
	write(1, "_$$___$________$__________$$_______$_$$$\n", 41);
	write(1, "_$____$________$_________$________$_____$\n", 42);
	write(1, "_$___$$_______$_________$________$______$\n", 43);
	write(1, "_$____$_______$_________$________$_______$\n", 44);
	write(1, "___$$_____________________________$_______$\n", 45);
	write(1, "___$$_____________________________$_______$\n", 45);
	write(1, "___$_____________$________$______________$$\n", 45);
	write(1, "____$__$________$$_______$$______$______$$\n", 44);
	write(1, "_____$$__________$__________________$$$$\n", 43);
	write(1, "_______$$$$$$$$$________$$$$$$$$$$$\n", 40);
	write(1, "________________$$$$$$$$\n", 25);
}
