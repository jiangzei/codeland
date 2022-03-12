"""-------------题目4-------------"""
"""-----计算两点间的曼哈顿距离-----"""

def manhattanDistance(x, y):
    return sum(map(lambda i, j: abs(i - j), x, y))

a = input('请输入一点的坐标，元素之间以空格间隔:')
b = input('请输入另一点的坐标:')

#将两个点的坐标值以int型分别存储到list中
a, b = list(map(int, list(a.split()))), list(map(int, list(b.split())))

print('这两点的曼哈顿距离为：',manhattanDistance(a, b))
