#include<stdio.h>
#include<string.h>

int
main() {
	char p[5] = "TEST\0";
	printf("%s\n", p);
	*p = 'Q';
	printf("%s\n", p);	
	return 0;
}
