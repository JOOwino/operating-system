//
// Created by Job Owino on 17/11/2024.
//
#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main (int argc, char *argv[])
{
    char *agr_v[3];
    agr_v[0] = "echo";
    agr_v[1] = "hello";
    agr_v[2] = "world";
    exec("/bin/_echo",agr_v);
    printf("Exec error \n");

    exit(0);
}