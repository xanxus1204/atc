def main():
    E = input().split(' ')
    B = input()
    L = input().split(' ')
    count = 0
    for e in E:
        if e in L:
            count += 1
    if count == 6:
        print(1)
    elif count == 5:
        if B in L:
            print(2)
        else:
            print(3)
    elif count == 4:
        print(4)
    elif count == 3:
        print(5)
    else:
        print(0)


if __name__ == "__main__":
    main()