#include <stdio.h>
#include <stdbool.h>
//besinci
int main()
{
	unsigned int a = 60; // 0011 1100
	unsigned int b = 13; // 0000 1101

	int result;
	int shifted;

	result = a & b; // 0000 1100

	shifted = a << 2;

	printf("Result: %d\n", result);
	printf("~Result: %d\n", ~result);
	printf("Shifted a: %d\n", shifted);
	printf("Initial a: %u\nInitial b: %u\n", a, b);

	return 0;
}
