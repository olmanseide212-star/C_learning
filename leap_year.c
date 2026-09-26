// #include <stdio.h>
// int main() {
//     int year; // 改进1：变量命名规范化
//     scanf("%d", &year);
    
//     // 改进2：合并条件 (ACM 老手写法)
//     // 既然两种情况都是输出 YES，我们可以用 || (或者) 把它们连成一句话
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("YES\n");
//     } else {
//         printf("NO\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main () {
//     int a,b,c,d,M,f,g;
//     while(scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&M,&f,&g) != EOF){
//         double sum = 0;
//         if (a != 0){
//             sum = sum + (double)M / a;
//         }
//         if (b != 0){
//             sum = sum + (double)M / b;
//         }
//         if (c != 0){
//             sum = sum + (double)M / c;
//         }
//         if (d != 0){
//             sum = sum + (double)M / d;
//         }
//         if (f == 1){
//             sum = sum + 5;
//         }
//         if (g == 1){
//             sum = sum + 5;
//         }
//         if (g == 2){
//             sum = sum + 3;
//         }
//         if (g == 3){
//             sum = sum + 1;
//         }
//         printf("%.2f\n",sum);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main () {
//     int p[4]; // 装 4 道题的人数
//     int M, f, g;
    
//     // 奖金表：第 0, 1, 2, 3 名对应的钱（第 0 名是占位用的）
//     int prize[4] = {0, 5, 3, 1}; 
    
//     while(scanf("%d %d %d %d %d %d %d", &p[0], &p[1], &p[2], &p[3], &M, &f, &g) != EOF) {
        
//         // 初始资金 = AK奖(f*5) + 排名奖(查表)
//         double sum = f * 5 + prize[g]; 
        
//         // 循环四道题的奖金
//         for (int i = 0; i < 4; i++) {
//             if (p[i] != 0) {
//                 sum += (double)M / p[i];
//             }
//         }
        
//         printf("%.2f\n", sum);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int T;
//     scanf("%d",&T);
//     while(T--){
//         int n;
//         int count = 10000;
//         scanf("%d",&n);
//         for(int a = 0;a <= n/100;a++){
//             for(int b = 0;b <= n/50;b++){
//                 for(int c = 0;c <= n/10;c++){
//                     for(int d = 0;d <= n/10;d++){
//                         for(int e = 0;e <= n;e++){
//                             if (100 * a + 50 * b + 10 * c + 5 * d + e == n && a+b+c+d+e <count){
//                                 count = a+b+c+d+e;
//                                 printf("%d",count);
//                                 break;
//                             }
//                         }
//                     }
//                 }
//             }
//         }
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int T;
//     scanf("%d",&T);
//     while(T--){
//         int n,a,b,c,d,e,f,g,h,i;
//         scanf("%d",&n);
//         a = n / 100;
//         b = n % 100;
//         c = b / 50;
//         d = b % 50;
//         e = d / 10;
//         f = d % 10;
//         g = f / 5;
//         h = f % 5;
//         i = h / 1;
//         printf("%d\n",a + c + e + g + i);
//     }
//     return 0;
// }



// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n;
//     while(scanf("%d",&n) != EOF){
//         double sum = 0;
//         for(int i = 1 ;i <= n;i++){
//             sum = sum + (double) pow(-1,i-1)/(2 * i - 1);
//         }
//         printf("%.5f\n",sum);
//     }
//     return 0;
// }

// double sum = 0;
// double sign = 1.0; // 制造一个符号翻转器

// for(int i = 1; i <= n; i++){
//     sum = sum + sign / (2 * i - 1);
//     sign = -sign; // 每次用完，直接翻转符号！（正变负，负变正）
// }














// #include<stdio.h>
// int main() {
//     int n;
//     while(scanf("%d",&n) != EOF){
//         int sum = 0;
//         int arr[105];
//         for (int i = 1;i <= n;i++){
//             scanf("%d",&arr[i]);
//         }
//         for(int i = 1;i <= n;i++){
//             if(arr[i] % 2 != 0){
//                 sum += arr[i];
//             }
//         }
//         printf("%d\n",sum);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main () {
//     int n;
//     while(scanf("%d",&n) != EOF){
//         int sum1 = 0;
//         int sum2 = 0;
//         double sum3 = 0;
//         int i;
//         for (int j = 1;j <= n;j ++){
//             scanf("%d",&i);
//             if (i % 2 == 0){
//                 sum1 += i;
//                 sum2 += i * i;
//                 sum3 += 1.0 / i;
//             }
//         }
//         printf("%d %d %.2f\n",sum1,sum2,sum3);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main() {
//     int a,b;
//     scanf("%d %d",&a,&b);
//     for(int i = a;i <= b;i++){
//         int is_prime = 1;
//         for(int j = 2;j < i;j++){
//             if(i % j == 0){
//                 is_prime = 0;
//                 break;
//             }
//         }
//         if (is_prime == 1){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }



                
            
        
        

