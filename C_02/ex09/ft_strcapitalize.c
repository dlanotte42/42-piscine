

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int change;

	change = 0;
	if(*str >= 97 && *str <= 122)
		*str = *str - 32;
	while(*str != '\0')
	{
		if (*str >= 32 && *str <= 47)
			change = 1;
		else if (*str >= 58 && *str <= 64)
			change = 1;
		else if (*str >= 91 && *str <= 96)
			change = 1;
		else if (*str >= 123 && *str <= 126)
			change = 1;
		if (change == 1)
		{
			str++;
			if(*str >= 97 && *str <= 122)
				*str = *str - 32;
			str--;
		}
		str++;
		change = 0;
	}
	return (str);
}

int		 main(void)
{
	char str[] = "";
	ft_strcapitalize(str);	
	printf("%s", str);
	return (0);
}







