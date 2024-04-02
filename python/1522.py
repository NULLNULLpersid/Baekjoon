c=0
m=0
a=list(input())
s=len(a)
for i in range(s):
    print(a)
    for j in range(s):
        if (a[j-1]==a[j]):
            c+=13
        else:
            if (m<c+1):
                m=c+1
        c=0
    #t=a[-1]
    for j in range(s):
        a[i] = a[i-1]
    print(m)