#include <sys/types.h>         
#include <sys/socket.h>
#include <stdio.h>

int main(){
	int fd1, fd2, fd3;
	fd1 = socket(AF_LOCAL, SOCK_STREAM, 0);
	fd2 = socket(AF_LOCAL, SOCK_STREAM, 0);
	fd3 = socket(AF_LOCAL, SOCK_STREAM, 0);
	printf("fd1: %d\n", fd1);
	printf("fd2: %d\n", fd2);
	printf("fd3: %d\n", fd3);
	return 0;
}
