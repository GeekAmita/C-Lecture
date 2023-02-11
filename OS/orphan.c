#include<stdio.h>
#include<unistd.h>

int main() {
	int pid=fork();

	if(pid>0) {
		printf("\nIn parent process\n");
	}
	else if(pid==0) {
		sleep(30);
		printf("In child process");
	}

	return 0;
} 
