#include <stdio.h>
int main() {
    int year; // 改进1：变量命名规范化
    scanf("%d", &year);
    
    // 改进2：合并条件 (ACM 老手写法)
    // 既然两种情况都是输出 YES，我们可以用 || (或者) 把它们连成一句话
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}