N, K = map(int, input().split())
A = list(map(int, input().split()))
import itertools
flag = True
while(flag):
    count = 0
    if K in A:
        flag = False
        break
    A_2 = list(itertools.combinations(A,2))
    for comb in A_2:
        diff = abs(comb[0] - comb[1])
        if diff not in A:
            A.append(diff)
        else:
            count += 1
    else:
        if (count == len(A_2)):
            flag = False
if K in A:
    print('POSSIBLE')
else:
    print('IMPOSSIBLE')

