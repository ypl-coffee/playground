#include<unistd.h>

int main(){
	int i = 16;
	write(1, &i, sizeof(i));
	return 0;
}
