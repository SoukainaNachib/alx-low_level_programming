#include <stdio.h>
/**
*main - print the size of various types on the computer
*it is compiled and run on,
*Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
	printf("char:%lubyte(s)\n", sizeof(char));
	printf("int:%lubyte(s)\n", sizeof(int));
	printf("long int:%lubyte(s)\n", sizeof(long int));
	printf("long long int:%lubyte(s)\n", sizeof(long long int));
	printf("float:%lubyte(s)\n", sizeof(float));
	return (0);
}
