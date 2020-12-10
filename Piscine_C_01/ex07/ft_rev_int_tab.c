/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:45:14 by dlanotte          #+#    #+#             */
/*   Updated: 2020/12/02 18:02:44 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int swap;
	int first;
	int last;

	first = 0;
	while (first < size)
	{
		last = size - 1;
		swap = *(tab + first);
		*(tab + first) = *(tab + last);
		*(tab + last) = swap;
		first++;
		size--;
	}
}
