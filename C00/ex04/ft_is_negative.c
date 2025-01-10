#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
		ft_putchar('P');
	else
		ft_putchar('N');
}

int main(int n)
{
	printf("number: ");
	scanf("%i", &n);
	ft_is_negative(n);
	ft_putchar('\n');
	return (0);
}