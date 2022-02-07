/**
 * @file q3.c
 * @author Indranil Chakraborty
 * @brief Write a C program to check whether a number is divisible by 5 and 11 or not
 * ---------------example---------------------
 * -----1st case------
 * Input - 55 
 * output - divisible by 5 and 11
 * -----2nd case------
 * Input - 60
 * output - not divisible by 5 and 11
 * @version 0.1
 * @date 2022-02-07
 * 
 */

#include<stdio.h>
int main(){
    int n;
    printf("Enter any Number: ");
    scanf("%d",&n);

    if((n%5==0) && (n%11==0)){
        printf("Number is Divisible by 5 and 11");
    }else{
        printf("Number is Not Divisible by 5 and 11");
    }
    return 0;
}