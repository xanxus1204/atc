import math


def main():
    R,X,Y = map(int, input().split())
    D = math.sqrt(X*X+Y*Y)

    if D == R:
        print(1)
    elif D <= 2*R:
        print(2)
    else:
        print(math.ceil(D/R))


if __name__ == '__main__':
    main()
    