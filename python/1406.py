lists = list(input())
point = len(lists)
for _ in range(int(input())):
    choice = list(input().split())
    if choice[0] == 'L':
        if point > 0:
            point -= 1
        else:
            point
    elif choice[0] == 'D':
        if point < len(lists):
            point+=1
        else:
            point = point
    elif choice[0] == 'B':
        if point != 0:
            point -= 1
            del lists[point]
        else:
            lists = lists
    elif choice[0] == 'P':
        lists.insert(point, choice[1])
        point+=1
print(''.join(lists))