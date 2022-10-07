def main():
    alpha = 'abcdefghijklmnopqrstuvwxyz'
    S = input()
    arr = [c for c in S]
    uniq = set(arr)
    new_S = ''.join(sorted(list(uniq)))
    if new_S == alpha:
        print('None')
    else:
        print(alpha.lstrip(new_S)[0])

if __name__ == '__main__':
    main()
    