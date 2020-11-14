#include <stdio.h>

int ft_toupper(int c);

int main(void)
{
	//TEST1
	printf("%c\n", ft_toupper('a'));
	//TEST2
	printf("%c\n", ft_toupper('z'));
	//TEST3
	printf("%c\n", ft_toupper('0'));
	//TEST4
	printf("%c\n", ft_toupper('='));
	//TEST5
	printf("%c\n", ft_toupper('%'));
	//TEST6
	printf("%c\n", ft_toupper('n'));
	//TEST7
	printf("%c\n", ft_toupper('m'));
	//TEST8
	printf("%c\n", ft_toupper('B'));
	//TEST9
	printf("%c\n", ft_toupper(' '));
	//TEST10
	printf("%c\n", ft_toupper(')'));
	return (0);
}
