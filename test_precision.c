#include<stdio.h>
int main () {
    int a=3,b=5,c=6,d=8,M=1,f=1,g=2;
    
    double sum1 = 0;
    sum1 += (float)M / a;
    sum1 += (float)M / b;
    sum1 += (float)M / c;
    sum1 += (float)M / d;
    sum1 += 5;
    sum1 += 3;

    double sum2 = 0;
    sum2 += (double)M / a;
    sum2 += (double)M / b;
    sum2 += (double)M / c;
    sum2 += (double)M / d;
    sum2 += 5;
    sum2 += 3;
    
    printf("accum float: %.2f\n", sum1);
    printf("accum double: %.2f\n", sum2);
    return 0;
}
