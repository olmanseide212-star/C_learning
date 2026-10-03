#include <stdio.h>

// 1. 这里是我们自己定义的函数！
// 它的名字叫 get_max (找最大值)
// 它需要外界给它两个整数作为原料：int a, int b
// 它的返回值类型是 int (算完之后会交出一个整数)
int get_max(int a, int b) {
    if (a > b) {
        return a;  // 这里的 return 不是结束整个程序，而是把 a 扔回给调用者
    } else {
        return b;
    }
}

// 2. 程序的总指挥部
int main() {
    int x, y;
    printf("请输入两个数字，我来帮你找出最大的那个：\n");
    scanf("%d %d", &x, &y);
    
    // 3. 在这里“雇佣” get_max 函数帮我们干活
    // 把 x 和 y 扔给它，并用一个叫 result 的箱子接住它的返回值
    int result = get_max(x, y);
    
    printf("最大的数字是：%d\n", result);
    
    return 0; // main 函数的 return 才是真正的关机下班
}
