"""-------------题目9-------------"""
"""-------------方法1-------------"""
"""-生成1000个0～100的随机整数并统计每个元素出现次数-"""

import random

x = []   # 存放1000个随机数
y = []   # 用于统计0～100每个数出现的次数

for i in range(0, 1000):
    x.append(random.randint(0, 100))

for i in range(0, 101):
    y.append(0)

for i in x:
    y[i] += 1

for i in range(0,101):
    print('数字', i, '出现了', y[i], '次')
