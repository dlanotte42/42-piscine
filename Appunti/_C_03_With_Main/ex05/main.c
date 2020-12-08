#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char src[] = " source";
	char dest[20] = "destination";
	unsigned int res;

	res = ft_strlcat(dest, src, 0);
	printf("%d\n%s", res, dest);


	return (0);
}
