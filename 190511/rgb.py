r, g, b, n = map(int, input().split())

count = 0

for i in range(n//r + 1):
    for j in range(n//g + 1):
        tmp = r*i+g*j
        print(i,j)
        k = (n - (tmp))//b
        if k < 0:
            continue
        if (tmp+b*k == n):
            count += 1
print(count)
