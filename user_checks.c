//
// Created by Pyrax on 12/3/2020.
//
#include <stdio.h>


int prime_numbers(int **lower, int **upper);
int negative__check(int n);

void user_checks(int *lower, int *upper){

    *lower = negative__check(*lower);
    *upper = negative__check(*upper);

    // Both Integers are -ve
    if(*lower == *upper)
        printf("both integers are less than two...!");

    if(*lower != NULL && *upper !=NULL){

        //check whether the lower value is greater than the  value upper
        if(*lower > *upper){
            int temp = *lower;
            *lower = *upper;
            *upper = temp;
        }

        prime_numbers(&lower, &upper);
    }

}


int negative__check(int num){
    if (num < 2 ){
        return 2;
    }else{
        return num;
    }
}



