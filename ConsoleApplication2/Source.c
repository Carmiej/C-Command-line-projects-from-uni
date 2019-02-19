#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	int month = 0;

	printf("Key:	January is 1\n");
	printf("	February is 2\n");
	printf("	March is 3\n");
	printf("	April is 4\n");
	printf("	May is 5\n");
	printf("	June is 6\n");
	printf("	July is 7\n");
	printf("	August is 8\n");
	printf("	September is 9\n");
	printf("	October is 10\n");
	printf("	November is 11\n");
	printf("	December is 12\n");

	printf("\n");

	printf("What month were you born in? ");
	scanf("%d", &month);

	printf("\n");


	switch (month)
	{
	case 1:
		printf("January in New Zealand is in Summer");
		printf("\n\n");
		break;
	case 2:
		printf("February in New Zealand is in Summer");
		printf("\n\n");
		break;
	case 3:
		printf("march in New Zealand is in Autumn");
		printf("\n\n");
		break;
	case 4:
		printf("April in New Zealand is in Autumn");
		printf("\n\n");
		break;
	case 5:
		printf("May in New Zealand is in Autumn");
		printf("\n\n");
		break;
	case 6:
		printf("June in New Zealand is in Winter");
		printf("\n\n");
		break;
	case 7:
		printf("July in New Zealand is in Winter");
		printf("\n\n");
		break;
	case 8:
		printf("August in New Zealand is in Winter");
		printf("\n\n");
		break;
	case 9:
		printf("September in New Zealand is in Spring");
		printf("\n\n");
		break;
	case 10:
		printf("October in New Zealand is in Spring");
		printf("\n\n");
		break;
	case 11:
		printf("November in New Zealand is in Spring");
		printf("\n\n");
		break;
	case 12:
		printf("December in New Zealand is in Summer");
		printf("\n\n");
		break;
	}

	return 0;
	}
	