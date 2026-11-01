//I找妹子
// #include <stdio.h>
// int main (){
//     int a[4][4];
//     int min = a[0][0];
//     for (int i = 0;i < 4;i ++){
//         for (int j = 0;j < 4;j ++){
//             scanf("%d",&a[i][j]);
//             if (a[i][j] < min) min = a[i][j];
//         }
//     }
//     for (int i = 0;i < 4;i ++){
//         for (int j = 0;j < 4;j ++){
//             if (a[i][j] == min) printf("%d %d",i ,j );
//         }
//     }
//     return 0;
// }

//F.养猪
// #include <stdio.h>
// int main (){
//     int T;
//     scanf("%d",&T);
//     while (T--){
//         int a[21];
//         a[1] = 1,a[2] = 2;
//         for (int i = 3;i < 21;i ++){
//             a[i] = a[i -1] + a[i-2];
//         }
//         int N;
//         scanf("%d",&N);
//         printf("%d\n",a[N]);
//     }
//     return 0;
// }

//H.同班同学
// #include <stdio.h>
// #include <string.h>
// int main (){
//     int N;
//     scanf("%d",&N);
//     char phone[31];
//     for (int i = 1;i < 31;i ++){
//         scanf("%s",phone[i]);
//     }
//     int len = strlen (phone);
//     int a[i][j];
//     for (int i = 1;i < N;i ++){
//         for (int j = 0 ;j < len ;j ++){
//             scanf("%d",a[i][i])
//         }
//解法1二维数组
// #include <stdio.h>
// int main (){
//     int N;
//     scanf("%d",&N);
//     char phone [35][35];
//     for (int i = 0;i < N;i ++){
//             scanf("%s",phone[i]);
//         }
//     int count = 0;
//     for (int j = 0;phone[0][j] != '\0';j ++){
//         int is_bro = 1;
//         for (int i = 0;i < N;i ++){
//             if (phone[i][j] != phone[0][j]) is_bro = 0;
//         }
//         if (is_bro) count ++;
//         else break;
//     }
//     printf("%d\n",count);
//     return 0;
// }
//解法二一维数组
// #include <stdio.h>
// int main (){
//     int n;
//     scanf("%d",&n);
//     char str[35];
//     scanf("%s",str);
//     char current[35];
//     int result = 35;
//     for (int i = 0;i < n-1;i ++){
//         int count = 0;
//         scanf("%s",current);
//         for (int j = 0;current[j] != '\0';j ++){
//             if (current[j] == str[j]) count ++;
//             else break;
//         }
//         if (count < result) result =  count;
//     }
//     printf("%d\n",result);
//     return 0;
// }

//j 测测脸皮有多厚
#include <stdio.h>
int main (){
    int a[5][5];
    for(int i = 0;i < 5;i ++){
        for (int j = 0;j < 5;j ++){
            scanf("%d",&a[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0;i < 5;i ++){
        sum += a[i][i];
        sum += a[i][4-i];
    }
    sum -= a[2][2];
    printf("%d\n",50+sum);
    printf("%s\n",((50+sum) > 100) ? "wo de tian!":"make monkey!");
    return 0;
}
        