#include <stdio.h>

void *ft_memset(void *s, int c, size_t n);

int main(void)
{
	char dest1[14] = "Hello World !";
	char dest2[25] = "is_this_a_snake_string_?";
	char dest3[21] = "IsThisACamelString ?";
	char dest4[20] = "Itwilleraseallspace";
	char dest5[13] = "TEST IS OK !";
	char dest6[41] = "delete the following number : 0123456789";
	char dest7[26] = "123456Quarante-deux123456";
	char dest8[18] = "222H3LP M3E ! #42";
	char dest9[13] = "007H4C3R?007";
	char dest10[16] = "What day is it?";
           
	int n1 = 54;
	int n2 = 54;
	int n3 = 54;
	int n4 = 54;
	int n5 = 101; 
	int n6 = 101;
	int n7 = 97;
	int n8 = 97;
	int n9 = 32; 
	int n10 = 32;
	            
	size_t len_test1 = 12;
	size_t len_test2 = 5;
	size_t len_test3 = 8;
	size_t len_test4 = 10;
	size_t len_test5 = 5;
	size_t len_test6 = 12;
	size_t len_test7 = 6;
	size_t len_test8 = 1;
	size_t len_test9 = 10;
	size_t len_test10 = 0;

	void *result1 = ft_memset(dest1, n1, len_test1);
	void *result2 = ft_memset(dest2, n2, len_test2);
	void *result3 = ft_memset(dest3, n3, len_test3);
	void *result4 = ft_memset(dest4, n4, len_test4);
	void *result5 = ft_memset(dest5, n5, len_test5);
	void *result6 = ft_memset(dest6, n6, len_test6);
	void *result7 = ft_memset(dest7, n7, len_test7);
	void *result8 = ft_memset(dest8, n8, len_test8);
	void *result9 = ft_memset(dest9, n9, len_test9);
	void *result10 = ft_memset(dest10, n10, len_test10);
    
	//TEST1  
	printf("%s\n", (char *)result1);
	//TEST2
	printf("%s\n", (char *)result2);
	//TEST3
	printf("%s\n", (char *)result3);
	//TEST4
	printf("%s\n", (char *)result4);
	//TEST5
	printf("%s\n", (char *)result5);
	//TEST6
	printf("%s\n", (char *)result6);
	//TEST7
	printf("%s\n", (char *)result7);
	//TEST8
	printf("%s\n", (char *)result8);
	//TEST9
	printf("%s\n", (char *)result9);
	//TEST10
	printf("%s\n", (char *)result10);
	return (0);
}
