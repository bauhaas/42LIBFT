#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

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

	void *result1;
	result1 = ft_memcpy(dest1, string2_1, len_test1);
	void *result2;
	result2 = ft_memcpy(dest2, string2_2, len_test2);
	void *result3;
	result3 = ft_memcpy(dest3, string2_3, len_test3);
	void *result4;
	result4 = ft_memcpy(dest4, string2_4, len_test4);
	void *result5;
	result5 = ft_memcpy(dest5, string2_5, len_test5);
	void *result6; 
	result6 = ft_memcpy(dest6, string2_6, len_test6);
	void *result7;
	result7 = ft_memcpy(dest7, string2_7, len_test7);
	void *result8;
	result8 = ft_memcpy(dest8, string2_8, len_test8);
	void *result9;
	result9 = ft_memcpy(dest9, string2_9, len_test9);
	void *result10; 
	result10 = ft_memcpy(dest10, string2_10, len_test10);
    
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
