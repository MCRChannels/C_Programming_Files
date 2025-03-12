#include <stdio.h>
#include <conio.h>
main()
{
	int min_number , max_number , is_prime;
	int i,j;
	int counting = 0;
	char end;

	do{
		printf("This Program find prime numbers\n");

		do {
			printf("Please enter min_number : ");
			scanf("%d",&min_number);
			printf("Please enter max_number : ");
			scanf("%d",&max_number);

			if ( min_number >= max_number ) {
				printf("\n** min number must lower than max number kub **");
				printf("\nPlease input value again\n");
				printf("\n");
			}


		} while (min_number >= max_number );

		printf("\n*** Your prime numbers is ***\n");

		for (i = min_number ; i <= max_number ; i++) {
			is_prime = 1;

			if ( i < 2 ) {
				is_prime = 0;
			} else {
				for ( j = 2 ; j * j <= i ; j++ ) {
					if(i % j == 0){
						is_prime = 0;
						printf("\nThis [%d] is not Prime Number in : %d",i,j);
						break;
					}
				}
			}

			if(is_prime){
				printf("\tThis [%d] is **Prime Number**",i);
				counting++;
			}
		}

		printf("\n\nAll Prime number is : %d",counting);
		printf("do you want to continue? (Y/N) : ");
		scanf(" %c",&end);
	}while (end != 'n' && end != 'N');
}
