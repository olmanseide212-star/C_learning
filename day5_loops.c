#include <stdio.h>

int main() {
    // 【第一部分：while 循环复习】
    printf("--- 1. while 循环发射火箭 ---\n");
    int count = 5;
    while (count > 0) {
        printf("倒计时：%d\n", count);
        count--; // count-- 是一种非常常见的缩写，完全等同于 count = count - 1
    }
    printf("火箭发射！\n\n");

    // 【第二部分：for 循环（ACM 最常用）】
    // for(初始状态; 运行条件; 每次循环后要做的动作)
    printf("--- 2. for 循环数数 ---\n");
    for (int i = 1; i <= 5; i++) {
        printf("这是 for 循环的第 %d 次\n", i);
    }
    printf("\n");

    // 【第三部分：break（砸门跑路）和 continue（跳过本次）】
    printf("--- 3. break 与 continue 魔法 ---\n");
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            printf(">> 遇到3，跳过！（continue）\n");
            continue; // 遇到 continue，下面的 printf 就不会执行了，直接进入第 4 次循环
        }
        if (i == 5) {
            printf(">> 遇到5，直接砸门跑路！（break）\n");
            break; // 遇到 break，立刻彻底摧毁这个循环，无论后面还有多少次没跑完
        }
        printf("当前数字是: %d\n", i);
    }

}
