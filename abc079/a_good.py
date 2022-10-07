N = input()
if N.count(N[0]) == 4:
    print('Yes')
elif N[0:3].count(N[0]) == 3:
    print('Yes')
elif N[1:4].count(N[1]) == 3:
    print('Yes')
else:
    print('No')


        

