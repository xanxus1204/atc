N = int(input())
S = input()
S = [s for s in S]
import itertools
ans = 0
for i in range(1, N+1):
    for c in itertools.combinations(S,i):
        if len(c) == len(set(c)):
            ans += 1
print(ans)

