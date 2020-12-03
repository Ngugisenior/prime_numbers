#include <stdio.h>

int isPrime(int num);
int prime_numbers(int **lower_var, int **upper_var);
int negative__check(int n);

void user_checks(int *lower, int *upper){
    *lower = negative__check(*lower);
    *upper = negative__check(*upper);
    if(*upper == *lower){
        printf("Both values are negative: %d & %d", *lower, *upper);
    }
    if(*lower > *upper){
        int temp = *upper;
        *upper = *lower;
        *lower = temp;
    }
    prime_numbers(&lower, &upper);

}


int negative__check(int num){
    if (num < 2 ){
        return 2;
    }else{
        return num;
    }
}


int prime_numbers(int **lower_var, int **upper_var){

        // check for prime numbers between a range
        for (int i = **lower_var; i < **upper_var; i++){
            if(isPrime(i) == 1){
                printf("%d\n", i);
            }
        }

    return 0;
}

int isPrime(int num){
    int j;
    for(j = 2; j <= num/2; j++){

        if(num % j == 0){
            return 0;
        }
    }
    return  1;
}