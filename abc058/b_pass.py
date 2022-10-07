def main():
    O = input()
    E = input()
    ans = ''
    if len(O) == len(E):
        for i in range(len(O)):
            ans += O[i]+E[i]
    elif len(O) == len(E) + 1:
        tmp = E[len(E)-1]
        for i in range(len(E)):
            ans += O[i]+E[i]
        ans += tmp
    else :
        tmp = E[len(E)-1]
        for i in range(len(O)):
            ans += O[i]+E[i]
        ans += tmp
    print(ans)

if __name__ == '__main__':
    main()
    