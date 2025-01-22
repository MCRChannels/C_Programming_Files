#include <stdio.h>
#include <conio.h>

void Lab1()
{
	int one_number, two_number , max_number , amount;

	printf("Please enter one_number : ");
	while (scanf("%d",&one_number) != 1){
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

	while ( amount >= max_number ) {
		printf("Value is more than ur max_number. Try again!\n");
		printf("Please enter one_number : ");
		while (scanf("%d",&one_number) != 1){
			printf("Dont input Alphabet\n");
			printf("Please enter one_number : ");
			while(getchar() != '\n');
		}

		printf("Please enter two_number : ");
		while (scanf("%d",&two_number) != 1){
			printf("Dont input Alphabet\n");
			printf("Please enter one_number : ");
			while(getchar() != '\n');
		}

		amount = one_number + two_number;

	}
	printf("\n\n\nMax is \"%d\" and sum of the number is %d",max_number,amount);
	getch();
}

void Lab2()
{
	int min_number , max_number , is_prime;
	int i,j;
	printf("This Program find prime numbers\n");
	printf("Please enter min_number : ");
	scanf("%d",&min_number);
	printf("Please enter max_number : ");
	scanf("%d",&max_number);

	printf("\n*** Your prime numbers is ***\n\n");

	for (i = min_number ; i <= max_number ; i++) {
		is_prime = 1;

		j = 2;
		while (j < i ){
			is_prime *= (i%j != 0);
			j++;
		}

		while (is_prime){
			printf("%d ", i);
			break;
		}
	}
	getch();

}

void Lab3()
{

}

main()
{
	Lab1();
}
