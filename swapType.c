/*************************************************************************
	> File Name: swapType.c
	> Author: li
	> Mail: menglee@cumt.edu.cn 
	> Created Time: Tue 12 Dec 2017 08:54:40 PM CST
 ************************************************************************/

#include<stdio.h>

void swap_by_address(int *, int *);
void swap_by_value(int, int);

int main()
{
    int x=100, y=200;
    //call by value
    printf("call by value\n");
    printf("before swapping...\n");
    printf("x=%d, y=%d\n", x, y);
    swap_by_value(x, y);
    printf("after swapping...\n");
    printf("x=%d, y=%d\n\n", x, y);
    
    //call by adress
    printf("call by adress\n");
    printf("before swapping...\n");
    printf("x=%d, y=%d\n", x, y);
    swap_by_address(&x, &y);
    printf("after swapping...\n");
    printf("x=%d, y=%d\n\n", x, y);

    return 0;
}

void swap_by_value(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap_by_address(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
