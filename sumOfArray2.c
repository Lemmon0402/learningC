/*************************************************************************
	> File Name: sumOfArray2.c
	> Author: li
	> Mail: menglee@cumt.edu.cn 
	> Created Time: Thu 14 Dec 2017 04:52:25 PM CST
 ************************************************************************/

#include<stdio.h>

int sum(int [][2], int, int);

int main()
{
    int i, j, row, column, total = 0;
    int arr2[][2] = {20, 50, 63, 58, 69, 63, 98, 54};
    int elements = sizeof(arr2)/sizeof(arr2[0][0]);
    row = elements / 2;
    column = 2;
    total = sum(arr2, row, column);
    printf("there are %d elements in the array\n", elements);
    printf("sum(\n");
    for (i=0; i<row; i++){
        for  (j=0; j<column; j++)
            printf("%3d ", arr2[i][j]);
        printf("\n");
    }
    printf(") is %d\n", total);
    return 0;
}

int sum(int p2[][2], int n, int m)
{
    int i, j, t=0;
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            t += p2[i][j];
    return t;
}
