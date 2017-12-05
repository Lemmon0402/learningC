/*************************************************************************
	> File Name: style_control.c
	> Author: 
	> Mail: 
	> Created Time: 2017年11月30日 星期四 20时59分05秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    char c = 'X';
    char s[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 425;
    short int j = 17;
    unsigned int u = 0xf179U;
    long int l = 75000L;
    long long int L = 0x1234567923456795LL;
    float f = 12.987f;
    double d = -56.5659;
    char *cp = &c;
    int *ip = &i;
    int c1, c2;

    printf("integers:\n");
    printf("%i %o %x %u\n", i, i, i, i);
    printf("%x %X %#x  %#X\n", i, i, i, i);
    printf("%+i %i %07i %.7i\n", i, i, i, i);
    printf("%i %o %x %u\n", j, j, j, j);
    printf("%i %o %x %u\n", u, u, u, u);
    printf("%ld  %lo %lx %lu\n", l, l, l, l);
    printf("%lli %llo %llx %llu\n", L, L, L, L);

    printf("\nFloats and Doubles:\n");
    printf("%f %e %g\n", f, f, f);
    printf("%.2f %.2e\n", f, f);
    printf("%.0f %.0e\n", f, f);
    printf("%7.2f %7.2e\n", f, f);
    printf("%f %e %g\n", d, d, d);
    printf("%.*f\n", 3, d);
    printf("%*.*f\n", 8, 2, d);

    printf("\nCharacters;\n");
    printf("%c\n", c);
    printf("%3c%3c\n", c, c);
    printf("%x\n", c);

}
