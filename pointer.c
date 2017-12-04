/*************************************************************************
	> File Name: pointer.c
	> Author: 
	> Mail: 
	> Created Time: 2017年12月03日 星期日 21时09分34秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int x = 100, y = 200, *ptr = &x;

    printf("the adress of x is %p, the value is %i\n", &x, x);
    printf("the adress of y is %p, the value is %i\n", &y, y);
    printf("the adress of ptr is %p", &ptr);
    printf("inside ptr is %i\n", ptr);
}
