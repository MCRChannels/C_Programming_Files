#include <stdio.h>
void func1();
void func2();

int global = 40; // global var

main()
{
	int localmain = 20; // local var
	printf("Show globalVariable : %d\n",global);
	printf("Show localVariable : %d\n",localmain);

	func1();
	func2();
}

void func1()
{
	int localfunc = 10; //local var
	printf("\nThis is in function 1 kub!");
	printf("\nShow globalVariable : %d",global);
	printf("\nShow localVariable : %d\n",localfunc);
}

void func2()
{
	int localfunc = 46; //local var
	printf("\nThis is in function 2 kub!");
	printf("\nShow globalVariable : %d",global);
	printf("\nShow localVariable : %d\n",localfunc);

	//printf("\n\nShow localmain from main in func2 : %d\n",localmain);
}
