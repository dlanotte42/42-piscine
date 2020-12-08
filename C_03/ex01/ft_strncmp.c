


#include <string.h>
#include <stdio.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		counter;

	counter = 0;
	while(n > 0 && s1[counter] != '\0' && s2[counter] != '\0')
	{
		if(s1[counter] != s2[counter])
		{
			break;
		}
		counter++;
		n--;
	}

	if(n == 0)
		return 0;
	return s1[counter] - s2[counter];
}

int		main(int argc, char **argv)
{
	printf("MY VERSI: %d\n", ft_strncmp(argv[1], argv[2], 4));
	printf("ORIGINAL: %d\n", strncmp(argv[1], argv[2], 4));	
	return (0);
}

