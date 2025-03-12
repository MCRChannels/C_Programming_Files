#include <stdio.h>
main()
{
	int min_number , max_number , is_prime;
	int i,j;
	char end;

	do{
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

		printf("do you want to continue? (Y/N) : ");
		scanf(" %c",&end);
	} while(end != 'N' && end != 'n');


}
