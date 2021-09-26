#include<stdio.h>

int main()
{
	int var = 1;
	int *p;
	int **pi;
	p = &var;
	pi = &p;
	printf("var = %d\n", var);
	printf("var addres = %p\n", p);

	printf("*p  = %d\n", *p);
	printf("p addres = %p\n", pi);

	printf("**pi  = %d\n", **pi);
	printf("pi addres = %p\n", &pi);

	return 0;
}