#include <stdio.h>
main()
{
	int one_number, two_number , max_number , amount;

	printf("Please enter one_number : ");
	while(scanf("%d",&one_number) != 1){
		printf("Dont input Alphabet\n");
		printf("Please enter one_number : ");
		while(getchar() != '\n');   // clear buffer
	}

	printf("Please enter two_number : ");
	while (scanf("%d",&two_number) != 1){
		printf("Dont input Alphabet\n");
		printf("Please enter one_number : ");
		while(getchar() != '\n');
	}

	printf("Please set the maximum value number : ");
	scanf("%d",&max_number);

	amount = one_number + two_number;

	do {
		if (amount >= max_number) {
			printf("Value is more than your max_number. Try again!\n");

			printf("Please enter one_number : ");
			while(scanf("%d",&one_number) != 1){
				printf("Don't input Alphabet\n");
				printf("Please enter one_number : ");
				while(getchar() != '\n');
			}

			printf("Please enter two_number : ");
			while(scanf("%d", &two_number) != 1){
				printf("Don't input Alphabet\n");
				printf("Please enter two_number : ");
				while(getchar() != '\n');
			}

			amount = one_number + two_number;
		}
	} while (amount >= max_number);

	printf("\n\n\nMax is \"%d\" and sum of the number is %d",max_number,amount);
	getch();
}