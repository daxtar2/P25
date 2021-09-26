#include <stdio.h>

int main()
{
	const int max = 3;

	int dax[3] = { 10,20,30 };
	int* p, i;

	p = dax;
	for (i = 0; i < max; i++) {
		printf("dax[%d] = %d\n", i, *p);
		printf("dax[%d]address = %p\n", i, p);
		p++;

	}
	return 0;
}