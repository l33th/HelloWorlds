#include <unistd.h>
#include <stdio.h>

void ft_putchar()
{
	write(1, "Hello World!\n", 12);
}

int main(void)
{
	ft_putchar();
}
