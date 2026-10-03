#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n,a,b,c,d,e,f,g,h,i;
        scanf("%d",&n);
        a = n / 100;
        b = n % 100;
        c = b / 50;
        d = b % 50;
        e = d / 10;
        f = d % 10;
        g = f / 5;
        h = f % 5;
        i = h / 1;
        printf("%d\n",a + c + e + g + i);
    }
    return 0;
}
