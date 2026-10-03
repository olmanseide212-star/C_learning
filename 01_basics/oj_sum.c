#include <stdio.h>
int main(){
     int T;
     scanf("%d",&T);
     int sum = 0;

     while(T > 0) {
        int N;
        scanf("%d",&N);
        
        for (int i = 1;i <= N;i++){
            if(i % 2 == 0){
                continue;
            }
            else {
                sum = sum + i;
            }
        }
        T--;
        printf("%d\n",sum);
        sum = 0;
        
    }

    return 0;
}
        

        