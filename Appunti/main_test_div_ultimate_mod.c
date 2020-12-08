void    ft_putchar(char c)
 27 {
 28     write(1, &c, 1);
 29 }
 30
 31 int     main(void)
 32 {
 33     int a;
 34     int b;
 35
 36     a = 8;
 37     b = 2;
 38
 39     ft_ultimate_div_mod(&a, &b);
 40     ft_putchar(48 + a);
 41     ft_putchar('\n');
 42     ft_putchar(48 + b);
 43     return (0);
 44 }
