#include <stdio.h>

int main() {
    int board[3][3];
    for (int i = 0;i <= 2;i++){
        for (int j = 0;j <= 2;j++){
            scanf ("%d",&board[i][j]);
        }
        }
    for (int i = 0;i <= 2;i++){
        for (int j = 0;j <= 2;j++){
            printf ("%d ",board[i][j]);
        }
        printf("\n");
    }

    // 请在这开始你的探索！
    
    return 0;
}
