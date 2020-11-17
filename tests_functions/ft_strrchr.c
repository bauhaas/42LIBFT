#include <stdio.h>
#include <stdlib.h>

char *ft_strrchr(const char *s, int c);

int main(void)
{
	char *test1 = "Hello";
	char *test2 = "Next";
	char *test3 = "Finish the";
	char *test4 = "FU-";
	char *test5 = "Everytehing ";
	char *test6 = "Quarante";
	char *test7 = "1 + 1";
	char *test8 = "Not a good";
	char *test9 = "123";
	char *test10 = "123";

	char *result1 = ft_strrchr(test1, 'l');
	char *result2 = ft_strrchr(test2, 'x');
	char *result3 = ft_strrchr(test3, 'i');
	char *result4 = ft_strrchr(test4, 'F');
	char *result5 = ft_strrchr(test5, 'e');
	char *result6 = ft_strrchr(test6, 'a');
	char *result7 = ft_strrchr(test7, ' ');
	char *result8 = ft_strrchr(test8, 'o');
	char *result9 = ft_strrchr(test9, '2');
	char *result10 = ft_strrchr(test10, '1');
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
	return (0);
}
