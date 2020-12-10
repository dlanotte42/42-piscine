/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanotte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 18:06:25 by dlanotte          #+#    #+#             */
/*   Updated: 2020/12/09 13:09:49 by dlanotte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_change_value(char *c, int to_upper)
{
	if (!to_upper)
	{
		if (*c >= 'A' && *c <= 'Z')
		{
			*c = *c + 32;
		}
	}
	else
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = *c - 32;
		}
	}
}

int		ft_is_alpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int		ft_is_numeric(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	ft_strcapitalize_delegate(char *curr, int *in_word, int *skip_word)
{
	int		first_letter;

	first_letter = 0;
	if (!*in_word)
	{
		if (ft_is_numeric(*curr))
			*skip_word = 1;
		else if (ft_is_alpha(*curr) && !*skip_word)
		{
			*in_word = 1;
			first_letter = 1;
		}
	}
	ft_change_value(curr, 0);
	if (*in_word)
		ft_change_value(curr, first_letter);
}

char	*ft_strcapitalize(char *str)
{
	int		index;
	char	*curr;
	int		in_word;
	int		skip_word;

	index = 0;
	in_word = 0;
	skip_word = 0;
	while (1 == 1)
	{
		curr = &str[index];
		if (*curr == '\0')
			break ;
		ft_strcapitalize_delegate(curr, &in_word, &skip_word);
		if (!(ft_is_alpha(*curr) || ft_is_numeric(*curr)))
		{
			in_word = 0;
			skip_word = 0;
		}
		index++;
	}
	return (str);
}
