#include <stdio.h>
#include <stdlib.h>

char function_1_5(unsigned int i, char c)
{
	if(i % 2 == 0)
		c -= 32;
	return (c);
}

char function_6_10(unsigned int i, char c)
{
	if(i % 2 != 0)
		c += 32;
	return (c);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

int main(void)
{
	char string1[] = "abcde";
	char string2[] = "fghij";
	char string3[] = "ABCDE";
	char string4[] = " / / /%";
	char string5[] = "i54ioh";
	char *str1 = ft_strmapi(string1, function_1_5);
	char *str2 = ft_strmapi(string2, function_1_5);
	char *str3 = ft_strmapi(string3, function_1_5);
	char *str4 = ft_strmapi(string4, function_1_5);
	char *str5 = ft_strmapi(string5, function_1_5);
	
	char string6[] = "abcde";
	char string7[] = "fghij";
	char string8[] = "ABCDE";
	char string9[] = " / / /%";
	char string10[] = "i54ioh";
	char *str6 = ft_strmapi(string6, function_6_10);
	char *str7 = ft_strmapi(string7, function_6_10);
	char *str8 = ft_strmapi(string8, function_6_10);
	char *str9 = ft_strmapi(string9, function_6_10);
	char *str10 = ft_strmapi(string10, function_6_10);
	
	//TEST1
	printf("%s\n", str1);
	//TEST2
	printf("%s\n", str2);
	//TEST3
	printf("%s\n", str3);
	//TEST4
	printf("%s\n", str4);
	//TEST5
	printf("%s\n", str5);
	//TEST6
	printf("%s\n", str6);
	//TEST7
	printf("%s\n", str7);
	//TEST8
	printf("%s\n", str8);
	//TEST9
	printf("%s\n", str9);
	//TEST10
	printf("%s\n", str10);
	
	free(str1);
	free(str2);
	free(str3);
	free(str4);
	free(str5);
	free(str6);
	free(str7);
	free(str8);
	free(str9);
	free(str10);
	return (0);
}
