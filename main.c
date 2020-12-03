#include <stdio.h>
#include <stdlib.h>

void user_checks(int *lower, int *upper);
int lower = NULL;
int upper = NULL;


int main(int argc, char *argv[]) {
    if(argc > 2){
        lower = atoi( argv[1]);
        upper = atoi( argv[2]);
        printf("\nThe prime numbers between %d and %d are : \n",atoi( argv[1]),  atoi(argv[2]));
        user_checks(&lower, &upper);
    }
    return 0;
}

