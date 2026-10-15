/**
 * ============================================================================
 * 🎯 指针专项训练
 * 
 * 💡【说明】：
 * 本文件用于系统练习 C 语言指针相关题目，包括：
 * - 指针基础（& 取地址、* 解引用）
 * - 指针与函数（传址修改真身）
 * - 指针与数组（指针遍历、指针算术）
 * - 字符串与指针（char* 操作）
 * 
 * 🛠️【一键编译运行命令】：
 * gcc 04_topic_training/15_pointers_lab.c -o pointers && ./pointers
 * 
 * 📖【配套笔记】：
 * 指针核心知识点与经典例题.md
 * ============================================================================
 */
 #include <stdio.h>
 int main () {
    const char *month[] = {"Oh my God!","January", "February", "March", "April", "May","June", "July", "August", "September", "October", "November", "December"};
    int n;
    while (scanf("%d",&n) != EOF){
        if (n >= 1&&n <= 12) printf("%s\n",*(month + n));
        else printf("%s\n",*month);
    }
    return 0;
}

