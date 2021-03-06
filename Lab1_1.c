/****************************************************\
作者信息：
    姓名：邹琪
版权声明：
    版权由北京交通大学计算机与信息技术学院程序设计基础训练课程组所有
模块名称:
    矩阵转置模块
摘要:
    教学辅助代码，配合实验1
其它说明:
    本模块实现矩阵转置功能，用于训练学生理解二维数组、指向二维数组的指针。
模块历史:
　　邹琪于2018年2月26日创建本模块，email: qzou@bjtu.edu.cn
    韩升于2018年12月14日修改本模块，email：shhan@bjtu.edu.cn
    韩升于2019年3月12日修改部分注释及main函数声明，email:shhan@bjtu.edu.cn
    吴林江于2022年3月10日修改本模块，作实验用途，更正了程序错误并添加了注释  email：21281141@bjtu.edu.cn
**********************************************************/
 
#include <stdio.h>

int main()
{
    int a[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};//声明二维数组并初始化
    int i, j, temp;

    int (*p)[4] = a;//声明一个指向长度为4的int数组的指针
    int *q = a[0];

    //进行数组转置操作
    for (i = 0; i < 4; i++)    //遍历每一行
    {
        for(j=i+1; j<4; j++)   //遍历每一列中除对角线元素外的所有上（下）三角元素，索引（i，j）表示上三角；索引（j，i）表示下三角
        {
        //进行元素交换
            temp = *(*(p+j)+i);
            *(*(p+j)+i) = *(q+j);
            *(q+j) = temp;
        }

    //处理完一行的每一列目标元素后，将指针*q所指向二维数组a的行数换到下一行
        q = q+i;
    }

    //输出转置后的结果
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}
