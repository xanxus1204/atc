def main():
    S = input()
    if S[0] != 'A':
        print('WA')
        return 0
    part = S[2:-1]
    part_arr = [s for s in part]
    if part_arr.count('C') != 1:
        print('WA')
        return 0
    tmp = S[1:]
    tmp = tmp.replace('C','')
    if tmp != tmp.lower():
        print('WA')
        return 0
    print('AC')


if __name__ == '__main__':
    main()
    