#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
	int *p1, *p2;
	p1 = malloc(sizeof(int));
	p2 = malloc(sizeof(int));
	fprintf(stderr, "First pointer points to: %p\n", p1);
	fprintf(stderr, "Second pointer points to: %p\n", p2);
	*p1 = 0xdeadbeef;
	*p2 = 0xcafebabe;
	free(p1);
	free(p2);
	return 0;
}
