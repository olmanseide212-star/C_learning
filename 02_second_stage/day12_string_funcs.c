#include <stdio.h>
#include <string.h> // ⚠️ 今天的主角：字符串工具箱！

int main() {
    // 💡 1. 字符串的本质就是“字符数组”
    // 注意：字符串的结尾一定会偷偷藏一个 '\0' (结束符)
    // 所以如果我们要存 5 个字母的 "Hello"，数组长度至少要是 6！
    char str1[20] = "Hello"; 
    char str2[20] = "World";
    
    printf("--- 1. 测量长度 (strlen) ---\n");
    // strlen 会帮你数里面有几个字母，遇到 '\0' 就停下来
    // 注意：它不会把结尾隐藏的 '\0' 算进去！
    int len = strlen(str1);
    printf("字符串 str1 的长度是：%d\n\n", len);
    
    
    printf("--- 2. 复制字符串 (strcpy) ---\n");
    // strcpy (string copy)，把后面的复制到前面去，就像“覆盖存档”一样
    // 语法：strcpy(目标数组, 来源数组或字符串)
    char secret[50];
    strcpy(secret, "I love ACM!");
    printf("把秘密复制进 secret 盒子里：%s\n\n", secret);
    
    
    printf("--- 3. 比较字符串 (strcmp) ---\n");
    // strcmp (string compare)，用来比较两个字符串一不一样
    // ⚠️ 极其反直觉：如果两个字符串【完全一样】，它会返回 0！（而不是 1）
    // 如果不一样，它会返回它们在字典里的顺序差值。
    char pwd1[] = "123456";
    char pwd2[] = "123456";
    
    if (strcmp(pwd1, pwd2) == 0) {
        printf("密码一致，允许登录！\n\n");
    } else {
        printf("密码错误！\n\n");
    }
    
    
    printf("--- 4. 拼接字符串 (strcat) ---\n");
    // strcat (string concatenate)，把后面的拼接到前面的尾巴上
    strcat(str1, " "); // 给 Hello 后面拼个空格
    strcat(str1, str2); // 再把 World 拼上去
    printf("拼接后的终极字符串是：%s\n", str1); // 猜猜结果是什么？

    return 0;
}
