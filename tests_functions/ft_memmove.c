#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n);

int main(void)
{
	char dest1[14] = "Hello World !";
	char dest2[25] = "is_this_a_snake_string_?";
	char dest3[21] = "IsThisACamelString ?";
	char dest4[11] = "0123456789";
	char dest5[11] = "0123456789";
	char dest6[11] = "0123456789";
	char dest7[6] = "01234";
	char dest8[6] = "01234";
	char dest9[6] = "01234";
	char dest10[6] = "01234";
    
	char src1[14] = "aaaaa World !";
	char src2[25] = "aa_aaaa_a_snake_string_?";
	char src3[21] = "aaThisACamelString ?";
	char src4[20] = "00willeraseallspace";
	char src5[13] = "00ST IS OK !";
	char src6[41] = "00lete the following number : 0123456789";
	char src7[26] = "123456Quarante-deux123456";
	char src8[18] = "222H3LP M3E ! #42";
	char src9[13] = "007H4C3R?007";
	char src10[16] = "What day is it?";
	            
	size_t len_test1 = 14;
	size_t len_test2 = 25;
	size_t len_test3 = 21;
	size_t len_test4 = 6;
	size_t len_test5 = 7;
	size_t len_test6 = 8;
	size_t len_test7 = 2;
	size_t len_test8 = 3;
	size_t len_test9 = 1;
	size_t len_test10 = 4;

	void *result1 = ft_memmove(dest1, src1, len_test1);
	void *result2 = ft_memmove(dest2, src2, len_test2);
	void *result3 = ft_memmove(dest3, src3, len_test3);
	void *result4 = ft_memmove(dest4, src4, len_test4);
	void *result5 = ft_memmove(dest5, src5, len_test5);
	void *result6 = ft_memmove(dest6, src6, len_test6);
	void *result7 = ft_memmove(dest7, src7, len_test7);
	void *result8 = ft_memmove(dest8, src8, len_test8);
	void *result9 = ft_memmove(dest9, src9, len_test9);
	void *result10 = ft_memmove(dest10, src10, len_test10);
    
	//TEST1  
	printf("%s\n", (char *)result1);
	//printf("%s\n", (char *)memmove(dest1, src1, len_test1));
	//TEST2
	printf("%s\n", (char *)result2);
	//printf("%s\n", (char *)memmove(dest2, src2, len_test2));
	//TEST3
	printf("%s\n", (char *)result3);
	//printf("%s\n", (char *)memmove(dest3, src3, len_test3));
	//TEST4
	printf("%s\n", (char *)result4);
	//printf("%s\n", (char *)memmove(dest4, src4, len_test4));
	//TEST5
	printf("%s\n", (char *)result5);
	//printf("%s\n", (char *)memmove(dest5, src5, len_test5));
	//TEST6
	printf("%s\n", (char *)result6);
	//printf("%s\n", (char *)memmove(dest6, src6, len_test6));
	//TEST7
	printf("%s\n", (char *)result7);
	//printf("%s\n", (char *)memmove(dest7, src7, len_test7));
	//TEST8
	printf("%s\n", (char *)result8);
	//printf("%s\n", (char *)memmove(dest8, src8, len_test8));
	//TEST9
	printf("%s\n", (char *)result9);
	//printf("%s\n", (char *)memmove(dest9, src9, len_test9));
	//TEST10
	printf("%s\n", (char *)result10);
	//printf("%s\n", (char *)memmove(dest10, src10, len_test10));
	return (0);
}
