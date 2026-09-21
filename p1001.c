// #include <stdio.h>

// int main() {
//     int a;
//     int b;
//     scanf("%d",&a);
//     scanf("%d",&b);
//     // 严格遵守 OJ 规则：只输出最终结果，不要输出等式
//     printf("%d\n", a + b);
//     return 0;
// }



#include <stdio.h>
int main(){
    int t,a,b,c,d;
    scanf("%d",&t);
    a = t / 3600;
    d = t % 3600;
    b = d / 60;
    c = t - 3600 * a - 60 * b;
    printf("%d %d %d\n",a,b,c);
    return 0;
}