/*************************************************************************
	> File Name: findMax.c
	> Author: li
	> Mail: menglee@cumt.edu.cn 
	> Created Time: Tue 12 Dec 2017 09:08:32 PM CST
 ************************************************************************/

#include<stdio.h>

int findMax(int *, int);

int main()
{
    int i;
    int arr[] = {20, 50, 98, 65, 23, 89, 52};
    int elements = sizeof(arr)/sizeof(arr[0]);
    int maxNumber = findMax(arr, elements);

    printf("max( ");
    for (i=0; i<elements; i++)
        printf("%d ", arr[i]);
    printf(") is %d\n", maxNumber);
    return 0 ;
}

int findMax(int *x, int n)
{
    int j;
    int max = x[0];
    for (j=1; j<n; j++)
        if (x[j] > max)
            max = x[j];
    return max;
}

