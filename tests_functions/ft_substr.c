#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

int main(void)
{
	char *test1 = "Hello World !";
	char *test2 = "Next test ?";
	char *test3 = "Finish the line";
	char *test4 = "FU-SION";
	char *test5 = "Everything is fine ";
	char *test6 = "Quarante-deux";
	char *test7 = "1 + 1 = 2";
	char *test8 = "Not a good catch";
	char *test9 = "123undeuxtrois";
	char *test10 = "Bonjour tout le monde";

	unsigned int begin1 = 7;
	unsigned int begin2 = 4;
	unsigned int begin3 = 3;
	unsigned int begin4 = 4;
	unsigned int begin5 = 0;
	unsigned int begin6 = 1;
	unsigned int begin7 = 0;
	unsigned int begin8 = 5;
	unsigned int begin9 = 3;
	unsigned int begin10 = 7;

	size_t end1 = 2;
	size_t end2 = 4;
	size_t end3 = 5;
	size_t end4 = 3;
	size_t end5 = 3;
	size_t end6 = 1;
	size_t end7 = 15;
	size_t end8 = 5;
	size_t end9 = 10;
	size_t end10 = 4;

	char *result1 = ft_substr(test1, begin1, end1);
	char *result2 = ft_substr(test2, begin2, end2);
	char *result3 = ft_substr(test3, begin3, end3);
	char *result4 = ft_substr(test4, begin4, end4);
	char *result5 = ft_substr(test5, begin5, end5);
	char *result6 = ft_substr(test6, begin6, end6);
	char *result7 = ft_substr(test7, begin7, end7);
	char *result8 = ft_substr(test8, begin8, end8);
	char *result9 = ft_substr(test9, begin9, end9);
	char *result10 = ft_substr(test10,begin10, end10);
	
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
