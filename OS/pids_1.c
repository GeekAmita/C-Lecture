#include<stdio.h>
#include<unistd.h>

int main() {
	int pid;
	pid=fork();
	if(pid==0) {
		printf("\nParent Process id: %d", getpid());
	}
	else {
		printf("\nChild Process with parent id: %d", getppid());
	}
	return 0;
} 
