import itertools

def main():
    S = input()
    l = [int(i) for i in S.split(' ')]
    ans = []    
    for v in  itertools.combinations(l,3):
        ans.append(sum(v))
    ans = set(ans)
    print(list(ans)[-3])


if __name__ == '__main__':
    main()
    