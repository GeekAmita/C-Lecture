#include<stdlib.h>
#include<unistd.h>

int main() {
	int pid_t, child_pid=fork();

	if (child_pid>0) {
		sleep(50);
	}
	else {
		exit(0);
	}
	return 0;
} 
