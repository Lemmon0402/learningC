/*************************************************************************
	> File Name: chapter2.c
	> Author: li 
	> Mail: lemmon0402@gmail.com
	> Created Time: Thu 05 Jan 2017 06:56:57 PM CST
 ************************************************************************/

#include<stdio.h>

int main()
{
    int velocity;
    printf("Please input velocity:");
    scanf("%d", &velocity);
    if(velocity >= 60)
        printf("overspeed!\n");
    else
        printf("normal\n");
}
