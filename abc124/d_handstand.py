N,K = map(int, input().split())
S = input()
S = S.replace('01','0,1')
S = S.replace('10','1,0')
S = S.split(',')
for i in range(K):
    for i, s in enumerate(S):
        if '0' in s:
            S[i] = s.replace('0','1')
    ans = ''.join(S)
    print(ans)

print(len(ans.split('0')[0]))

       
        