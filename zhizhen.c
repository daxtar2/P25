#include<stdio.h>

int main(void) {
	int number = 100;
    int* p = NULL;
	p = &number;
	//int* p = &number
	printf("numebr address = %p\n", &number);
	printf("numebr address = %p\n", p);

	printf("numebr  = %d\n", number);
	printf("numebr  = %d\n", *p);

	return 0;

}
