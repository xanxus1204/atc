s = input()
C = set([c for c in s])
for c in C:
    t = []
    for i in range(len(s)-1):
        if(s[i] == c or s[i+1] == c):
            t[i] = c
        else:
            t[i] = s[i]
    print(t)
            

