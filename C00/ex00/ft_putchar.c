#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(char c)
{
    printf("character: ");
    scanf("%c", &c);
    ft_putchar(c);
    ft_putchar('\n');
    return (0);
}