#include <stdio.h>
#include <unistd.h>

int ft_putstr_fd(char *s, int fd);

int main(void)
{
	//TEST1
	ft_putstr_fd("First\n", 1);
	//TEST2
	ft_putstr_fd("\n", 1);
	//TEST3
	ft_putstr_fd("the string is not end\n\0\ned\n", 5);
	write(1, "\n", 1);
	//TEST4
	ft_putstr_fd("42test\n", 1);
	//TEST5
	ft_putstr_fd("it wont spawn\n", 4);
	write(1, "\n", 1);
	//TEST6
	ft_putstr_fd("yes\n", 1);
	//TEST7
	ft_putstr_fd("no\n", 5);
	write(1, "\n", 1);
	//TEST8
	ft_putstr_fd("again ?\n", 1);
	//TEST9
	ft_putstr_fd("maybe not\n", 3);
	write(1, "\n", 1);
	//TEST10
	ft_putstr_fd("Last\n", 1);
	return (0);
}
