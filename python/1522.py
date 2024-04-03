c=0
m=0
l=0
a=list(input())
s = len(a)
for i in range(s):
    if i+1 >= s:
        a[i] = a[i-1]
    else:
        a[i] = a[i+1]
print(a)
print(m)