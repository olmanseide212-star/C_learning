/**
 * ============================================================================
 * 🎯 指针专项训练
 * 
 * 💡【说明】：
 * 本文件用于系统练习 C 语言指针相关题目，包括：
 * - 指针基础（& 取地址、* 解引用）
 * - 指针与函数（传址修改真身）
 * - 指针与数组（指针遍历、指针算术）
 * - 字符串与指针（char* 操作）
 * 
 * 🛠️【一键编译运行命令】：
 * gcc 04_topic_training/15_pointers_lab.c -o pointers && ./pointers
 * 
 * 📖【配套笔记】：
 * 指针核心知识点与经典例题.md
 * ============================================================================
 */
 #include <stdio.h>
 int main () {
    const char *month[] = {"Oh my God!","January", "February", "March", "April", "May","June", "July", "August", "September", "October", "November", "December"};
    int n;
    while (scanf("%d",&n) != EOF){
        if (n >= 1&&n <= 12) printf("%s\n",*(month + n));
        else printf("%s\n",*month);
    }
    return 0;
}



#include <stdio.h>
int main (){
    int a[10];
    while(scanf("%d",&a[0]) != EOF){
        for (int i = 1;i < 10; i++){
            scanf("%d",&a[i]);
        }
        printf("\n");
        int n = 10;
        int sum = 0;
        for (int *p = a;p < a + 10;p ++){
            sum += *p;
        }
        printf("%.2f\n",(double)sum / 10);
    }
    return 0;
}
    

#include <stdio.h>
int main () {
    int arr[10];
    for (int i = 1;i <= 10; i++){
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    int max = *p;
    int min = *p;
    int sum = 0;
    for (int i = 0;i < 10;i ++){
        if (*(p + i) > max) max = * (p + i);
        if (*(p + i) < min) min = * (p + i);
        sum += *(p + i);
    }
    printf("%d %d %.2f",max,min,(double)sum / 10);
    return 0;
}


#include <stdio.h>
int max(int x, int y){
    return (x > y) ? x : y;
}
int main (){
    int a,b;
    while(scanf("%d %d",&a,&b) != EOF){
        int (*pfun)(int x,int y) = max;
        printf("%d\n",*pfun);
    }
    return 0;
}


#include <stdio.h>
void fun0 (int a) {printf("这是1号函数的打印输出。\n");}
void fun1 (int a) {printf("这是2号函数的打印输出。\n");}
void fun2 (int a) {printf("这是3号函数的打印输出。\n");}
int main (){
    void (*pur[3])(int) = {fun0,fun1,fun2};
    int a;
    while(scanf("%d",&a) != EOF){
        (*(pur+a-1))(a);
    }
    return 0;
}



#include <stdio.h>
int main (){
    int t;
    if (scanf("%d",&t) != EOF){
        while (t--){
            int n,k;
            int a[105][105];
            scanf("%d %d",&n,&k);
            for(int i = 0;i < n; i ++){
                for (int j = 0;j < n; j ++){
                    scanf("%d",&a[i][j]);
                }
            }
            int count = 0;
            for (int i = 0;i < n;i ++){
                for (int j = i+1;j <n;j ++){
                    if (a[i][j] > k) count ++;
                }
            }
            printf("%d\n",count);
        }
    }
    return 0;
} 


#include <stdio.h>
int main (){
    int T;
    scanf("%d",&T);
    while(T--){
        int n,k,m;
        scanf("%d %d %d",&n,&k,&m);
        int a[1005];
        for (int i = 0;i < m;i ++){
            scanf("%d",&a[i]);
        }
        for (int i = 0;i <m;i ++){
            for (int j = i + 1;j < m ;j ++){
                if (a[i] > a[j]){
                    int hhh = a[i];
                    a[i] = a[j];
                    a[j] = hhh;
                }
            }
        }
        int sum = 0;
        for (i = 0;i < k;i ++){
            sum += a[i];
        }
        if (sum > n) printf("%d\n",sum - n);
        else printf("0\n");
    }
    return 0;
}
        
#include <stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int count = 0;
    for (int i = 0;i < n;i ++){
        int a,b,c,d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if ((a * 8 + b * 4 + c * 2 + d) == 10) count ++;
    }
    printf("%d",count);
    return 0;
}



#include <stdio.h>
int main (){
    long long n;
    scanf("%lld",&n);
    int one = n % 10;
    int jiou = one % 2;
    int ans = 1;
    int sum = one;
    n /= 10;
    while (n > 0){
        one = n % 10;
        n /= 10;
        if ((one % 2) ==jiou) {
            sum +=one;
        }
        else {
            ans *= sum;
            jiou = one % 2;
            sum = one;
        }
    }
    ans *= sum;
    printf("%lld",ans);
    return 0;
}