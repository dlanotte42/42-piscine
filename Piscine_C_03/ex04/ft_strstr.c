/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:32:50 by dlanotte          #+#    #+#             */
/*   Updated: 2020/12/09 13:34:19 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int		check_if_exist(char *str, char *to_find, int len)
{
	char	*str_p;
	char	*to_find_p;
	int		counter;
	int		check_max;

	counter = 0;
	check_max = 0;
	str_p = str;
	to_find_p = to_find;
	while (counter < len)
	{
		if (*str_p == *to_find_p)
			check_max++;
		str_p++;
		to_find_p++;
		counter++;
	}
	if (check_max == len)
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int len;

	len = ft_strlen(to_find);
	while (*str)
	{
		if (*str == to_find[0])
			if (check_if_exist(str, to_find, len))
				return (str);
		str++;
	}
	return (0);
}
