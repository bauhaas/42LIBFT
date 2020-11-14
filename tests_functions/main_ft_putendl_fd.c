#include <stdio.h>
#include <unistd.h>

int ft_putendl_fd(char *s, int fd);

int main(void)
{
	//TEST1
	ft_putendl_fd("First", 1);
	//TEST2
	ft_putendl_fd("\n", 1);
	//TEST3
	ft_putendl_fd("the string is not end\0ed", 6);
	//TEST4
	ft_putendl_fd("42test", 1);
	//TEST5
	ft_putendl_fd("it wont spawn", 4);
	write(1, "\n", 1);
	//TEST6
	ft_putendl_fd("yes", 1);
	//TEST7
	ft_putendl_fd("no", 5);
	write(1, "\n", 1);
	//TEST8
	ft_putendl_fd("again ?", 1);
	//TEST9
	ft_putendl_fd("maybe not", 3);
	write(1, "\n", 1);
	//TEST10
	ft_putendl_fd("Last", 7);
	write(1, "\n", 1);
	return (0);
}
