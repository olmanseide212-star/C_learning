#include <stdio.h>

int main() {
    int score;
    printf("请输入你的考试分数（0-100）：");
    scanf("%d", &score);

    // 【第一部分：基础的 if / else】
    printf("\n--- 第一部分：及格判定 ---\n");
    if (score >= 60) {
        printf("恭喜，及格了！\n");
    } else {
        printf("很遗憾，准备补考吧。\n");
    }

    // 【第二部分：多重分支 (if...else if...else)】
    printf("\n--- 第二部分：成绩评级 ---\n");
    if (score >= 90) {
        printf("评级：优秀 (A)\n");
    } else if (score >= 80) {
        printf("评级：良好 (B)\n");
    } else if (score >= 60) {
        printf("评级：及格 (C)\n");
    } else {
        printf("评级：不及格 (D)\n");
    }

    // 【第三部分：新手必踩的致命大坑（== 还是 =）】
    printf("\n--- 第三部分：满分检测 ---\n");
    // ⚠️ 警告：在C语言里，一个等号 = 是“赋值”（把右边的数塞给左边的盒子）
    // 两个等号 == 才是“判断是否相等”！
    // 如果你不小心写成了 if (score = 100)，不管你输入什么，电脑都会强行把 score 变成 100，并且判定为真！
    if (score == 100) {
        printf("满分大佬，受我一拜！\n");
    }

    // 【第四部分：多个条件的组合（逻辑运算符）】
    printf("\n--- 第四部分：合法性与逻辑组合 ---\n");
    // && 代表“并且” (And)：必须同时满足两边的条件
    // || 代表“或者” (Or) ：只要满足其中一边即可
    if (score < 0 || score > 100) {
        printf("警告：你输入的分数不合法（怎么可能小于0或者大于100呢？）\n");
    } else if (score >= 60 && score < 90) {
        printf("你的成绩处于及格到优秀之间的普通区间。\n");
    }

    return 0;
}
