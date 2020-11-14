#include <stdio.h>
#include <unistd.h>

int ft_putchar_fd(char c, int fd);

int main(void)
{
	//TEST1
	ft_putchar_fd('a', 1);
	write(1, "\n", 1);
	//TEST2
	ft_putchar_fd(' ', 1);
	write(1, "\n", 1);
	//TEST3
	ft_putchar_fd('4', 3);
	write(1, "\n", 1);
	//TEST4
	ft_putchar_fd('$', 1);
	write(1, "\n", 1);
	//TEST5
	ft_putchar_fd('a', 4);
	write(1, "\n", 1);
	//TEST6
	ft_putchar_fd('/', 1);
	write(1, "\n", 1);
	//TEST7
	ft_putchar_fd('"', 5);
	write(1, "\n", 1);
	//TEST8
	ft_putchar_fd('^', 1);
	write(1, "\n", 1);
	//TEST9
	ft_putchar_fd('b', 3);
	write(1, "\n", 1);
	//TEST10
	ft_putchar_fd('A', 1);
	write(1, "\n", 1);
	return (0);
}
