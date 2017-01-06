/*************************************************************************
	> File Name: chapter3.c
	> Author: li 
	> Mail: lemmon0402@gmail.com
	> Created Time: Fri 06 Jan 2017 10:14:42 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int A, B, sum = 0, i;
    printf("enter A and B:");
    scanf("%d%d", &A, &B);
    for(i = A; i <= B; i++)
    {
        printf("%d", i);
        sum += i;
    }
    putchar('\n');
    printf("sum = %d\n", sum);
    return 0;
}
