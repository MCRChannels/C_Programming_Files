#include <stdio.h>
main()
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

		for ( j = 2 ; j < i ; j++ ) {
			if(i % j == 0 ){
				is_prime = 0;
				break;
			}
		}

		if(is_prime == 1){
			printf("%d ",i);
		}
	}
	getch();

}