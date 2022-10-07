X = int(input())
t = [i for i in range(X+1)]
t.pop(0)
import itertools
time = 10e9
ans = 0
for i in range(1,X):
    for c in itertools.combinations(t,i):
        if sum(c) == X:
            if(c[-1] <= time):
                time = c[-1]
print(time)
