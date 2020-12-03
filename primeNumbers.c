//
// Created by Pyrax on 12/3/2020.
//
#include <stdio.h>
int isPrime(int num);

int prime_numbers(int **lower, int **upper){

        // check for prime numbers between a range
        for (int i = **lower; i < **upper; i++){
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