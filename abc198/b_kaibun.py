def main():
    N = input()
    for i in range(10):
        tmp = "0"*i + N
        if tmp == tmp[::-1]:
            print("Yes")
            return 0
    print("No")


if __name__ == '__main__':
    main()
    