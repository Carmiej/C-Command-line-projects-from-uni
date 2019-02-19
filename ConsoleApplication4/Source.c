#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main()
{
	int one = 0;
	int two = 0;
	int answer = 0;
	int result = 0;

	srand(time(0));
	
	one = (rand() % 100) + 1;
	two = (rand() % 100) + 1;
	result = one + two;

	printf("%d + %d? ", one, two);
	scanf("%d", &answer);

	if (result == answer)
	{
		printf("Correct!");
		printf("\n");
	}
	else
	{
		printf("Wrong! %d + %d is %d", one, two, result);
		printf("\n");
	}

	return 0;
}
