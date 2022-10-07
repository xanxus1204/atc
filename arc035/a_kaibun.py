def main():
    s = input()


    
    l = len(s)//2
    s1 = s[0:l]
    s2 = s[l+1:]
    s2 = s2[::-1]
   
    kaibun = True
    for i in range(len(s1)):
        if s1[i] == '*' or s2[i] == '*':
            continue
        elif s1[i] == s2[i]:
            continue
        else:
            kaibun = False
            break
    
    if kaibun :
        print('YES')
    else:
        print('NO')

if __name__ == '__main__':
    main()
    