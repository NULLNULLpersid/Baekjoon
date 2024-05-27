# #내가 작성한 코드
# l=[list(input())for _ in range(5)]

# for i in range(1, 5):
#     if len(l[i-1]) > len(l[i]):
#         while(len(l[i-1]) != len(l[i])):
#             l[i].append('')
#     elif (len(l[i-1]) < len(l[i])):
#         while(len(l[i-1]) != len(l[i])):
#             l[i-1].append('')

# [print(l[r][c],end="")for c in range(len(l[0]))for r in range(5)]

#ChatGPT가 작성한 코드
l=[list(input())for _ in range(5)]
for i in l:
    i+=['']*(max(map(len,l))-len(i))
print(''.join(''.join(x)for x in zip(*l)))