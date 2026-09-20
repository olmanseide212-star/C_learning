// #include <stdio.h>

// int main() {
//     // 1. 打印输出 (Output)
//     // \n 表示换行
//     printf("你好，大学！欢迎开始你的C语言学习之旅！\n");

//     // 2. 声明变量 (Variables)
//     // 声明一个整数类型的变量，名字叫 age
//     int age;
//     // int score;
//     // 3. 询问并读取第一个信息
//     // printf("请输入你的年龄: ");
//     scanf("%d", &age);
//     int score;
//     // 4. 询问并读取第二个信息
//     // printf("请输入你的高考分数: ");
//     scanf("%d", &score);
    
//     // 5. 将变量和文字结合输出
//     printf("你今年 %d 岁，正是学习编程的大好年华！\n", age);
//     printf("你今年高考 %d 分，恭喜来到杭师大！\n", score);

//     // 返回 0，告诉操作系统程序正常结束
//     return 0;
// }



// #include <stdio.h>
// int main() {
//     char c1;
//     char c2;
//     scanf("%c",&c1);
//     c2 = c1 + 32;
//     printf("%c\n",c2);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     char c1;
//     scanf("%c",&c1);
//     printf("DEC:%d\n",c1);
//     printf("OCT:%o\n",c1);
//     printf("HEX:%x\n",c1);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     double a;
//     int b;
//     scanf("%lf",&a);
//     b = (int)a;
//     printf("%d\n",b);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int T;
//     scanf("%d",&T);
//     for (int i = 1;i <= T;i++){
//         double n;
//         int m;
//         double total;
//         scanf("%lf %d",&n,&m);
//         total = n / m;
//         return total;
//         printf("%lf\n",total);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int T;
//     scanf("%d",&T);
//     int arr[T];
//     double total[105];
//     for (int i = 1;i <= T;i++){
//         double n,m;
//         scanf("%lf %lf",&n,&m);
//         total[i] = n / m;
//     }
//     for (int i = 1;i <= T;i++){
//         printf("%.2f\n",total[i]);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int T;
//     scanf ("%d",&T);
//     while (T--) {
//         int n;
//         scanf ("%d",&n);
//         if (n % 3 == 1) {
//             printf("showshowshow\n");
//         }
//         else {
//             printf("forever love\n");
//         }
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int T;
//     scanf ("%d",&T);
//     while(T--){
//         int n;
//         scanf("%d",&n);
//         printf("%o\n",n);
//     }
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     double c,f;
//     scanf("%lf",&c);
//     f = 9.0/5 *c +32;
//     printf ("%.2f\n",f);
//     return 0;
// }


// #include <stdio.h>
// int main() {
//     int T;
//     scanf("%d",&T);
//     while (T--){
//         int n;
//         scanf("%d",&n);
//         if (n % 3 == 0 && n % 2 == 0){
//             printf("%d divisible by 2 and 3? 1\n",n);
//         }
//         else{
//             printf("%d divisible by 2 and 3? 0\n",n);
//         }
//         if (n % 3 == 0 || n % 2 == 0){
//             printf("%d divisible by 2 or 3? 1",n);
//         }
//         else{
//             printf("%d divisible by 2 or 3? 0",n);
//         }
//         if ()




















// #include <stdio.h>
// #include <string.h>
// int main () {
//     char input[50];
//     scanf("%s",input);
//     int len = strlen(input);
//     if (len <= 10) {
//         printf("GOOD\n");
//     }
//     else{
//         printf("BAD\n");
//     }
//     return 0;
// }