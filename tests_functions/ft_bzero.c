#include <stdio.h>

void ft_bzero(void *s, size_t n);

int main(void)
{
	void *test1 = "Hello World !";
	void *test2 = "Next phrase is splitted";
	void *test3 = "only 010101";
	void *test4 = "FU-SION";
	void *test5 = "underscore_will_be_gone";
	void *test6 = "only1numbers1?";
	void *test7 = "1 + 1 = 2 what is the operator :v ?";
	void *test8 = "Not a good letter";
	void *test9 = "123a465";
	void *test10 = ". / . ";
	//TEST1
	ft_bzero(test1, 5);

	printf("%s\n", (char *)test1);
	//TEST2
	//TEST3
	//TEST4
	//TEST5
	//TEST6
	//TEST7
	//TEST8
	//TEST9
	//TEST10
	return (0);
}
