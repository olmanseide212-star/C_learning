#include <stdio.h>

int main() {
    printf("=== 1. 进制陷阱演示 ===\n");
    int a = 12;   // 正常的十进制 12
    int b = 012;  // ⚠️ 警告：因为 0 开头，这是八进制！等于十进制的 10
    int c = 0x12; // 因为 0x 开头，这是十六进制！等于十进制的 18
    
    printf("十进制写的 12，真实值是：%d\n", a);
    printf("八进制写的 012，真实值是：%d\n", b);
    printf("十六进制写的 0x12，真实值是：%d\n\n", c);
    
    
    printf("=== 2. 位运算演示 (操作二进制) ===\n");
    int x = 6;  // 二进制: 0110
    int y = 3;  // 二进制: 0011
    
    printf("%d & %d (按位与) = %d\n", x, y, x & y);  // 结果应该是 2 (0010)
    printf("%d | %d (按位或) = %d\n", x, y, x | y);  // 结果应该是 7 (0111)
    printf("%d ^ %d (按位异或) = %d\n\n", x, y, x ^ y); // 结果应该是 5 (0101)
    
    
    printf("=== 3. ACM黑魔法：移位运算 ===\n");
    int num = 10;
    printf("%d 左移 1 位 (num << 1) = %d (相当于乘以2)\n", num, num << 1);
    printf("%d 右移 1 位 (num >> 1) = %d (相当于除以2)\n", num, num >> 1);
    
    return 0;
}
