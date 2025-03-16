#include <stdio.h>

main() {
	int a,b,c ;
	printf("Enter Value a : ");
	scanf("%d", &a);
	printf("Enter Value b : ");
	scanf("%d", &b);

	c = func1(a,b);
	printf("Return Value : %d", c);
	c = func2(a,b);
	printf("Return Value : %d", c);
	c = func3(a,b);
	printf("Return Value : %d", c);
	c = func4(a,b);
	printf("Return Value : %d", c);
	c = func5(a,b);
	printf("Return Value : %d\n", c);

}

int func1(int a, int b){
	printf("\n=== Func1 ===\n");
	printf("Value A : %d\n", a);
	printf("Value B : %d\n", b);


	return a,b;
}

int func2(int a, int b){
	printf("\n=== Func2 ===\n");
	printf("Value A : %d\n", a);
	printf("Value B : %d\n", b);

	return a;
	return b;
}

int func3(int a, int b){
	printf("\n=== Func3 ===\n");
	printf("Value A : %d\n", a);
	printf("Value B : %d\n", b);

	return b,a;
}

int func4(int a, int b){
	printf("\n=== Func4 ===\n");
	printf("Value A : %d\n", a);
	printf("Value B : %d\n", b);

	return a;
}

int func5(int a, int b){
	printf("\n=== Func5 ===\n");
	printf("Value A : %d\n", a);
	printf("Value B : %d\n", b);

	return b;
}

// สุดท้ายแล้ว ไม่สามารถรีเทิร์นได้มากกว่า 2 ค่า ปัญหาน่าจะเกิดจาก compiler มันจะอ่าน return จากค่าแรกเท่านั้น ไม่สามารถ return 2 ค่าได้ครับ