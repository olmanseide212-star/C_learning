#include<stdio.h>
int main () {
    double sum1 = 0, sum2 = 0;
    int a=3, b=5, c=6, d=8, M=1;
    sum1 = (float)M/a + (float)M/b + (float)M/c + (float)M/d + 8;
    sum2 = (double)M/a + (double)M/b + (double)M/c + (double)M/d + 8;
    printf("float: %.2f\n", sum1);
    printf("double: %.2f\n", sum2);
    return 0;
}
