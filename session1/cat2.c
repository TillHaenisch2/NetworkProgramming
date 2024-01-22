/* cat2.c
   simple version of cat: concatenate files
   cat1 copy one file to stdout
   if filename not given on the command line, then use stdin as input
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFSIZE 1

int main(int argc, char*argv[]) {
	int fd;
	char *buf[BUFSIZE];
	int n;
	if (argc > 1) {
		fd = open(argv[1],O_RDONLY);
		if (fd < 0) {
			printf("error opening %s\n",argv[1]);
			return -1;
		}
	}
	else
		fd = STDIN_FILENO;

	while ((n=read(fd,buf, BUFSIZE)) > 0) {
		if (write(STDOUT_FILENO,buf,n) != n) {
		}
	}
	return 0;
}


