#include <stdio.h>
#include "functions.h"
int main(){
    int a;
    printf("**********算法功能菜单**********\n");
    printf(" **请选择您所需要的功能对应序号**\n");
    printf("    ***1.计算最大公约数***\n");
    printf("    ***2.勒让德多项式值***\n");
    printf("    ***3.牛顿迭代法计算***\n");
    while(scanf("%d", &a) != 0){
        
        if(a == 1){
            long x, y;
            printf("请输入两个大于零的正整数并以空格间隔:");
            scanf("%ld %ld", &x, &y);
            printf("这两个整数的最大公约数是：%ld", gcd(x, y));
            printf("请重新输入您想要功能的序号：\n");
        }
        else if(a == 2){
            int a, b;
            printf("请输入想求得的勒让德多项式的阶数n及自变量x：\n");
            scanf("%d %d", &a, &b);
            printf("输出的值是：%d\n", p(a, b));
            printf("请重新输入您想要功能的序号：\n");
        }
        else if(a == 3){
            double x;
            int a, b, c, d;
            printf("请输入你想求的方程根的附近数x以及系数a,b,c,d：\n");
            scanf("%lf %d %d %d %d", &x, &a, &b, &c, &d);
            printf("则方程在%.0lf附近的根是：%lf\n", x, f(x, a, b, c, d));
            printf("请重新输入您想要功能的序号：\n");
        }
        else
            printf("输入的值错误，请重新输入。");
    }
}
