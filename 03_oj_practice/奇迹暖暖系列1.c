#include <stdio.h>

int main() {
    // char (a,b,c,d,e);
    // scanf("%s %s %s %s %s",a,b,c,d,e);
    // for (int i = 0;i <= 4;i++);
    int sum = 0;
    for (int i = 0;i <= 4;i++){
        char a;
        scanf(" %c",&a);
        if (a == 'A'){
            sum = sum + 1;
        }
        else if (a == 'B'){
            sum = sum + 2;
        }
        else if (a == 'C'){
            sum =sum + 3;
        }
        else if (a == 'D'){
            sum =sum + 4;
        }
        else if (a == 'E'){
            sum = sum +5;
        }
    }
    printf("%d\n",sum);
    return 0;
}




    