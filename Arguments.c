#include <stdio.h>
#include <stdbool.h>

int main(int argc, char  *argv[])
{
	int numberOfArg = argc;
	char *argument1 = argv[0];
	char *argument2 = argv[1];

	argument2 = "Atakan";

	printf("Number of Argument: %d\n", numberOfArg);
	printf("Argument 1: %s\n", argument1);
	printf("Argument 2: %s\n", argument2);

	return 0;
}