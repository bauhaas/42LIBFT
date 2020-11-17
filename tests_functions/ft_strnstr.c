#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len);

int main(void)
{
	char *big_test1 = "Hello World !";
	char *big_test2 = "is_this_a_snake_string_?";
	char *big_test3 = "IsThisACamelString ?";
	char *big_test4 = "Itwilleraseallspace";
	char *big_test5 = "TEST IS OK !";
	char *big_test6 = "delete the following number : 0123456789";
	char *big_test7 = "123456Quarante-deux123456";
	char *big_test8 = "222H3LP M3E ! #42";
	char *big_test9 = "007H4C3R?007";
	char *big_test10 = "What day is it?";
 
	char *little_test1 = "lo";
	char *little_test2 = "snake";
	char *little_test3 = "lString ?";
	char *little_test4 = "all";
	char *little_test5 = "ST"; 
	char *little_test6 = ": 0123456789";
	char *little_test7 = "1te-deux";
	char *little_test8 = "2";
	char *little_test9 = "R"; 
	char *little_test10 = " ";
	
	size_t len_test1 = 12;
	size_t len_test2 = 5;
	size_t len_test3 = 25;
	size_t len_test4 = 0;
	size_t len_test5 = 14;
	size_t len_test6 = 100;
	size_t len_test7 = 42;
	size_t len_test8 = 3;
	size_t len_test9 = 10;
	size_t len_test10 = 7;

	char *result1 = ft_strnstr(big_test1, little_test1, len_test1);
	char *result2 = ft_strnstr(big_test2, little_test2, len_test2);
	char *result3 = ft_strnstr(big_test3, little_test3, len_test3);
	char *result4 = ft_strnstr(big_test4, little_test4, len_test4);
	char *result5 = ft_strnstr(big_test5, little_test5, len_test5);
	char *result6 = ft_strnstr(big_test6, little_test6, len_test6);
	char *result7 = ft_strnstr(big_test7, little_test7, len_test7);
	char *result8 = ft_strnstr(big_test8, little_test8, len_test8);
	char *result9 = ft_strnstr(big_test9, little_test9, len_test9);
	char *result10 = ft_strnstr(big_test10, little_test10, len_test10);

	//TEST1
	printf("%s\n", result1);
	//TEST2
	if(result2 == NULL)
		printf("\n");
	else
		printf("error\n");
	//TEST3
	printf("%s\n", result3);
	//TEST4
	if(result4 == NULL)
	printf("\n");
	else
		printf("error\n");
	//TEST5
	printf("%s\n", result5);
	//TEST6
	printf("%s\n", result6);
	//TEST7
	if(result7 == NULL)
		printf("\n");
	else
		printf("error\n");
	//TEST8
	printf("%s\n", result8);
	//TEST9
	printf("%s\n", result9);
	//TEST10
	printf("%s\n", result10);
	return (0);
}
