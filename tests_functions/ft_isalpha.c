#include <stdio.h>

int ft_isalpha(int c);

int main(void)
{
	//TEST1
	printf("%d\n", ft_isalpha('a'));
	//TEST2
	printf("%d\n", ft_isalpha('U'));
	//TEST3
	printf("%d\n", ft_isalpha('0'));
	//TEST4
	printf("%d\n", ft_isalpha('*'));
	//TEST5
	printf("%d\n", ft_isalpha('z'));
	//TEST6
	printf("%d\n", ft_isalpha('A'));
	//TEST7
	printf("%d\n", ft_isalpha('a'));
	//TEST8
	printf("%d\n", ft_isalpha('Z'));
	//TEST9
	printf("%d\n", ft_isalpha('.'));
	//TEST10
	printf("%d\n", ft_isalpha(' '));
	return (0);
}
