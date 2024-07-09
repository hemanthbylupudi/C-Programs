#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
	int fd[2],pid,k;
if(k==-1)
{
	perror("pipe");
	exit(1);
}
pid=fork();
if (pid==0){
	close(fd[0]);
	dup2(fd[1],1);
	close(fd[1]);
	execlp(argv[1],argv[1],NULL);
	perror("Execlp");
}
else{
	close(fd[1]);
	dup2(fd[0],0);
	close(fd[0]);
	execlp(argv[2],argv[2],NULL);
	perror("Execlp");
}
}

