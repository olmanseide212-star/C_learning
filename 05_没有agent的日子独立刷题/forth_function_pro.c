// #include <stdio.h>
// void move (int n,char c1,char c2,char c3){
//     if (n == 1) printf("%c->%c\n",c1,c3);
//     else {
//         move (n - 1,c1,c3,c2);
//         printf("%c->%c\n",c1,c3);
//         move (n-1,c2,c1,c3);
//     }
// }
// int main (){
//     int n;
//     scanf("%d",&n);
//     move (n,'a','b','c');
//     return 0;
// }
//第三题，汉诺塔问题

//番外篇，；洛谷p1036——选组
// #include <stdio.h>
// int n,k;
// int a[21];
// int ans = 0;
// // int is_prime(int x){
// //     if (x < 2) return 0;
// //     int is = 1;
// //     for (int i = 2;i * i <= x;i ++){
// //         if (x % i==0) {
// //             is = 0;return 0;break;
// //         }
// //     }
// //     if (is) return 1;
// // }
// int is_prime(int x){
//     if (x < 2) return 0;
//     for (int i = 2; i * i <= x; i ++){
//         if (x % i == 0) { // 把 2 改成 i
//             return 0;     // 一旦能整除，直接返回 0 结束函数
//         }
//     }
//     return 1; // 循环走完都没返回 0，说明是素数，直接返回 1
// }
// void fbs(int indes,int count,int sum){
//     if (count == k){
//         if (is_prime(sum) == 1) ans ++;
//         return;
//     }
//     if (indes == n) return;
//     fbs (indes + 1,count + 1,sum + a[indes]);
//     fbs (indes + 1,count,sum);
// }
// int main (){
//     scanf("%d %d",&n,&k);
//     for (int i = 0;i < n;i ++){
//         scanf("%d",&a[i]);
//     }
//     fbs (0,0,0);
//     printf("%d\n",ans);
//     return 0;
// }

//D，分苹果约瑟夫环
// #include <stdio.h>
// int jos(int n){
//     int a[1005];
//     for(int i = 0;i <=n;i ++){
//         a[i] = 1;
//     }
//     int remain = n,count = 0,i = 1;
//     while(remain > 1){
//         if (a[i] == 1) {
//             count ++;;
//             if (count == 7) {
//                 a[i] = 0;remain--;count = 0;
//             }
//             else i ++;
//         }
//         else i ++;
//         if (i > n) i = 1;
//     }
//     for (int i = 1;i <=n;i ++){
//         if (a[i] == 1){
//             return i;
//         }
//     }
//     return 0;
// }
// int main (){
//     int n,t;
//     scanf("%d",&t);
//     while(t--){
//         scanf("%d",&n);
//         printf("%d\n",jos(n));
//     }
// }

//E单参数函数
// double happy (double a){
//     if (a == 0) return 0;
//     double x0 = a;
//     double x1 = (x0 + (a / x0))/2;
//     while(fabs(x1 - x0) >= 1e-6){
//         x0 = x1;
//         x1 = (x0 + (a / x0))/2;
//     }
//     return x1;
// }
    
//F多参数函数
// int happy(int year, int month, int day){
//     int a[13];
//     a[1] = 31;a[3] = 31;a[4] = 30;a[5] = 31;a[6]=30;a[7]=31;a[8]=31;a[9]=30;a[10]=31;a[11]=30;a[12]=31;
//     a[2]=(year % 4==0&&year % 100 != 0||year % 400 == 0) ? 29:28;
//     if (month > 12) return -1;
//     else if (day != a[month]) return -2;
//     else return 1;
// }

//G递归函数
void happy(int row){
    if (row < 1) return;
    happy(row-1);
    for (int i = 1;i <= row;i ++){
        printf("%d*%d=%d%c", i, row, i * row, (i == row) ? '\n' : ' ');
    }
}




