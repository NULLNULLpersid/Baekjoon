l=list(map(int,input()))
s=0if l.count(0)>l.count(1)else 1
print(sum(1for i in range(len(l))if s!=l[i]and l[i]!=l[i-1]))