#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int n);

int main(void)
{
	int test1 = -2147483648;
	int test2 = 2147483647;
	int test3 = -42;
	int test4 = 0;
	int test5 = 42069;
	int test6 = 123456789;
	int test7 = -314;
	int test8 = 10061996;
	int test9 = 900;
	int test10 = -111;

	char *result1 = ft_itoa(test1);
	char *result2 = ft_itoa(test2);
	char *result3 = ft_itoa(test3);
	char *result4 = ft_itoa(test4);
	char *result5 = ft_itoa(test5);
	char *result6 = ft_itoa(test6);
	char *result7 = ft_itoa(test7);
	char *result8 = ft_itoa(test8);
	char *result9 = ft_itoa(test9);
	char *result10 = ft_itoa(test10);
	//TEST1
	printf("%s\n", result1);
	//TEST2
	printf("%s\n", result2);
	//TEST3
	printf("%s\n", result3);
	//TEST4
	printf("%s\n", result4);
	//TEST5
	printf("%s\n", result5);
	//TEST6
	printf("%s\n", result6);
	//TEST7
	printf("%s\n", result7);
	//TEST8
	printf("%s\n", result8);
	//TEST9
	printf("%s\n", result9);
	//TEST10
	printf("%s\n", result10);
	
	free(result1);
	free(result2);
	free(result3);
	free(result4);
	free(result5);
	free(result6);
	free(result7);
	free(result8);
	free(result9);
	free(result10);
	return (0);
}
