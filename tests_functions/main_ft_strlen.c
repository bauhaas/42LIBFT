#include <stdio.h>

int ft_strlen(const char *s);

int main(void)
{
	//TEST1
	printf("%d\n", ft_strlen("Bonjour"));
	//TEST2
	printf("%d\n", ft_strlen(""));
	//TEST3
	printf("%d\n", ft_strlen("a"));
	//TEST4
	printf("%d\n", ft_strlen("Trois"));
	//TEST5
	printf("%d\n", ft_strlen("dix!=trois"));
	//TEST6
	printf("%d\n", ft_strlen("huithuit"));
	//TEST7
	printf("%d\n", ft_strlen("01"));
	//TEST8
	printf("%d\n", ft_strlen("tri"));
	//TEST9
	printf("%d\n", ft_strlen("quarante40+2"));
	//TEST10
	printf("%d\n", ft_strlen("!!="));
	return (0);
}
