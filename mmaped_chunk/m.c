#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	printf("Let's try to malloc a huge amount of memory.\n");
	char *p, *example;
	p = malloc(128 * 1024);
	example = "Hello world!\0";
	strcpy(p, example);
	free(p);
	printf("Trying to access it.\n");
	printf("%s\n", p);
	return 0;
}
