// #include <stdio.h>
// int max(int a,int b){
//     if (a > b) {
//         return a;
//     }
//     else {
//         return b;
//     }
// }
// int main (){
//     int x,y;
//     scanf("%d %d",&x,&y);
//     int c = max(x,y);
//     printf("max = %d\n",c);
//     return 0;
// }



// #include<stdio.h>
// int max(int a,int b,int c){
//     if (a > b) {
//         if (a < c){
//         printf("%d %d %d\n",c,a,b);
//         }
//         else{
//             if (c > b){
//                 printf("%d %d %d\n",a,c,b);
//             }
//             else{
//                 printf("%d %d %d\n",a,b,c);
//             }
//         }
//     }



// #include<stdio.h>
// int main (){
//     int sum = 0;
//     for (int i = 0;i <= 100;i ++){
//         if (i % 2 == 0){
//             sum += i;
//         }
//     }
//     printf("%d\n",sum);
//     return 0;
// }


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int max = 0;
    int min;
    int b;
    int sum =  0;
    for (int i = 0;i < n;i ++){
        scanf("%d ",&a[i]);
        min = a[0];
        sum += a[i];
        if (a[i] > max){
            max = a[i];
        }
        if (a[i] < a[0]){
            min = a[i];
        }
    }
    printf("%d %d %.1f",max,min,(double)sum / n)
    return 0;
}

    
