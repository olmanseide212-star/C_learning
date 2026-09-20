#include <stdio.h>
#include <string.h>
int main () {
    char password[50] = "123456";
    char input[50];
    scanf("%s",input);
    char secret[50];
    strcpy(secret,"密码正确，欢迎使用！");
    if (strcmp(password,input) == 0){
        printf("%s\n",secret);
    }
    else {
        int len = strlen(input);
        printf("密码错误，你的密码长度是%d\n",len);
    }
    return 0;
}
