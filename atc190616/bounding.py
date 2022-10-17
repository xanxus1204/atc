N, X = map(int, input().split())
L = list(map(int, input().split()))
L.insert(0,0)
for i in range(1, len(L)):
    L[i] = L[i] + L[i-1] 
count = 0
for l in L:
    if l > X:
        break
    else:
        count += 1
print(count)


    

