void    ft_putchar(char c)
 27 {
 28     write(1, &c, 1);
 29 }
 30
 31 int     main(void)
 32 {
 33     int a;
 34     int b;
 35     int div;
 36     int mod;
 37
 38     a = 8;
 39     b = 3;
 40     ft_div_mod(a, b, &div, &mod);
 41     ft_putchar(48 + mod);
 42 }
