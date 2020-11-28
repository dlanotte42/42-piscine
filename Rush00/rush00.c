/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 16:42:10 by dlanotte          #+#    #+#             */
/*   Updated: 2020/11/28 18:03:55 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_corners(int x, int y, int c_y, int c_x)
{
	if (c_x == 1 && c_y == 1)
		ft_putchar('o');
	else if (c_x == 1 && c_y == y)
		ft_putchar('o');
	else if (c_x == x && c_y == 1)
		ft_putchar('o');
	else if (c_x == x && c_y == y)
		ft_putchar('o');
	else if (c_y == 1 || c_y == y)
		ft_putchar('-');
	else if (c_x == 1 || c_x == x)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	ft_box(int x, int y)
{
	int c_x;
	int c_y;

	c_x = 1;
	c_y = 1;
	while (c_y <= y)
	{
		c_x = 1;
		while (c_x <= x)
		{
			ft_corners(x, y, c_y, c_x);
			c_x++;
		}
		ft_putchar('\n');
		c_y++;
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		ft_box(x, y);
	}
}
