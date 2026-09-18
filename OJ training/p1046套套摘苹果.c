#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0;i <= 9;i++){
        scanf("%d",&arr[i]);
    }
    int a;
    scanf("%d",&a);
    int count = 0;
    for (int i = 0;i <=9;i++){
        if (a + 30 >= arr[i]){
            count++;
        }
        else {
            continue;
        }
    }
    printf("%d\n",count);
    return 0;
}
