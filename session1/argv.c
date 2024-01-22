/* argv.c
   demonstrates the use of command line poarameters

   try something like:
   ./argv
   ./argv hello world
   ./argv hello world "hello you"
   ./argv hello world *.c
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int i;
	printf("argc=%d ",argc);
	for(i=0;i<argc;i++)
		printf(" %s",argv[i]);
	printf("\n");
	return 0;
}
