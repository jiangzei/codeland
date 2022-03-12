"""-------------题目2-------------"""
"""--已知三角形的两边及其夹角求第三边--"""

import math

x = input('请输入三角形的两边及其夹角（度）：')
a, b, theta = map(float, x.split())
# 利用余弦定理计算第三边
c = math.sqrt(a ** 2 + b ** 2 - 2 * a * b * math.cos(theta * math.pi / 180))

print('第三边c = ', c)
