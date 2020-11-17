#include <stdio.h>
//#include <bsd/string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size);

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

	char src1[6] = "Bruuh";
	char src2[10] = "is this ?";
	char src3[10] = "IString ?";
	char src4[7] = "bahaas";
	char src5[7] = "Not ok"; 
	char src6[25] = "I wont do it: 0123456789";
	char src7[9] = "1te-deux";
	char src8[18] = "999B3LP M3E ! #42";
	char src9[5] = "007J"; 
	char src10[3] = "42";

	size_t len_test1 = 10;
	size_t len_test2 = 10;
	size_t len_test3 = 10;
	size_t len_test4 = 10;
	size_t len_test5 = 5;
	size_t len_test6 = 10;
	size_t len_test7 = 10;
	size_t len_test8 = 10;
	size_t len_test9 = 10;
	size_t len_test10 = 1;

	size_t result1 = ft_strlcat(dest1, src1, len_test1);
	size_t result2 = ft_strlcat(dest2, src2, len_test2);
	size_t result3 = ft_strlcat(dest3, src3, len_test3);
	size_t result4 = ft_strlcat(dest4, src4, len_test4);
	size_t result5 = ft_strlcat(dest5, src5, len_test5);
	size_t result6 = ft_strlcat(dest6, src6, len_test6);
	size_t result7 = ft_strlcat(dest7, src7, len_test7);
	size_t result8 = ft_strlcat(dest8, src8, len_test8);
	size_t result9 = ft_strlcat(dest9, src9, len_test9);
	size_t result10 = ft_strlcat(dest10,src10, len_test10);
    
	//TEST1  
	printf("%ld %s\n", result1, dest1);
	//printf("%ld %s\n", strlcat(dest1, src1, len_test1), dest1);
	//TEST2
	printf("%ld %s\n", result2, dest2);
	//printf("%ld %s\n", strlcat(dest2, src2, len_test2), dest2);
	//TEST3
	printf("%ld %s\n", result3, dest3);
	//printf("%ld %s\n", strlcat(dest3, src3, len_test3), dest3);
	//TEST4
	printf("%ld %s\n", result4, dest4);
	//printf("%ld %s\n", strlcat(dest4, src4, len_test4), dest4);
	//TEST5
	printf("%ld %s\n", result5, dest5);
	//printf("%ld %s\n", strlcat(dest5, src5, len_test5), dest5);
	//TEST6
	printf("%ld %s\n", result6, dest6);
	//printf("%ld %s\n", strlcat(dest6, src6, len_test6), dest6);
	//TEST7
	printf("%ld %s\n", result7, dest7);
	//printf("%ld %s\n", strlcat(dest7, src7, len_test7), dest7);
	//TEST8
	printf("%ld %s\n", result8, dest8);
	//printf("%ld %s\n", strlcat(dest8, src8, len_test8), dest8);
	//TEST9
	printf("%ld %s\n", result9, dest9);
	//printf("%ld %s\n", strlcat(dest9, src9, len_test9), dest9);
	//TEST10
	printf("%ld %s\n", result10, dest10);
	//printf("%ld %s\n", strlcat(dest10, src10, len_test10), dest10);
	return (0);
}
