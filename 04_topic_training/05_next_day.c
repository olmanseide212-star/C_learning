/**
 * ============================================================================
 * 题目：计算日期的后一天 (Next Day)
 * 洛谷对应练习题：P5716 【深基3.例9】月份天数 (https://www.luogu.com.cn/problem/P5716)
 * 
 * 【题目描述】
 * 输入三个正整数，分别代表一个日期的年、月、日，输出这个日期的后一天的年、月、日。
 * 
 * 【输入格式】
 * 输入三个正整数，以空格隔开：year month day
 * 
 * 【输出格式】
 * 输出后一天的年、月、日，以空格隔开。
 * 
 * 【输入样例】
 * 2007 2 28
 * 
 * 【输出样例】
 * 2007 3 1
 * 
 * 【边界测试参考数据】
 * 2000 2 28 -> 2000 2 29 (世纪闰年)
 * 2000 2 29 -> 2000 3 1
 * 2023 12 31 -> 2024 1 1 (跨年进位)
 * ============================================================================
 */

// #include <stdio.h>
// int main() {
//     int year, month, day;
//     scanf("%d %d %d", &year, &month, &day);
//     if (month == 12){
//         if (day == 31) {
//             year ++;month = 1;day = 1;
//         }
//         else day ++;
//     }
//     else if (month == 1||month == 3||month == 5||month == 7||month == 8||month == 10){
//         if (day == 31){
//             month ++;day = 1;
//         }
//         else day ++;
//     }
//     else if (month == 4||month == 6||month == 9||month == 11){
//         if (day == 30){
//             month ++;day = 1;
//         }
//         else day ++;
//     }
//     else if (month == 2){
//         int is_leap = year % 4 == 0&& year % 100 != 0 || year % 400 == 0;
//         if (is_leap){
//             if (day == 29){
//                 month ++;day = 1;
//             }
//             else day ++;
//         }
//         else {
//             if (day == 28){
//                 month ++;day = 1;
//             }
//             else day ++;
//         }
//     }
//     printf("%d %d %d",year,month,day);
//     return 0;
// }




// #include <stdio.h>
// int main () {
//     int max_day,year,month,day;
//     scanf("%d %d %d",&year,&month,&day);
//     switch (month){
//         case 1:case 3:case 5:case 7:case 8:case 10:case 12:
//             max_day = 31;break;
//         case 4:case 6:case 9:case 11:
//             max_day = 30;break;
//         case 2:
//             max_day = (year % 4 == 0&& year % 100 != 0 || year % 400 == 0) ? 29 : 28;break;
//     }
//     day ++;
//     if (day > max_day){
//         month ++;day = 1;
//         if (month > 12) {
//             year ++;month = 1;
//         }
//     }
//     printf("%d %d %d",year,month,day);
//     return 0;
// }



#include <stdio.h>
int main () {
    int year,month,day;
    scanf("%d %d %d",&year,&month,&day);
    int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (year % 4 == 0&& year % 100 != 0|| year % 400 == 0) a[2] = 29;
    day ++;
    if (day > a[month]){
        month++;day = 1;
        if (month > 12){
            year ++;month = 1;
        }
    }
    printf("%d %d %d\n",year,month,day);
    return 0;
}


#include <stdio.h>
int main () {
    int year,month,day;
    scanf("%d %d %d",&year,&month,&day);
    int a[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (year % 4 == 0&& year % 100 != 0|| year % 400 == 0) a[2] = 29;
    printf("%d\n",a[month]);
    return 0;
}
