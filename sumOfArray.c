/*************************************************************************
	> File Name: sumOfArray.c
	> Author: li
	> Mail: menglee@cumt.edu.cn 
	> Created Time: Tue 12 Dec 2017 09:48:19 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i;
    int arr[] = {10, 20, 60, 80, 35, 89, 36, 54, 83, 56};
    int elements = sizeof(arr)/sizeof(arr[0]);
    int total = sum(arr, elements);

    printf("sum( ");
    for (i=0; i<elements; i++)
        printf("%d ", arr[i]);
    printf(") is %d\n", total);
    return 0;
}

int sum(int x[], int n)
{
    int j, t=0;
    for (j=0; j<n; j++)
        t += x[j];
    return 0;
}
