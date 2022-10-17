import sys


def main():
    lines = sys.stdin.readlines()
    N = int(lines[0])
    b = [int(i) for i in lines[1].split(' ')]
    a = []
    for i in range(1, N+1):
        max_b = max(b)
        for k in range(max_b, 0, -1):
            if k <= i :
                if b[k-1] == k:
                    print(k)
                    b.pop(k-1)  
                    break
    if len(b) > 0 :
        print(-1)

        
       

        




if __name__ == '__main__':
    main()
    
