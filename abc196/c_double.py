

def main():
    N = int(input())
    ans = 0
    tmp = 1
    while(True):
        tmp_str = str(tmp) + str(tmp);
        num_tmp = int(tmp_str)
        if num_tmp > N:
            break
        tmp += 1
        ans += 1
    print(ans)




if __name__ == '__main__':
    main()
