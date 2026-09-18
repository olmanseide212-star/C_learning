#include <stdio.h>
int main () {
    int arr[5];
    for (int i = 0;i <= 4;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for (int i = 0;i <= 4;i++){
        if (arr[i] > max) {
            max = arr[i];
        }
        else {
            continue;
        }
    }
    printf("%d\n",max);
    return 0;
    
}