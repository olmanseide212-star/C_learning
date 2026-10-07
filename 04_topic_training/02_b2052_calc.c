/**
 * ============================================================================
 * 洛谷题号：B2052 简单计算器
 * 题目链接：https://www.luogu.com.cn/problem/B2052
 * 
 * 【考核核心】：switch 分支语句、字符读取、除以 0 特判
 * 
 * 【题目描述】
 * 输入两个整数和一个运算符（+、-、*、/），输出运算结果。
 * 1. 如果运算符是 '/' 且第二个整数是 0，输出："Divided by zero!"
 * 2. 如果运算符不是 +、-、*、/ 中的任何一个，输出："Invalid operator!"
 * 
 * 【输入样例 1】
 * 1 2 +
 * 【输出样例 1】
 * 3
 * 
 * 【输入样例 2】
 * 10 0 /
 * 【输出样例 2】
 * Divided by zero!
 * 
 * 【输入样例 3】
 * 1 1 %
 * 【输出样例 3】
 * Invalid operator!
 * ============================================================================
 */

#include <stdio.h>
int main() {
    int a, b;
    char op;
    scanf("%d %d %c",&a,&b,&op);
    switch (op) {
        case '+':printf("%d\n",a + b);break;
        case '-':printf("%d\n",a - b);break;
        case '*':printf("%d\n",a * b);break;
        case '/':
            if (b == 0) printf("Divided by zero!");
            else printf("%d\n",a / b);
            break;
        default: printf("Invalid operator!");break;
    }
    return 0;
}







    
    

