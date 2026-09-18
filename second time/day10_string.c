#include<stdio.h>
int main (){
    char user_name[50];
    // scanf ("%s",user_name);
    fgets (user_name,50,stdin);
    printf("欢迎来到字符的世界:%s\n",user_name);
    return 0;
}