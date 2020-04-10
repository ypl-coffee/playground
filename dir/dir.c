#include<stdio.h>
#include<string.h>

int
main () {
	char buf[512] = {0};
	char a[13] = "hello world!\0";
	strncpy(buf, a, sizeof(a));
	char *p = buf;
	//p += sizeof(a);
	p += strlen(a);
	strncpy(p, a, sizeof(a));
	printf("%s\n", buf);
	return 0;
}
