#include <stdio.h>
#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main()
{
	printf("%d", ft_strncmp("ciao scema", "ciao amore", 8));
	return (0);
}
