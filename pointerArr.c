/*************************************************************************
	> File Name: pointerArr.c
	> Author: li
	> Mail: menglee@cumt.edu.cn 
	> Created Time: Fri 08 Dec 2017 04:28:43 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int arr[] = {100 ,101 ,102};
    int *ptr = arr;
    int i, size = 0;

    size = (sizeof arr/ sizeof (arr[0]));
    
    printf("U can use arr to demonstrate:\n");
    for (i = 0; i < size; ++i)
        printf("&arr[%d] = %x\n", i, &arr[i]);

    printf("\n");
    for (i = 0; i < size; ++i)
        printf("arr+%d = %x\n", i, arr+i);

    printf("\n");

}
