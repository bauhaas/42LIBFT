#include <stdio.h>
#include <unistd.h>

int ft_putnbr_fd(int n, int fd);

int main(void)
{
	//TEST1
	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
	//TEST2
	ft_putnbr_fd(-21, 1);
	write(1, "\n", 1);
	//TEST3
	ft_putnbr_fd(420, 4);
	write(1, "\n", 1);
	//TEST4
	ft_putnbr_fd(-1234, 1);
	write(1, "\n", 1);
	//TEST5
	ft_putnbr_fd(69, 4);
	write(1, "\n", 1);
	//TEST6
	ft_putnbr_fd(2147483647, 1);
	write(1, "\n", 1);
	//TEST7
	ft_putnbr_fd(-314, 5);
	write(1, "\n", 1);
	//TEST8
	ft_putnbr_fd(-2147483648, 1);
	write(1, "\n", 1);
	//TEST9
	ft_putnbr_fd(42, 3);
	write(1, "\n", 1);
	//TEST10
	ft_putnbr_fd(0, 5);
	write(1, "\n", 1);
	return (0);
}
