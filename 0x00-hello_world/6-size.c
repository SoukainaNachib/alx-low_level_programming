#include <stdio.h>
/**
*main - print the size of various types on the computer
*it is compiled and run on,
*Return: 0 if exited properly, non-zero otherwise
*/
int main(void)
{
	printf("char:%d byte(s)", sizeof(char));
	printf("int:%d byte (s)", sizeof(int));
	printf("long int:%d byte(s)", sizeof(long int));
	printf("long long int:%d byte(s)", sizeof(long long int));
	printf("float:%d byte(s)", sizeof(float));
	return (0);
}
