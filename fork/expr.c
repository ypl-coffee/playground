#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>

//Although fork copies the file descriptor table, each underlying file offset is shared between parent and child. --xv6 book p14
int main() {
	if (fork() == 0) {
		//child
		write(1, "child!", 6);
		exit(0);
	}
	else {
		//parent 
		write(1, "parent!", 7);
		wait(0);
	}
	return 0;
}

