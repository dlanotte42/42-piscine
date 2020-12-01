#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int a;
	int b;;

	a = 8;
	b = 3;
	ft_putchar(48 + a);
	ft_ultimate_div_mod(&a, &b);
	ft_putchar(48 + a);
	return 0;
}
