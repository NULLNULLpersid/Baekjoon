import sys
r=[0]*10001
for _ in range(int(input())):
    r[int(sys.stdin.readline())]+=1
sys.stdout.write(''.join(f'{i}\n'*x for i,x in enumerate(r)if x))

"""
import sys
r=[0]*10001
for _ in range(int(input())):
    r[int(sys.stdin.readline())]+=1

[if r[i] print(i)for i in range(10001)for _ in range(r[i])]
for i in range(10001):
    if r[i]:
        for _ in range(r[i]):
            print(i)
"""