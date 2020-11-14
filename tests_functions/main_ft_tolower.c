#include <stdio.h>

int ft_tolower(int c);

int main(void)
{
	//TEST1
	printf("%c\n", ft_tolower('A'));
	//TEST2
	printf("%c\n", ft_tolower('z'));
	//TEST3
	printf("%c\n", ft_tolower('0'));
	//TEST4
	printf("%c\n", ft_tolower('='));
	//TEST5
	printf("%c\n", ft_tolower('%'));
	//TEST6
	printf("%c\n", ft_tolower('Z'));
	//TEST7
	printf("%c\n", ft_tolower('m'));
	//TEST8
	printf("%c\n", ft_tolower('B'));
	//TEST9
	printf("%c\n", ft_tolower(' '));
	//TEST10
	printf("%c\n", ft_tolower(')'));
	return (0);
}
