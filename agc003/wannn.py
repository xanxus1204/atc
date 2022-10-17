S = input()
S = list(S)
flag = True
if ('N' in S and 'S' not in S):
    flag = False;
if ('S' in S and 'N' not in S):
    flag = False
if ('E' in S and 'W' not in S):
    flag = False
if ('W' in S and 'E' not in S):
    flag = False
if flag:
    print('Yes')
else:
    print('No')



