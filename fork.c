#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
 int i;
 pid_t pid;
 printf("%i\n\n",getpid());
 pid=fork();
    if(pid==0){
        pid=fork();
    }
    else{
        pid=fork();
        if(pid==0){
            pid=fork();
        }
        else{
            pid=fork();   

        }
    }
    printf("%i  %i\n",getpid(), getppid());
    wait(&i);
}
