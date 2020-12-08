24 void    ft_putchar(char c)
 25 {
 26     write(1, &c, 1);
 27 }
 28 int     main(void)
 29 {
 30     int a = 2;
 31     int b = 3;
 32
 33     ft_putchar(48 + a);
 34     ft_putchar('\n');
 35     ft_swap(&a, &b);
 36     ft_putchar(48 + a);
 37 }
