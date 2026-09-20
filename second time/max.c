#include <stdio.h>
int max(int a,int b){
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}
int main (){
    int x,y;
    scanf("%d %d",&x,&y);
    int c = max(x,y);
    printf("max = %d\n",c);
    return 0;
}
