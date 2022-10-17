S = input()
count = 0
S = [c for c in S]

for i, c in enumerate(S):
    if i != 0:
        if S[i-1] == c:
            if S[i-1] == '0':
                S[i] = '1'
            else :
                S[i] = '0'
            count += 1
print(count)
            

        

