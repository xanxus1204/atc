s = input()
def is_one_char(str):
    if len(set([c for c in str])) == 1:
        return True
    else:
        return False

candidate = set([c for c in s])
counts = []
for alpha in candidate:
    newstr = ""
    oldstr = s
    flag = is_one_char(oldstr)
    count = 0
    while(not flag):
        for i in range(len(oldstr) - 1):
            if oldstr[i] == alpha or oldstr[i+1] == alpha:
                newstr += alpha
            else:
                newstr += oldstr[i]
        flag = is_one_char(newstr)
        count = len(s) - len(newstr)
        oldstr = newstr
        newstr = ""
    counts.append(count)
print(min(counts))
    
        
        
