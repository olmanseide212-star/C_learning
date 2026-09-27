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



// #include<stdio.h>
// int main (){
//     int T;
//     scanf("%d",&T);
//     while(T--){
//         int a,b,c;
//         int sum1 = 0;
//         int sum2 = 0;
//         scanf("%d %d %d",&a,&b,&c);
//         for (int i = 1;i <= a;i ++){
//             sum1 += 300 * (2 * i - 1);
//         }
//         for (int i = a + 1;i <= a + b;i ++){
//             sum1 += 100 * (2 * i - 1);
//         }
//         for (int i = a + b + 1;i <= a + b + c;i ++){
//             sum1 += 50 * (2 * i - 1);
//         }
//         for (int i = 1;i <= c;i ++){
//             sum2 += 50 * (2 * i - 1);
//         }
//         for (int i = c + 1;i <= b + c;i ++){
//             sum2 += 100 * (2 * i - 1);
//         }
//         for (int i = b + c + 1;i <= a + b + c;i ++){
//             sum2 += 300 * (2 * i - 1);
//         }
//         printf("%d %d\n",sum1,sum2);
//     }
//     return 0;
// }



// #include<stdio.h>
// #include<string.h>
// int main () {
//     char N[105];
//     while(scanf("%s",N) != EOF){
//         int count = strlen(N);
//         if (N[count - 3] != '0'){
//             strcat(N,"ss");
//         }
//         else{
//             strcat(N,"rd");
//         }
//         if (N[count - 2] == '1'||N[count - 2] == '5'||N[count - 2] == '9'){
//             strcat(N,"nd");
//         }
//         else {
//             strcat(N,"ss");
//         }
//         if (N[count - 1] == '3'||N[count - 1] == '7'||N[count - 1] == '2'){
//             strcat(N,"st");
//         }
//         else{
//             strcat(N,"ss");
//         }
//         printf("%s\n",N);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main() {
//     int num;
//     while (scanf("%d",&num) != EOF){
//         int bai = (num / 100) % 10;
//         int shi = (num / 10) % 10;
//         int ge = num % 10;
//         printf("%d",num);
//         if (bai != 0){
//             printf("rd");
//         }
//         else{
//             printf("ss");
//         }
//         if (shi == 1||shi == 5||shi == 9){
//             printf("nd");
//         }
//         else{
//             printf("ss");
//         }
//         if (ge == 3||ge == 7||ge == 2){
//             printf("st\n");
//         }
//         else{
//             printf("ss\n");
//         }
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int num;
//     while(scanf("%d",&num) != EOF){
//         int bai = (num / 100) % 10;
//         int shi = (num / 10) % 10;
//         int ge = num % 10;
//         printf("%d",num);
//         printf("%s",(bai != 0) ?"rd" :"ss");
//         printf("%s",(shi == 1||shi == 5||shi == 9) ?"nd":"ss");
//         printf("%s\n",(ge == 3||ge == 7||ge == 2) ?"st":"ss");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int VUL,D;
//     while(scanf("%d %d",&VUL,&D) != EOF){
//         int sum = 0;
//         int count = 0;
//         for (int i = 1; ;i ++){
//             if(i % 2 != 0){
//                 sum += D * (i + 1) / 2;
//                 count += (i + 1) / 2;
//             }
//             else{
//                 count += 1;
//             }
//             if (sum >= VUL){
//                 printf ("%d\n",count);
//                 break;
//             }
//         }
//     }
//     return 0;
// }



// #include<stdio.h>
// int main (){
//     int VUL,D;
//     while(scanf("%d %d",&VUL,&D) != EOF){
//         int time = 0;
//         int target = 1;
//         int drop_count = 0;
//         while(VUL > 0){
//             VUL -= D;
//             time++;
//             drop_count++;
//             if (VUL <= 0){
//                 break;
//             }
//             if (drop_count == target){
//                 time++;
//                 target++;
//                 drop_count = 0;
//             }
//         }
//         printf("%d\n",time);
//     }
//     return 0;
// }



// #include <stdio.h>
// #include <math.h>

// int main() {
//     int VUL, D;
//     while (scanf("%d %d", &VUL, &D) != EOF) {
//         int n = (VUL + D - 1) / D;               // 向上取整算总滴数
//         int rest = (sqrt(8.0 * n - 3) - 1) / 2;  // 一步算出总休息秒数
//         printf("%d\n", n + rest);                // 滴水秒数 + 休息秒数
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n-1];
//     int max = 0;
//     int min = 10000000000000;
//     int sum = 0;
//     for (int i = 0;i < n;i ++){
//         scanf("%d",&a[i]);
//         sum += a[i];
//         if (a[i] > max){
//             max = a[i];
//         }
//         if (a[i] < min){
//             min = a[i];
//         }
//     }
//     printf("%d %d %.1f\n",max,min,(double)sum / n);
//     return 0;
// }





// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a[n];
//     int sum = 0;
//     scanf("%d",&a[0]);
//     int min = a[0];
//     int max = a[0];
//     sum += a[0];
//     for (int i = 1;i < n;i ++){
//         scanf("%d",&a[i]);
//         sum += a[i];
//         if (a[i] > max){
//             max = a[i];
//         }
//         if (a[i] < min){
//             min = a[i];
//         }
//     }
//     printf("%d %d %.1f\n",max,min,(double)sum / n);
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int a,b,c,t;
//     scanf("%d %d %d",&a,&b,&c);
//     if (a > b){
//         t = a;
//         a = b;
//         b = t;
//     }
//     if (a > c) {
//         t = a;
//         a = c;
//         c = t;
//     }
//     if (b > c){
//         t = b;
//         b = c;
//         c = t;
//     }
//     printf("%d %d %d\n",a,b,c);
//     return 0;
// }
