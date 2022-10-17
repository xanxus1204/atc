import itertools
args = []
for _ in range(5):
    tmp = int(input())
    args.append(tmp)
best = 643
for perm in itertools.permutations(args):
    remainder = 0
    cook = 0
    for i, t in enumerate(perm):
        cook += t
        if i == 4:
            break
        while(cook % 10 != 0):
            cook += 1

    cook += remainder
    if cook < best:
        best = cook
print(best)
