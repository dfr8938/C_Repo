#include <stdio.h>

int main(int argc, char* argv[])
{
	
	printf("%s\n", "Enter your name:");
	char name[20];
	scanf("%s", name);

	printf("%s\n", "Enter your last name:");
	char lastname[20];
	scanf("%s", lastname);

	printf("My name is %s and lastname %s\n", name, lastname);

	return 0;
}