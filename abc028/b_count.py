def main():
    S = input()
    target = ['A', 'B', 'C', 'D', 'E', 'F']
    for c in target:
        if c == 'F':
            print(S.count(c))
        else:
            print(S.count(c), end=' ')

if __name__ == '__main__':
    main()
    