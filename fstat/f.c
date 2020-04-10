#include <sys/types.h>
#include <sys/stat.h> 
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(){
	struct stat Stat;
	int fd = open("file.txt", 0);
	fstat(fd, &Stat);
	printf("st_ino: %ld\n", Stat.st_ino);
	printf("st_nlink: %ld\n", Stat.st_nlink);
	printf("st_uid: %d\n", Stat.st_uid);
	printf("st_size: %ld\n", Stat.st_size);
	return 0;
}
