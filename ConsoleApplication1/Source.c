#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	char input = '/0';

	printf("Is programing fun (Y/N)? ");
	scanf("%c", &input);

	printf("\n");

	if (input == 'n' || input == 'N' || input == 'y' || input == 'Y')
	{
		switch (input)
		{
		case 'y':
		case 'Y':
			printf("User responce: Yes");
			printf("\n\n");
			break;
		case 'n':
		case 'N':
			printf("User responce: No");
			printf("\n\n");
			break;
		}
	}
	else
	{
		printf("User responce: Invalid input!");
		printf("\n\n");
	}

	return 0;
}