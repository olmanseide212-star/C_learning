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



// #include <stdio.h>
// int main(){
//     int t,a,b,c,d;
//     scanf("%d",&t);
//     a = t / 3600;
//     d = t % 3600;
//     b = d / 60;
//     c = t - 3600 * a - 60 * b;
//     printf("%d %d %d\n",a,b,c);
//     return 0;
// }




// #include <stdio.h>
// int main(){
















// #include <stdio.h>
// #include <math.h>
// int main (){
//     while (1) {
//         int n;
//         double a,b;
//         scanf("%d",&n);
//         if (n != 0){
//             b = pow(0.7, n);
//             a = 100 * b;
//             printf("%.2f\n",a);
//         }
//         else {
//             break;
//         }
//     }
//     return 0;
// }




// #include <stdio.h>
// #include <string.h>
// int main(){
//     int N;
//     while (scanf("%d",&N) != EOF) {
//         int sum = 0;
//         while (N--){
//             char s[50];
//             scanf("%s",s);
//             int len = strlen(s);
//             if (len == 4) {
//                 sum = sum + 1;
//             }
//         }
//         printf("%d\n",sum);
//     }
//     return 0;
// }



// #include <stdio.h>
// int main () {
//     int x;
//     while(scanf("%d",&x) != EOF){
//         if (x % 1024 == 0 || (x & (x - 1)) == 0) {
//             printf("YES\n");
//         }
//         else {
//             printf("NO\n");
//         }
//     }
//     return 0;
// }



// #include<stdio.h>
// int main (){
//     int n,m;
//     scanf("%d %d",&n,&m);
//     int board[105][105];
//     for(int i = 0;i < n;i ++){
//         for(int j = 0;j < m;j ++) {
//             scanf("%d",&board[i][j]);
//         }
//     }
//     for (int i = 0;i < n;i++){
//         int min_val = board[i][0];
//         int min_j = 0;
//         for (int j = 1;j < m;j++) {
//             if (board[i][j] < min_val) {
//                 min_val = board[i][j];
//                 min_j = j;
//             }
//         }
//         int is_treasure = 1;
//         for (int k = 0; k < n;k ++){
//             if (board[k][min_j] > min_val) {
//                 is_treasure = 0;
//                 break;
//             }
//         }
//         if (is_treasure == 1){
//             printf("(%d,%d)\n",i + 1,min_j + 1);
//         }
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int n;
//     while(scanf("%d",&n) != EOF) {
//         printf("%c",n);
//     }
//     return 0;
// }



// #include<stdio.h>
// int main (){
//     int T;
//     scanf("%d",&T);
//     while(T--){
//         int N;
//         scanf("%d",&N);
//         int min_tip = N;
//         for (int i = 0;i * 150 <= N;i ++){
//             for (int j = 0;j * 200 <= N;j++){
//                 int current_tip = N -i * 150 - j * 200;
//                 if(current_tip < min_tip && current_tip >= 0) {
//                     min_tip = current_tip;
//                 }
//             }
//         }
//         printf("%d\n",min_tip);
//     }
//     return 0;
// }


