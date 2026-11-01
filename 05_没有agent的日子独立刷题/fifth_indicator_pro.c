// A指针专题翻译
// #include <stdio.h>
// int main (){
//     char str[10005];
//     while (fgets(str,10005,stdin) != NULL){
//         char *p = str;
//         printf("%c",*p);
//         for (char *i = p+1;*i != '\0';i ++){
//             if (*i == ' ' || *i != *(i-1)) printf("%c",*i);
//         }
//     }
//     return 0;
// }
// B字符串比较
// #include <stdio.h>
// int stremp(char*p1,char*p2){
//     while(*p1 != '\0'){
//         if (*p1 != *p2){
//             return (*p1 - *p2);
//         }
//         p1++;p2++; 
//     }
//     return 0;
// }
// int main (){
//     char s1[105],s2[105];
//     while(scanf("%s %s",s1,s2) != EOF){
//         printf("%d\n",stremp(s1,s2));
//     }
//     return 0;
// }
//C矩阵转置
// #include <stdio.h>
// int main (){
//     int a[3][3];
//     int *p = &a[0][0];
//     int count = 0;
//     while(scanf("%d",p) != EOF){
//         for (int i = 1;i < 9;i ++){
//             scanf("%d",p + i);
//         }
//         if (count > 0) printf("\n");
//         for (int i = 0;i < 3;i ++){
//             for (int j = 0;j < 3;j ++){
//                 printf("%d",*(p + 3*j + i));
//                 if (j < 2) printf(" ");
//             }
//             printf("\n");
//         }
//         count ++;
//     }
//     return 0;
// }

//D逆序排列
// #include <stdio.h>
// int main(){
//     int N;
//     while(scanf("%d",&N) != EOF){
//         int a[N];
//         int *p = a;
//         int n = N;
//         while(n--){
//             scanf("%d",p);
//             p ++;
//         }
//         int *left = a;
//         int *right = &a[N-1];
//         while(left < right){
//             int temp = *left;
//             *left = *right;
//             *right = temp;
//             left ++;
//             right --;
//         }
//         n = N;
//         p = a;
//         while(n--){
//             printf("%d",*p);
//             if (n > 0) printf(" ");
//             p ++;
//         }
//         printf("\n");
//     }
//     return 0;
// }
//E字符串（指针数组）
// #include <stdio.h>
// #include <string.h>
// int main (){
//     char *ext[3] = {".doc",".xls",".ppt"};
//     char str[105];
//     scanf("%s",str);
//     char *p = str;
//     while(*p != '\0' && *p != '.'){
//         p ++;
//     }
//     char a[6];
//     for (char *i = p;*i != '\0';i ++){
//         a[i - p] = *i;
//     }
//     char *stytle[3] = {"Word","Excel","PowerPoint"};
//     for (int i = 0;i < 3;i ++){
//         if (strcmp(stytle[i], ext[i]) == 0) printf("%s\n",stytle[i]);
//     }
    // if (strcmp(a,ext[0]) == 0) printf("Word\n");
    // else if (strcmp(a,ext[1]) == 0) printf("Excel\n");
    // else if (strcmp(a,ext[2]) == 0) printf("PowerPoint\n");
//     return 0;
// }
//更好的方法
// #include <stdio.h>
// #include <string.h> // 必须引入这个头文件才能用 strstr

// int main() {
//     char filename[105];
//     while (scanf("%s", filename) != EOF) {
//         // 直接用 strstr 检查文件名里是否包含对应的后缀
//         if (strstr(filename, ".doc") != NULL) {
//             printf("Word\n");
//         } 
//         else if (strstr(filename, ".xls") != NULL) {
//             printf("Excel\n");
//         } 
//         else if (strstr(filename, ".ppt") != NULL) {
//             printf("PowerPoint\n");
//         }
//     }
//     return 0;
// }
    
//F矩阵乘法



// G素数判断（普通）
// int isPrime(int n){
//     if (n == 0 || n == 1) return 0;
//     if (n == 2) return 1;
//     for (int i = 2;i * i <= n;i ++){
//         if (n % i == 0) {
//             return 0;
//         }
//     }
//     return 1;
// }

//H函数训练之爬楼梯
#include <stdio.h>
int pa(int h){
    int count = 0;
    for (int i = 0;3 * i <= h;i ++){
        h -= 3 * i;
        for (int j = 0;2 * j <= h;j ++){
            count ++;
        }
    }
    return count;
}
int main (){
    int T;
    if (scanf("%d",&T) != EOF){
        while(T--){
            int h;
            scanf("%d",&h);
            printf("%d\n",pa(h));
        }
    }
    return 0;
}




    
