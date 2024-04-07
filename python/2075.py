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
