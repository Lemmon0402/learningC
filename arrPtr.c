/*************************************************************************
	> File Name: arrPtr.c
	> Author: li
	> Mail: menglee@cumt.edu.cn 
	> Created Time: Tue 05 Dec 2017 07:44:46 PM CST
 ************************************************************************/

#include<stdio.h>

int arraySum(int i[], const int n)
{
    int sum = 0, *ptr;
    int *const arrayEnd = i + n;

    for (ptr=i; ptr<arrayEnd; ++ptr){
        sum += *ptr;

    return sum;
    }
}

int main()
{
    int i[] = {1, 5, -9, 8, 6, 74, 89, -96, 8};

    int arraySum(int i[], const int n);

    printf("the sum is %i\n", arraySum(i, 9));

    printf("%p\n", i);
    printf("%p\n", i+1);
    printf("\n");
    printf("%p\n", &i[0]);
    printf("%p\n", &i[1]);

}
