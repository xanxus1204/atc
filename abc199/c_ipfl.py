def main():
    N = int(input())
    S = input()
    S = [s for s in S]
    Q = int(input())
    T = []
    A = []
    B = []
    for i in range(Q):
        t = input()
        t = t.split(' ')
        T.append(t[0])
        A.append(int(t[1]))
        B.append(int(t[2]))
    
    for i in range(Q):
        if (T[i] == "1"):
           S[A[i]-1], S[B[i]-1] =  S[B[i]-1], S[A[i]-1]
        elif (T[i] == "2"):
            S = S[N:] + S[0:N] 

    print(''.join(S))




if __name__ == '__main__':
    main()
    