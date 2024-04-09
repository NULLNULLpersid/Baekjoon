<<<<<<< HEAD
import numpy as np
l=[]
#print(sorted(sum([list(map(int,input().split()))for i in range(int(input()))],[]))[-5])
for i in range(int(input())):
    l.append([*map(int,input().split())])
    l = np.concatenate(l).tolist()
print(l)
=======
"""
Chat GPT를 활용한 코드
import heapq
n = int(input())
heap = []
for _ in range(n):
    for x in map(int, input().split()):
        heapq.heappush(heap, x)
        if len(heap) > n:
            heapq.heappop(heap)
print(heap[0])
"""
import sys
n = int(input())
for i in range(n):
    list(map(int, sys.stdin.readline().split()))
>>>>>>> 40d606a5e1847daf0c49f4debde92e6848714c4a
