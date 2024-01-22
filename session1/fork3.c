/* fork3.c
   create child process
*/


#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
	int i;
	pid_t pid;
	int status;
	int maxprocs = 5;
	int procs;

	for(procs=0; procs < maxprocs; procs++) {
		if ((pid = fork()) < 0) {
			printf("error forking\n");
			return 0;
		}
		if (pid == 0) {
			// Child
			for(i=0;i<5;i++) {
				printf("Child in loop number %d\n",i);
				sleep(2);
			}
			printf("End of child\n");
			return(0);
		}
	}
	while(waitpid(-1,&status,0) > 0) ;
	printf("Parent completed\n");
	return 0;
}
