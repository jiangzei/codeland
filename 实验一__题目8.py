"""-------------题目8-------------"""
"""------判断输入的数是否为质数------"""

import math

# 定义一个判断素数的函数
def judge(a):
    a = int(a)
    if a <= 1:
        return -1
    for i in range(2, int(math.sqrt(a)) + 1):
        if a % i == 0:
            return -1
    return 1
    
x = input('请键入一个整数：')
if judge(x) == 1:
    print(x, '是质数')
else:
    print(x, '不是质数')
