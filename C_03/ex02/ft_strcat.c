
#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char *dest_p;

	dest_p = dest;
	while (*dest_p != '\0')
		dest_p++;
	while(*src != '\0')
	{
		*dest_p = *src;
		dest_p++;
		src++;
	}
	*dest_p = '\0';
	return dest;
}

int		main(int argc, char **argv)
{
	const char test[] = "Ciao Mondo questo test";
	char test1[] = "Ciao Mondo questo test";

	printf("MY VERSI: %s\n", ft_strcat(argv[1], test1));//argv[2]));
	printf("ORIGINAL: %s\n", strcat(argv[1], test));//argv[2]));
	return 0;
}
