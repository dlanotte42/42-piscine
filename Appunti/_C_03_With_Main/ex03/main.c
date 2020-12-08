#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main()
{
	unsigned int test = 3;
	char src[20] = "dopo";
	char dest[20] = "prima";
	ft_strncat(dest, src, test);
	printf("%s\n", dest);
	return (0);
}
