#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	int one = 0;
	int two = 0;

	printf("Please enter a number ");
	scanf("%d", &one);
	printf("Please enter another number ");
	scanf("%d", &two);
	printf("\n");

	if (one == two)
	{
		printf("The same number (%d) was enterd twice", one);
	}
	else
	{
		if (one > two)
		{
			printf("%d is bigger than %d", one, two);
			printf("\n");
		}
		else
		{
			printf("%d is bigger than %d", two, one);
			printf("\n");
		}
	}

	printf("\n");

	return 0;
}
