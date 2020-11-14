#include <stdio.h>

int ft_atoi(const char *nptr);

int main(void)
{
	//TEST1
	printf("%d\n", ft_atoi(" \t\v\n\f\r123"));
	//TEST2
	printf("%d\n", ft_atoi(" 42"));
	//TEST3
	printf("%d\n", ft_atoi("a12"));
	//TEST4
	printf("%d\n", ft_atoi("50a12"));
	//TEST5
	printf("%d\n", ft_atoi("-42"));
	//TEST6
	printf("%d\n", ft_atoi("-+1"));
	//TEST7
	printf("%d\n", ft_atoi("bcdef"));
	//TEST8
	printf("%d\n", ft_atoi("-2147483648"));
	//TEST9
	printf("%d\n", ft_atoi("-123456"));
	//TEST10
	printf("%d\n", ft_atoi(" --+42a51"));
	return (0);
}
