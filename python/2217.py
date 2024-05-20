#(최대 중량) = (최소 줄의 중량) * (로프 개수)

N = int(input())
L = [int(input())for _ in range(N)]
L.sort()
c = L[0]
for i in range(len(L) - 1):
    c += L[i] / N
    if c > L[i+1]:
        break
print((i+2)*L[0])

"""
2개 

20
10
10 + 10 / 2
15 + 15 / 2

"""