/*************************************************************************
	> File Name: chapter5.c
	> Author: li 
	> Mail: lemmon0402@gmail.com
	> Created Time: Sat 07 Jan 2017 10:25:20 AM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int i, j, n, x, a[n];
    printf("input the number of data n:");
    scanf("%d", &n);
    printf("input %d integer:", n);
    scanf("%d", &x);
    for(i=0;i<n;i++){
        if(x>a[i]) continue;
        j = n -1;
        while(j >= i){
            a[j] = a[j+1];
            j++;
        }
        break;
    }
    if(i==n) a[n]=x;
    for(i=0; i<n+1;i++)
        printf("%d", a[i]);
    putchar('\n');
    return 0;
}
