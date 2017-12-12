/*************************************************************************
	> File Name: functionCall.c
	> Author: li
	> Mail: menglee@cumt.edu.cn 
	> Created Time: Tue 12 Dec 2017 08:45:14 PM CST
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>

double calAverage(double, double);

int main()
{
    double x, y, aver;
    printf("type the float number x and y:\n");
    scanf("%lf %lf", &x, &y);

    aver = calAverage(x, y);
    printf("the averange of x and y is %.2f\n", aver);
    system("PAUSE");
    return 0;
}

double calAverage(double a, double b)
{
    double average;
    average = (a+b)/2;
    return average;
}
