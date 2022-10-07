def main():
    N = int(input())
    S = []
    max_num = 0
    cand = []
    for i in range(N):
        S.append(input())
    Sset = set(S)
    S_sort = sorted(Sset)
    for s in S_sort:
        count = S.count(s)
        if count > max_num:
            max_num = count
            cand.clear()
            cand.append(s)
        elif count == max_num:
            cand.append(s)
    
    for c in cand:
        print(c)


if __name__ == '__main__':
    main()
    