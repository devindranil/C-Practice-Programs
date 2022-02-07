/**
 * @file q5.c
 * @author Indranil Chakraborty
 * @brief Write a C program to input week number and print week day (Switch Case)
 * ---------------example---------------------
 * -----1st case-------
 * Input - 3
 * Output - Tues Day
 * -----2nd case-------
 * Input - 6
 * Output - Saturday
 * @version 0.1
 * @date 2022-02-07
 *
 */

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number between 1 to 7\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;

    default:
        printf("Invalid Number");
        break;
    }
    return 0;
}