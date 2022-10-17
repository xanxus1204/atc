import itertools

N = int(input())
ans = 0
arr = ['3','5','7']
for repeat in range(3,11):
    ite = itertools.product(arr, repeat=repeat)
    for l in ite:
        if '3' in l and '5' in l and '7' in l:
            num = int(''.join(l))
            if num > N:
                break
            else:
                ans += 1
            
print(ans)


