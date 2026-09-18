#include <stdio.h>

int main() {
    int n,m;
    scanf ("%d %d",&n,&m);
    for (int i = 1;i <= n;i++){
        if (i == 1|| i == n){
            for (int j = 1;j <= m;j++){
                printf("*");
            }
            printf("\n");
        }
        else {
            printf("*");
            for(int j = 1;j <= m-2;j++){
                    printf(" ");
            }
                    printf("*\n");
            }
        }
    return 0;
    }

