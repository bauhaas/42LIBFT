#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size);

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
	char *test10 = "       i";
	
	size_t nmemb1 = 5;
	size_t size1 = 1;

	void *buf1 = NULL;
	char *result1 = strdup(test1);
	char *result2 = strdup(test2);
	char *result3 = strdup(test3);
	char *result4 = strdup(test4);
	char *result5 = strdup(test5);
	char *result6 = strdup(test6);
	char *result7 = strdup(test7);
	char *result8 = strdup(test8);
	char *result9 = strdup(test9);
	char *result10 = strdup(test10);
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
