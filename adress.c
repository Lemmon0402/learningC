/*************************************************************************
	> File Name: adress.c
	> Author: 
	> Mail: 
	> Created Time: 2017年12月03日 星期日 20时26分32秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    /*int x = 100, y = 200;
    printf("x is %i, y is %i\n", x, y);
    printf("the adress of x is %p, the adress of y is %p\n", &x, &y);*/

    /*int a[5], i;

    for (i=0; i<5; ++i){
        printf("please type a[%i]\n", i);
        scanf("%i", &a[i]);
    }
        
        for (i=0; i<5; ++i){
            printf("x[%i] is %i, the adress of x[%i] is %p\n", i, a[i], i, &a[i]);
        }*/

    struct employee{
        char id[7];
        char name[20];
        int salary;
    };

    struct employee manager = {"D1", "Peter", 35000};

    printf("&manage = %x\n", &manager);
    printf("manager.id = %x\n", manager.id);
    printf("&manager.salary = %x\n\n", &manager.salary);

    return 0;
}
