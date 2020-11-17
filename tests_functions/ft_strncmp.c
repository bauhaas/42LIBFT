#include <stdio.h>

int ft_strncmp(const char *big, const char *little, size_t len);

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
 
	char *little_test1 = "Hellp";
	char *little_test2 = "snake";
	char *little_test3 = "IString ?";
	char *little_test4 = "Itall";
	char *little_test5 = "TEST iS OK !"; 
	char *little_test6 = "delete the number : 0123456789";
	char *little_test7 = "1te-deux";
	char *little_test8 = "222B3LP M3E ! #42";
	char *little_test9 = "007J"; 
	char *little_test10 = "Wb";
	
	size_t len_test1 = 12;
	size_t len_test2 = 5;
	size_t len_test3 = 8;
	size_t len_test4 = 10;
	size_t len_test5 = 14;
	size_t len_test6 = 20;
	size_t len_test7 = 42;
	size_t len_test8 = 1;
	size_t len_test9 = 10;
	size_t len_test10 = 7;

	int result1 = ft_strncmp(big_test1, little_test1, len_test1);
	int result2 = ft_strncmp(big_test2, little_test2, len_test2);
	int result3 = ft_strncmp(big_test3, little_test3, len_test3);
	int result4 = ft_strncmp(big_test4, little_test4, len_test4);
	int result5 = ft_strncmp(big_test5, little_test5, len_test5);
	int result6 = ft_strncmp(big_test6, little_test6, len_test6);
	int result7 = ft_strncmp(big_test7, little_test7, len_test7);
	int result8 = ft_strncmp(big_test8, little_test8, len_test8);
	int result9 = ft_strncmp(big_test9, little_test9, len_test9);
	int result10 = ft_strncmp(big_test10, little_test10, len_test10);
    
	//TEST1  
	printf("%d\n", result1);
	//TEST2
	printf("%d\n", result2);
	//TEST3
	printf("%d\n", result3);
	//TEST4
	printf("%d\n", result4);
	//TEST5
	printf("%d\n", result5);
	//TEST6
	printf("%d\n", result6);
	//TEST7
	printf("%d\n", result7);
	//TEST8
	printf("%d\n", result8);
	//TEST9
	printf("%d\n", result9);
	//TEST10
	printf("%d\n", result10);
	return (0);
}
