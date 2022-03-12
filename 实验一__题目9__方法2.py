"""-------------题目9-------------"""
"""-------------方法2-------------"""
"""-生成1000个0～100的随机整数并统计每个元素出现次数-"""

import random

x = []

# 将生成的1000个随机数存放到列表x中
for i in range(0, 1000):
    x.append(random.randint(0, 100))

# 将随机数按顺序排，便于直观看到结果
x.sort()

# 利用字典功能，冒号左边是随机数，右边则是该随机数出现的次数
x_sta = {i : x.count(i) for i in x}

print(x_sta)
