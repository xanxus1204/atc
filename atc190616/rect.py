W, H , x, y = map(int, input().split())

#角にのってる場合
if y == 0:
    if x == 0  or x == W :
        print(W*H/2, 1, sep=' ')
if x == 0:
    if y == 0 or y == H:
        print(W*H/2, 1, sep=' ')
else:
    #正方形の場合
    if W == H:
        #座標が真ん中の場合
        if W//2 == x and H//2 == y:
            print(W*H/2, 1, sep=' ')
        #座標がよってるとき
        else:
            if x > W-x:
                print((W-x)*H, 1, sep=' ')
            else:
                print(x*H, 1, sep=' ')
    else:
        if W//2 == x and H//2 == y:
            print(W*H/2, 1, sep=' ')
        else:
            if x > W-x:
                print((W-x)*H, 0, sep=' ')
            else:
                print(x*H,0, sep=' ')




