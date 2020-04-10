#include<malloc.h>

int main()
{
	char *p = (char *)malloc(sizeof(char));
	malloc_stats();
	return 0;
}
