/* pid.c
   show pid of current process
*/

#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
	printf("hello from process with ID %d\n",getpid());
	return 0;
}


