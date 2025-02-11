#include <stdio.h>
void func1();
void func2();
int global = 40;


main()
{
	int localmain = 20;
	printf("Show globalVariable : %d\n",global);
	printf("Show localVariable : %d\n",localmain);

	func1();
	printf("\n");
	func2();
	printf("\n");

	//printf("Show localVar from func1 in main : %d\n",local);
}

void func1()
{
	int localfunc1 = 10;
	printf("\nThis is in function 1 kub!");
	printf("\nShow globalVariable : %d",global);
	printf("\nShow localVariable : %d",localfunc1);
}

void func2()
{
	int localfunc2 = 46;
	printf("\nThis is in function 2 kub!");
	printf("\nShow globalVariable : %d",global);
	printf("\nShow localVariable : %d",localfunc2);

	//printf("\n\nShow localVaruabke from func1 in func2 : %d\n",localfunc1);

}