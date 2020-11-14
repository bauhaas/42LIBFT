#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set);

int main(void)
{
	char *test1 = "         Hello World !";
	char *test2 = "         is _ this _ a _ snake _ string _ ?      ";
	char *test3 = "     \t\n\vIs This A Camel String ?      ";
	char *test4 = "    Itwilleraseallspace         ";
	char *test5 = "  TEST IS OK ! \n \v \r  ";
	char *test6 = "delete the following number : 0123456789";
	char *test7 = "123456Quarante-deux123456";
	char *test8 = "222H3LP M3E ! #42";
	char *test9 = "007H4C3R?007";
	char *test10 = "1235647890a1b2c3d4e   123";

	char *set1 = " \t\v\n\f\r";
	char *set2 = "0123456789";
	char *result1 = ft_strtrim(test1, set1); 
	char *result2 = ft_strtrim(test2, set1);  
	char *result3 = ft_strtrim(test3, set1);   
	char *result4 = ft_strtrim(test4, set1);    
	char *result5 = ft_strtrim(test5, set1);    
	char *result6 = ft_strtrim(test6, set2);
	char *result7 = ft_strtrim(test7, set2);
	char *result8 = ft_strtrim(test8, set2);
	char *result9 = ft_strtrim(test9, set2);
	char *result10 = ft_strtrim(test10, set2);
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
