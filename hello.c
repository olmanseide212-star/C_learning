#include <stdio.h>

int main() {
    // 1. 打印输出 (Output)
    // \n 表示换行
    printf("你好，大学！欢迎开始你的C语言学习之旅！\n");

    // 2. 声明变量 (Variables)
    // 声明一个整数类型的变量，名字叫 age
    int age;
    // int score;
    // 3. 询问并读取第一个信息
    // printf("请输入你的年龄: ");
    scanf("%d", &age);
    int score;
    // 4. 询问并读取第二个信息
    // printf("请输入你的高考分数: ");
    scanf("%d", &score);
    
    // 5. 将变量和文字结合输出
    printf("你今年 %d 岁，正是学习编程的大好年华！\n", age);
    printf("你今年高考 %d 分，恭喜来到杭师大！\n", score);

    // 返回 0，告诉操作系统程序正常结束
    return 0;
}
