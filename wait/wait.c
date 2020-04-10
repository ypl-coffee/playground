#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

int 
main(void)
{
	pid_t rc = wait(0);
	printf("wait() returned: %d\n", (int)rc);
	return 0;
}
