#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
	char string1_1[14] = "Hello World !";
	char string1_2[25] = "is_this_a_snake_string_?";
	char string1_3[21] = "IsThisACamelString ?";
	char string1_4[20] = "Itwilleraseallspace";
	char string1_5[13] = "TEST IS OK !";
	char string1_6[41] = "delete the following number : 0123456789";
	char string1_7[26] = "123456Quarante-deux123456";
	char string1_8[18] = "222H3LP M3E ! #42";
	char string1_9[13] = "007H4C3R?007";
	char string1_10[16] = "What day is it?";
                   
	char string2_1[14] = "Hedlo World !";
	char string2_2[25] = "isvthis_a_snake_string_?";
	char string2_3[21] = "Is/hisACamelString ?";
	char string2_4[20] = "Itsilleraseallspace";
	char string2_5[13] = "TqST IS OK !";
	char string2_6[41] = "de8ete the following number : 0123456789";
	char string2_7[26] = "124456Quarante-deux123456";
	char string2_8[18] = "220H3LP M3E ! #42";
	char string2_9[13] = "00-H4C3R?007";
	char string2_10[16] = "Wqat day is it?";
	                      
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

	int result1 = ft_memcmp(string1_1, string2_1, len_test1);
	int result2 = ft_memcmp(string1_2, string2_2, len_test2);
	int result3 = ft_memcmp(string1_3, string2_3, len_test3);
	int result4 = ft_memcmp(string1_4, string2_4, len_test4);
	int result5 = ft_memcmp(string1_5, string2_5, len_test5);
	int result6 = ft_memcmp(string1_6, string2_6, len_test6);
	int result7 = ft_memcmp(string1_7, string2_7, len_test7);
	int result8 = ft_memcmp(string1_8, string2_8, len_test8);
	int result9 = ft_memcmp(string1_9, string2_9, len_test9);
	int result10 = ft_memcmp(string1_10, string2_10, len_test10);
    
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
