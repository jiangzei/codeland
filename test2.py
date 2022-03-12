x = list(input())
x.remove('[')
x.remove(']')
x.remove(',')
x.remove(',')
x.remove(',')
x.remove(',')
s = 0
y = list(int(i) for i in x)
count = 0
for i in y:
    s = s + i
m = int(max(y))
mi = int(min(y))
print(m,end = ',')
print(mi,end = ',')
print(s)
for i in y:
    if(int(i) == m):
        print(count)
    count = count + 1
