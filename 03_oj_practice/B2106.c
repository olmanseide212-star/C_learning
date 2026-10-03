#include <stdio.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int board[105][105];
    for (int i = 0;i < n;i++){
        for (int j = 0;j < m;j++){
            scanf("%d",&board[i][j]);
        }
    }
    for (int i = 0;i < m;i++){
        for (int j = 0;j < n;j++){
            printf("%d ",board[j][i]);
        }
        printf("\n");
    }
    return 0;
}