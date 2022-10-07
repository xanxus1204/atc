import math
def main():
    big = 10e+9+7
    N, K = map(int, input().split())
    for i in range(1, K+1):
        comb_blue = calc_comb(K-i,i-1)
        comb_red = calc_comb(N-K-i+1,i)
        res = comb_blue*comb_red
        print(res%big)

def calc_comb(a,b):
    return math.factorial(a+b) // math.factorial(a)*math.factorial(b)
if __name__ == '__main__':
    main()
    

