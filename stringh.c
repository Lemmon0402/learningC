/*************************************************************************
	> File Name: foo.c
	> Author: li
	> Mail: menglee@cumt.edu.cn 
	> Created Time: Fri 08 Dec 2017 03:02:54 PM CST
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main()
{
    char bar[] = "string", baz[10], con[20];
    int a;
    strcpy(baz, bar);
    printf("bar is %s\n", bar);
    strcat(bar, baz);
    printf("bar is %s\n", bar);
    printf("baz is %s\n", baz);
    //    printf("con is %s\n", con);
    printf("the length of bar is %lud\n", strlen(bar));

    return 0;
}
