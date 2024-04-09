import numpy as np
l=[]
#print(sorted(sum([list(map(int,input().split()))for i in range(int(input()))],[]))[-5])
for i in range(int(input())):
    l.append([*map(int,input().split())])
    l = np.concatenate(l).tolist()
print(l)