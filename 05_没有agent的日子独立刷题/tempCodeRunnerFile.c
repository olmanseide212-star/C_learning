#include <stdio.h>
int main (){
    int a[3][3];
    int *p = &a[0][0];
    for (int i = 0;i < 3;i ++){
        for (int j = 0;j < 3;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    for (int i = 0;i < 3;i ++){
        for (int j = 0;j < 3;j ++){
            printf("%d",*(p + 3*i + j));
            if (j < 2) printf(" ");
        }
        printf("\n");
    }
    return 0;
}