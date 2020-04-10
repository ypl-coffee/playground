#include<stdio.h>
#include<time.h>

int main() {
	clock_t start;
	start = clock();
	printf("clock: %ld\n", start);
	return 0;
}
