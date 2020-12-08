
#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int		counter;

	counter = 0;
	while (s1[counter] != '\0' && s1[counter] == s2[counter])
	{
		counter++;
	}
	return s1[counter] - s2[counter];
}

int		main(int argc, char **argv)
{
	printf("MY VERSI: %d\n", ft_strcmp(argv[1],argv[2]));
	printf("ORIGINAL: %d\n", strcmp(argv[1], argv[2]));
	return 0;
}
