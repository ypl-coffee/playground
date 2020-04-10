#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char *example1 = "secret";
	char *example2 = "message";

	puts("declaring p");
	char *p = malloc(0x30);
	strcpy(p, example1);
	
	puts("declaring garbage 1");
	malloc(0x10);
	
	puts("declaring q");
	char *q = malloc(0x50);
	strcpy(q, example2);
	
	puts("declaring garbage 2");
	malloc(0x8);
	
	puts("freeing p");
	free(p);
	
	puts("freeing q");
	free(q);
	return 0;
}
