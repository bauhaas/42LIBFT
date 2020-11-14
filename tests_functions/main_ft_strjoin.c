#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2);

int main(void)
{
	char *test1 = "Hello";
	char *test2 = "Next";
	char *test3 = "Finish the";
	char *test4 = "FU-";
	char *test5 = "Everything ";
	char *test6 = "Quarante";
	char *test7 = "1 + 1";
	char *test8 = "Not a good";
	char *test9 = "123";
	char *test10 = "       ";

	char *join1 = " World !";
	char *join2 = " Join";
	char *join3 = " phrase";
	char *join4 = "SION";
	char *join5 = "is fine";
	char *join6 = "-deux";
	char *join7 = " = 2";
	char *join8 = " catch";
	char *join9 = "undeuxtrois";
	char *join10 = "was all space";
	char *result1 = ft_strjoin(test1, join1);
	char *result2 = ft_strjoin(test2, join2);
	char *result3 = ft_strjoin(test3, join3);
	char *result4 = ft_strjoin(test4, join4);
	char *result5 = ft_strjoin(test5, join5);
	char *result6 = ft_strjoin(test6, join6);
	char *result7 = ft_strjoin(test7, join7);
	char *result8 = ft_strjoin(test8, join8);
	char *result9 = ft_strjoin(test9, join9);
	char *result10 = ft_strjoin(test10,join10);
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
