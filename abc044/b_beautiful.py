w = input()
for c in w:
    if not w.count(c) % 2 == 0:
        print('No')
        break
else:
    print('Yes')