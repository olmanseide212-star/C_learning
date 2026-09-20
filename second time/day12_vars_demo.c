#include <stdio.h>

int main() {
    // 1. 整数家族 (int) -> 占位符 %d
    int apples = 10;
    
    // 2. 超大整数家族 (long long) -> 占位符 %lld
    // 当数字超过 21 亿时，必须用 long long！
    long long money = 9999999999999; 
    
    // 3. 小数家族 (double) -> 占位符 %f 
    // (⚠️ ACM 强烈建议：永远用 double 代替 float，精度更高，不易出错)
    double pi = 3.1415926535;
    
    // 4. 单字符家族 (char) -> 占位符 %c
    char grade = 'A';
    
    printf("--- 变量拓展演示 ---\n");
    
    // 正常打印
    printf("整数测试：我有 %d 个苹果。\n", apples);
    printf("超大整数：首富的存款是 %lld 元。\n", money);
    printf("字符测试：我的评级是 %c。\n", grade);
    
    // 🎯 小数的高级排版测试
    printf("\n--- 小数的进阶玩法 ---\n");
    printf("默认打印：圆周率是 %f\n", pi);          // 默认保留 6 位
    printf("保留2位：圆周率是 %.2f (注意：被四舍五入了！)\n", pi); 
    printf("保留4位：圆周率是 %.4f\n", pi);
    
    return 0;
}
