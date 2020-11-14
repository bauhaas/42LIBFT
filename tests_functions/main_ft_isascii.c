#include <stdio.h>

int ft_isascii(int c);

int main(void)
{
	//TEST1
	printf("%d\n", ft_isascii(0));
	//TEST2
	printf("%d\n", ft_isascii(32));
	//TEST3
	printf("%d\n", ft_isascii(127));
	//TEST4
	printf("%d\n", ft_isascii(126));
	//TEST5
	printf("%d\n", ft_isascii(140));
	//TEST6
	printf("%d\n", ft_isascii(97));
	//TEST7
	printf("%d\n", ft_isascii(128));
	//TEST8
	printf("%d\n", ft_isascii(42));
	//TEST9
	printf("%d\n", ft_isascii(96));
	//TEST10
	printf("%d\n", ft_isascii(200));
	return (0);
}
