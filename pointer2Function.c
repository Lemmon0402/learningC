/*************************************************************************
	> File Name: pointer2Function.c
	> Author: li
	> Mail: menglee@cumt.edu.cn 
	> Created Time: Fri 15 Dec 2017 08:31:57 PM CST
 ************************************************************************/

#include<stdio.h>

int add(int, int);
int substract(int, int);
int multiply(int, int);
int divide(int, int);
int (*opration)(int, int);

int main()
{
    int x, y, output;
    printf("please type x and y:\n");
    scanf("%d %d", &x, &y);

    opration = add;
    output = (*opration)(x, y);
    printf("%d + %d = %d\n", x, y, output);

    opration = substract;
    output = (*opration)(x, y);
    printf("%d - %d = %d\n", x, y, output);


    opration = multiply;
    output = (*opration)(x, y);
    printf("%d * %d = %d\n", x, y, output);
    
    opration = divide;
    output = (*opration)(x, y);
    printf("%d / %d = %d\n", x, y, output);

    return 0;
}

int add(int a, int b)
{
    return a+b;
}

int substract(int a, int b)
{
    return a-b;
}

int multiply(int a, int b)
{
    return a*b;
}

int divide(int a, int b)
{
    return a/b;
}

