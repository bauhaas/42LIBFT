#include <stdio.h>

int ft_isprint(int c);

int main(void)
{
	//TEST1
	printf("%d\n", ft_isprint('a'));
	//TEST2
	printf("%d\n", ft_isprint('\n'));
	//TEST3
	printf("%d\n", ft_isprint('%'));
	//TEST4
	printf("%d\n", ft_isprint('*'));
	//TEST5
	printf("%d\n", ft_isprint('\t'));
	//TEST6
	printf("%d\n", ft_isprint('~'));
	//TEST7
	printf("%d\n", ft_isprint(0));
	//TEST8
	printf("%d\n", ft_isprint('Z'));
	//TEST9
	printf("%d\n", ft_isprint(127));
	//TEST10
	printf("%d\n", ft_isprint(' '));
	return (0);
}
