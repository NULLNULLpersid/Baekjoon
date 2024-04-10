N,M=map(int,input().split())
l=list(map(int,input().split()))
m=0
for i in range(N):
    for j in range(i+1,N):
        for k in range(j+1,N):
            s=l[i]+l[j]+l[k]
            if s <= M:
                m=max(m,s)
print(m)