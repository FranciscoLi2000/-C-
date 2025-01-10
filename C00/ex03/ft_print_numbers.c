#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
    char c;

    c = 48;
    while (c <= 57)
    {
        ft_putchar(c);
        c++;
    }
}

int main(void)
{
    char    c;

    ft_print_numbers();
    ft_putchar('\n');
    return (0);
}