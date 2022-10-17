N = input()
x = int(N)
fx = sum([int(i) for i in N])

if (x%fx == 0):
    print('Yes')
else:
    print('No')