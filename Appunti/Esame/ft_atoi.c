/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 13:23:43 by exam              #+#    #+#             */
/*   Updated: 2020/12/08 15:53:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(const char *str,int *str2, int switc)
{
	int len;

	len = 0;
	if(switc == 1)
	{
		while(*str)
		{
			len++;
			str++;
		}
	}
	else if (switc == 2)
	{
		while (*str2)
		{
			len++;
			str2++;
		}
	}
	len = len - 1;
	return (len);
}

int		ft_is_valid(const char *str, int len)
{
	int max;

	max = 0;
	while(*str)
	{
		if((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))	
			max++;
		str++;
	}
	if (max == len+1)
	{
		return (0);
	}
	return (1);
}

int		ft_atoi(const char *str)
{
	int		convert[50];
	int 	counter;
	int 	create_number[50];
	int		len;
	int		convert_counter;
	int		swap_len;
	int		negative;
	int		number;

	negative = 0;
	if(*str == '-')
		negative = 1;	
	counter = 0;
	number = 0;
	len = ft_strlen(str, convert, 1);
	swap_len = len;
	if(len > 18)
		return -1;
	if (!ft_is_valid(str, len))
		return (0);
	while(str[len])
	{
		if ((str[len] != '-') && (str[len] >= 48 && str[len] <= 57))
			convert[counter] = str[len] - 48;
		else
			break;
		counter++;
		len--;
	}
	//swap_len = ft_strlen(str, convert, 2);
	counter = 0;
	convert_counter = 0;
	while(counter <= swap_len)
	{
		while(convert_counter < counter)
		{
			create_number[counter] = convert[counter] * 10;
			convert[counter] = create_number[counter];
			convert_counter++;
		}
		if (counter == 0)
		{
			create_number[counter] = convert[counter];
			convert[counter] = create_number[counter];
		}	
		convert_counter = 0;
		counter++;
	}
	counter = 0;
	while(counter <= swap_len)
	{
		number = number + create_number[counter];
		counter++;
	}
	if (negative == 1)
		number = 0 - number;
	return (number);
}

int		main(int argc, char **argv)
{
	printf("AIOT: %d\n", ft_atoi(argv[1]));
	printf("ATOI: %d\n", atoi(argv[1]));
	return 0;
}