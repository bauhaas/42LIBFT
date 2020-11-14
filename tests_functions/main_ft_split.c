#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c);

int main(void)
{
	char *test1 = "Hello World !";
	char *test2 = "Next phrase is splitted";
	char *test3 = "only 010101";
	char *test4 = "FU-SION";
	char *test5 = "underscore_will_be_gone";
	char *test6 = "only1numbers1?";
	char *test7 = "1 + 1 = 2 what is the operator :v ?";
	char *test8 = "Not a good letter";
	char *test9 = "123a465";
	char *test10 = ". / . ";

	char c1 = ' ';
	char c2 = 'e';
	char c3 = '0';
	char c4 = '-';
	char c5 = '_';
	char c6 = '1';
	char c7 = '+';
	char c8 = 'o';
	char c9 = 'a';
	char c10 = ' ';

	char **result1 = ft_split(test1, c1);
	char **result2 = ft_split(test2, c2);
	char **result3 = ft_split(test3, c3);
	char **result4 = ft_split(test4, c4);
	char **result5 = ft_split(test5, c5);
	char **result6 = ft_split(test6, c6);
	char **result7 = ft_split(test7, c7);
	char **result8 = ft_split(test8, c8);
	char **result9 = ft_split(test9, c9);
	char **result10 = ft_split(test10, c10);
	
	int i = 0;
	//TEST1
	while(result1[i])
		printf("%s|", result1[i++]);
	printf("\n");
	//TEST2
	i = 0;
	while(result2[i])
		printf("%s|", result2[i++]);
	printf("\n");
	//TEST3
	i = 0;
	while(result3[i])
		printf("%s|", result3[i++]);
	printf("\n");
	//TEST4
	i = 0;
	while(result4[i])
		printf("%s|", result4[i++]);
	printf("\n");
	//TEST5
	i = 0;
	while(result5[i])
		printf("%s|", result5[i++]);
	printf("\n");
	//TEST6
	i = 0;
	while(result6[i])
		printf("%s|", result6[i++]);
	printf("\n");
	//TEST7
	i = 0;
	while(result7[i])
		printf("%s|", result7[i++]);
	printf("\n");
	//TEST8
	i = 0;
	while(result8[i])
		printf("%s|", result8[i++]);
	printf("\n");
	//TEST9
	i = 0;
	while(result9[i])
		printf("%s|", result9[i++]);
	printf("\n");
	//TEST10
	i = 0;
	while(result10[i])
		printf("%s|", result10[i++]);
	printf("\n");
	
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
