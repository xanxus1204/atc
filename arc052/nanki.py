def main():
    S = input()
    nums = [str(i) for i in range(10)]
    for c in S:
        if c in nums:
            print(c, end='')
    else:
        print('')

if __name__ == '__main__':
    main()
    