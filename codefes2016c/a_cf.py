def main():
    s = input()
    if 'C' in s and 'F' in s:
        if s.index('C') < s.index('F'):
            print('Yes')
        else:
            print('No')
    else:
        print('No')

    

if __name__ == '__main__':
    main()
    