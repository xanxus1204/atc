def main():
    N = int(input())
    A = input().split(' ')
    A = [int(i) for i in A]
    for i in range(1, N+1):
        print(A.count(i))


if __name__ == '__main__':
    main()
    