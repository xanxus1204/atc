def main():
    in_arr = input().split(' ')
    N = int(in_arr[0])
    K = int(in_arr[1])
    a = []
    sum = 0
    count = 0
    for i in range(N):
        a.append(int(input()))
    for e in a:
        sum += e
        count += 1
        if (sum >= K):
            break
    print(count)

if __name__ == '__main__':
    main()
    