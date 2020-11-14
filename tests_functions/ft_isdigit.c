#include <stdio.h>

int ft_isdigit(int c);

int main(void)
{
	//TEST1
	printf("%d\n", ft_isdigit('9'));
	//TEST2
	printf("%d\n", ft_isdigit('8'));
	//TEST3
	printf("%d\n", ft_isdigit('a'));
	//TEST4
	printf("%d\n", ft_isdigit('%'));
	//TEST5
	printf("%d\n", ft_isdigit(' '));
	//TEST6
	printf("%d\n", ft_isdigit('/'));
	//TEST7
	printf("%d\n", ft_isdigit('$'));
	//TEST8
	printf("%d\n", ft_isdigit('4'));
	//TEST9
	printf("%d\n", ft_isdigit('0'));
	//TEST10
	printf("%d\n", ft_isdigit('2'));
	return (0);
}
