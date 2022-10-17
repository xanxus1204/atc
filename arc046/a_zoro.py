def main():
    N = int(input())
    a = [i for i in range(11)]
    b = [j*10 for j in range(11)]
    kisuu = 1
    arr = []
    while(True):
        for i in range(1,10):
            if kisuu >= 10:
                arr.append(arr[len(arr)-9]+i*kisuu)
            else:
                arr.append(i*kisuu)
        kisuu *= 10
        if len(arr) > 50:
            break
    print(arr[N-1])



if __name__ == '__main__':
    main()
    