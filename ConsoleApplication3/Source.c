#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float inputone = 0;
	float inputtwo = 0;
	int one = 0;
	int two = 0;
	float result = 0;

	printf("Enter the numertator: ");
	scanf("%f", &inputone);

	printf("Enter the denominator: ");
	scanf("%f", &inputtwo);

	printf("\n");

	//converting float to int
	one = inputone;
	two = inputtwo;

	printf("Trying to calculate %d / %d\n", one, two);

	printf("\n");

	result = inputone / inputtwo;

	if (two == 0)
	{
		printf("Unable to calculate due to devide by zero!");
		printf("\n\n");
	}
	else
	{
		printf("The result it: %f", result);
		printf("\n\n");
	}

	return 0;
}