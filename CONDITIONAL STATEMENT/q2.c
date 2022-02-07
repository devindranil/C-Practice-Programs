/**
 * @file q2.c
 * @author Indranil Chakraborty
 * @brief Write a C program to calculate profit and loss on a transaction 
 * ---------------example---------------------
 *-----1st case------
 * Input - 200 400 //where 200 = cp 400 = sp
 * Output - Profit is 200 Rs
 * -----2nd case------
 * Input - 300 200 //where 300 = cp 200 = sp
 * Output - Loss is 100 Rs
 * @version 0.1
 * @date 2022-02-07
 */

#include<stdio.h>
int main(){

    int cp,sp,r; // cp=cost price, sp = selling price & r = result

    printf("Enter Cost Price: \n");
    scanf("%d",&cp);
    printf("Enter Selling Price: \n");
    scanf("%d",&sp);

    /*---------logic to calculate the profit-------------*/

    /**
     * @brief  if sp > cp then profit
     * if cp > sp then loss
     * if cp == sp then no profit and no loss
     * else wrong input
     */

    if(sp>cp){
        r=sp-cp;
        printf("Profit is: %d Rs\n",r);
    }else if(cp>sp){
        r=cp-sp;
        printf("Loss is: %d Rs\n",r);
    }else{
        printf("No Profit and Loss");
    }

    return 0;
}