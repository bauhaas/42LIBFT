#include <stdio.h>

int ft_isalnum(int c);

int main(void)
{
	//TEST1
	printf("%d\n", ft_isalnum('a'));
	//TEST2
	printf("%d\n", ft_isalnum('U'));
	//TEST3
	printf("%d\n", ft_isalnum('0'));
	//TEST4
	printf("%d\n", ft_isalnum('*'));
	//TEST5
	printf("%d\n", ft_isalnum('z'));
	//TEST6
	printf("%d\n", ft_isalnum('A'));
	//TEST7
	printf("%d\n", ft_isalnum('a'));
	//TEST8
	printf("%d\n", ft_isalnum('Z'));
	//TEST9
	printf("%d\n", ft_isalnum('.'));
	//TEST10
	printf("%d\n", ft_isalnum('9'));
	return (0);
}
