n,k=map(int, input().split())
d=[0]*(k+1)
d[0]=1
for c in[int(input())for _ in range(n)]:
    for i in range(c,k+1):
        d[i]+=d[i-c]
print(d[k])