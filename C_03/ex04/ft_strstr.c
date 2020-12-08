
#include <stdio.h>
#include <string.h>


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
		{
			//printf("STR %c   ", *str_p);
			//printf("FIND %c\n", *to_find_p);
			check_max++;
		}
		str_p++;
		to_find_p++;;
		counter++;
	}
	//printf("MAX %d\n", check_max);
	//printf("LEN %d\n", len);
	if (check_max == len)
		return 1;
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int len;

	len = ft_strlen(to_find);
	while(*str)
	{
		if(*str == to_find[0])
			if(check_if_exist(str, to_find, len))
				return (str);
		str++;
	}	
	return (NULL);
}

int		main(int argc, char **argv)
{
//	char s1[] = "raga Abdu vende il kebab!";
//	char s2[] = "Abdul";

	printf("MY VERSI: %s\n", ft_strstr(argv[1],argv[2]));
	printf("ORIGINAL: %s\n", strstr(argv[1],argv[2]));
	return 0;
}
