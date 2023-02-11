#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main() {
	int pid, mypid, myppid;
	pid=getpid();
	printf("Before fork: Process id is %d\n", pid);
	pid=fork();

	if (pid<0) {
		perror("fork() failure\n");
		return 1;
	}

	//Child Process
	if (pid==0) {
		printf("This is child process\n");
		printf("Process id is %d and PPID is %d\n", getpid(), getppid());
	}
	else { //Parent Process
	       sleep(2);
	       printf("This is parent process\n");
	       printf("Process id is %d and PPID is %d\n", getpid(), getppid());
	       printf("Newly created process id or child pid is %d\n", pid);
	}
	return 0;
}
