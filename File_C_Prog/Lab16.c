#include <stdio.h>
main ()
{
	char c1,c2,c3,c4,c5,temp;
	int sorted = 0;

	printf("Please enter 5 Charactor to sorted : ");
	scanf("%c %c %c %c %c",&c1,&c2,&c3,&c4,&c5);

	while(sorted == 0) {
		sorted = 1;
		if(c1 > c2) {
			temp = c1 ;
			c1 = c2;
			c2 = temp;
			sorted = 0;
		}
		if(c2 > c3) {
			temp = c2;
			c2 = c3;
			c3 = temp;
			sorted = 0;
		}
		if(c3 > c4) {
			temp = c3;
			c3 = c4;
			c4 = temp;
			sorted = 0;
		}
		if(c4 > c5){
			temp = c4;
			c4 = c5;
			c5 = temp;
			sorted = 0;
		}

	}

	printf("\n\n==|Your Charactor is|== : %c %c %c %c %c",c1,c2,c3,c4,c5);
}