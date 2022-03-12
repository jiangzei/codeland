"""-------------题目6-------------"""
"""-------计算二次方程的根-------"""

import cmath
import math

x = input('请输入二次方程的三个系数，并以空格间隔：')
a, b, c = x.split()
a, b, c = float(a), float(b), float(c)
# 算出delta，方便使用求根公式
delta = b ** 2 - 4 * a * c

if delta < 0:
    d = (-b - cmath.sqrt(delta)) / 2 * a
    e = (-b + cmath.sqrt(delta)) / 2 * a
    print('此二次方程无实根！')
    print('方程的虚根为：', d, '和', e)
elif delta == 0:
    print('此二次方程只有一个实根：',(-b) / 2 * a)
else:
    print('此二次方程有两个实根：', (-b - math.sqrt(delta)) / 2 * a, '和', (-b + math.sqrt(delta)) / 2 * a)
