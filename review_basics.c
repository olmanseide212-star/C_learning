#include <stdio.h>

int main() {
    // 💡 看到你的 Python 抽卡代码了，我们直接用“原神抽卡”来复习 C 语言的这三大核心！

    // 【1. if 分支：判定抽卡结果】
    // 作用：面对不同情况，做出不同反应（像十字路口）
    printf("--- 1. if 分支复习 (抽卡判定) ---\n");
    int luck = 95; // 假设你的幸运值是 95
    if (luck >= 90) {
        printf("🌟 哇！出金了！\n");
    } else if (luck >= 20) {
        printf("💜 出紫了，也不错。\n");
    } else {
        printf("💙 蓝天白云...\n");
    }

    // 【2. for 循环：十连抽】
    // 作用：明确知道要重复多少次的时候用它（像批量生产）
    printf("\n--- 2. for 循环复习 (十连抽) ---\n");
    // i++ 的意思是 i = i + 1
    for (int i = 1; i <= 5; i++) {
        printf("流星划过... 这是你的第 %d 抽\n", i);
    }

    // 【3. while 循环：体力消耗机制】
    // 作用：不知道要重复多少次，只知道“条件满足就一直干”（像无底洞）
    printf("\n--- 3. while 循环复习 (刷圣遗物) ---\n");
    int energy = 60; // 假设你有 60 树脂
    while (energy >= 20) {
        printf("打了一次副本，消耗 20 树脂。剩余树脂: %d\n", energy - 20);
        energy = energy - 20;
    }
    printf("树脂不足，请明天再来！\n");

    return 0;
}
