"""-------------题目3-------------"""
"""----按字典序输出三个英文单词----"""

x = input('请输入三个英文单词：')
a, b, c = x.split()

# 直接用字符串比较大小

"""
if a > b:
    a, b = b, a
if a > c:
    a, c = c, a
if b > c:
    b, c = c, b
print(a, b, c)
"""

# 利用Python函数解决问题（sort函数）

a, b, c = sorted(x.split())
print(a, b, c)
