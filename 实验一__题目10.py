"""-------------题目10-------------"""
"""-----------输出子列表-----------"""

x = input('请输入一个列表，元素之间以空格隔开：')
y = input('请输入两个列表的下标值，并以空格隔开：')
z = []   # 用于存放列表

num = list(map(int, list(x.split())))
a, b = map(int, y.split())

if a > b:
    a, b = b, a

for i in range(a, b + 1):
    z.append(num[i])

print(z)
