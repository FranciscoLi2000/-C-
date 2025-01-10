#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
    char c;

    c = 122;
    while (c >= 97)
    {
        ft_putchar(c);
        c--;
    }
}

int main(void)
{
    char    c;

    ft_print_reverse_alphabet();
    ft_putchar('\n');
    return (0);
}