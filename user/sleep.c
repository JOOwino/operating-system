//
// Created by Job Owino on 15/11/2024.
//
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argrv[])
{
//    int n;
//
//    if (argc < 2){
//        fprintf(2,"Usages: sleep...\n");
//        exit(1);
//    }
//
//    n = atoi(argrv[1]);
//    sleep(n);
//    exit(0);

int pid = fork();
if(pid > 0){
    printf("parent: child: %d \n",pid);
    pid = wait((int *) 0);
    printf("child:  %d is done \n",pid);
} else if (pid == 0){
    sleep(30);
    printf("child: exiting \n");
    exit(0);
} else{
    printf("fork error \n");
}

exit(0);

}


