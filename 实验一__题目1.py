"""-------------题目1-------------"""
"""--计算并输出三位数各个位上的数字--"""

num = input('请输入一个三位数：')

# 利用数学方法（较麻烦）

"""
num = int(num)
ge = num % 10
shi = num // 10 % 10
bai = num // 100
print(ge, shi, bai)
"""

# 利用Python内置函数的方法1(for循环)

"""
for i in num:
    print(int(i),end = ' ')
"""
    

# 利用Python内置函数的方法2(map函数)

ge,shi,bai = map(int, num)
print(ge, shi, bai)

