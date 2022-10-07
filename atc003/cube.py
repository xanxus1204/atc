import math
A, B, C = map(int, input().split())
l = [A,B,C]

max_index = l.index(max(l))
if max_index == 0:
    large = B * C * math.floor(A/2)
elif max_index == 1:
    large = C * A * math.floor(B/2)
else:
    large = A * B * math.floor(C/2)
ans = (A*B*C - large) - large
# ans = large - (A*B*C - large)
print(ans)


