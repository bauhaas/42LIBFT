#include <stdio.h>
#include <stdlib.h>

char *ft_strchr(const char *s, int c);

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
	char *test10 = "123";

	char *result1 = ft_strchr(test1, 'e');
	char *result2 = ft_strchr(test2, 'x');
	char *result3 = ft_strchr(test3, 'n');
	char *result4 = ft_strchr(test4, 'P');
	char *result5 = ft_strchr(test5, 'y');
	char *result6 = ft_strchr(test6, '-');
	char *result7 = ft_strchr(test7, ' ');
	char *result8 = ft_strchr(test8, 'a');
	char *result9 = ft_strchr(test9, '2');
	char *result10 = ft_strchr(test10, '1');
	//TEST1
	printf("%s\n", result1);
	//TEST2
	printf("%s\n", result2);
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
	if(result6 == NULL)
		printf("\n");
	else
		printf("error\n");
	//TEST7
	printf("%s\n", result7);
	//TEST8
	printf("%s\n", result8);
	//TEST9
	printf("%s\n", result9);
	//TEST10
	printf("%s\n", result10);
	return (0);
}
