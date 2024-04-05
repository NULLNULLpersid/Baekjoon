import sys
n = int(input())
l=[]
for i in range(n):
    l.append(list(map(int, sys.stdin.readline().split())))
    l.sort()
    print(l)