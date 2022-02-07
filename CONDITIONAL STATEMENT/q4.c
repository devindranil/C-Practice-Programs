/**
 * @file q4.c
 * @author Indranil Chakraborty
 * @brief Write a C program to check whether a number is even or odd. 
 *---------------example---------------------
 * -----1st case-------
 * Input - 2
 * Output - Even Number
 * -----2nd case-------
 * Input - 5
 * Output - Odd Number
 * @version 0.1
 * @date 2022-02-07
 * 
 */

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);

    /**
     * @brief if a number divisible by 2 then even number 
     * and if a number not divisible by 2 then odd number
     * 
     */

    if(n%2==0){
        printf("%d is a even number",n);
    }else{
        printf("%d is a odd number",n);
    }

    return 0;
}