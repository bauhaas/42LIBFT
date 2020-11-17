#include <stdio.h>
#include <string.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n);

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
                   
	char string2_1[8] = "xxxbxxx";
	char string2_2[8] = "xxxaxxx";
	char string2_3[8] = "xxxcxxx";
	char string2_4[8] = "xxxdxxx";
	char string2_5[8] = "xxxexxx";
	char string2_6[8] = "xxxfxxx";
	char string2_7[8] = "xxxgxxx";
	char string2_8[8] = "xxxhxxx";
	char string2_9[8] = "xxxixxx";
	char string2_10[8] = "xxxjxxx";
	
	int c1 = 'b';
	int c2 = 'a';
	int c3 = 'c';
	int c4 = 'd';
	int c5 = 'e';
	int c6 = 'f';
	int c7 = 'g';
	int c8 = 'h';
	int c9 = 'i';
	int c10 = 'j';
	
	size_t len_test1 = 10;
	size_t len_test2 = 6; 
	size_t len_test3 = 10;             
	size_t len_test4 = 10;
	size_t len_test5 = 8;
	size_t len_test6 = 5;
	size_t len_test7 = 6;
	size_t len_test8 = 4;
	size_t len_test9 = 40;
	size_t len_test10 = 16;

	void *result1 = ft_memccpy(dest1, string2_1, c1, len_test1);
	void *result2 = ft_memccpy(dest2, string2_2, c2, len_test2);
	void *result3 = ft_memccpy(dest3, string2_3, c3, len_test3);
	void *result4 = ft_memccpy(dest4, string2_4, c4, len_test4);
	void *result5 = ft_memccpy(dest5, string2_5, c5, len_test5);
	void *result6 = ft_memccpy(dest6, string2_6, c6, len_test6);
	void *result7 = ft_memccpy(dest7, string2_7, c7, len_test7);
	void *result8 = ft_memccpy(dest8, string2_8, c8, len_test8);
	void *result9 = ft_memccpy(dest9, string2_9, c9, len_test9);
	void *result10 = ft_memccpy(dest10, string2_10, c10, len_test10);
    
	//TEST1  
	printf("%s\n", (char *)result1);
	//printf("%s\n", (char *)memccpy(dest1, string2_1, c1, len_test1));
	//TEST2
	printf("%s\n", (char *)result2);
	//printf("%s\n", (char *)memccpy(dest2, string2_2, c2, len_test2));
	//TEST3
	printf("%s\n", (char *)result3);
	//printf("%s\n", (char *)memccpy(dest3, string2_3, c3, len_test3));
	//TEST4
	printf("%s\n", (char *)result4);
	//printf("%s\n", (char *)memccpy(dest4, string2_4, c4, len_test4));
	//TEST5
	printf("%s\n", (char *)result5);
	//printf("%s\n", (char *)memccpy(dest5, string2_5, c5, len_test5));
	//TEST6
	printf("%s\n", (char *)result6);
	//printf("%s\n", (char *)memccpy(dest6, string2_6, c6, len_test6));
	//TEST7
	printf("%s\n", (char *)result7);
	//printf("%s\n", (char *)memccpy(dest7, string2_7, c7, len_test7));
	//TEST8
	printf("%s\n", (char *)result8);
	//printf("%s\n", (char *)memccpy(dest8, string2_8, c8, len_test8));
	//TEST9
	printf("%s\n", (char *)result9);
	//printf("%s\n", (char *)memccpy(dest9, string2_9, c9, len_test9));
	//TEST10
	printf("%s\n", (char *)result10);
	//printf("%s\n", (char *)memccpy(dest10, string2_10, c10, len_test10));
	return (0);
}
