#include<stdio.h>
void ask()
{
	printf("hello!\n");
}
int main()
{
	void (*p)();
	p = ask;
	printf("%p\n",ask);
	printf("%p\n", &ask);
	printf("%p\n", *ask);

	return 0;
}