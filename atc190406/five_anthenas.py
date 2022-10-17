# -*- coding: utf-8 -*-
# 整数の入力




args = []
for _ in range(5):
    tmp = int(input())
    args.append(tmp)
k = int(input())
for i in range(5):
    for j in range(i+1, 5):
        if i == j:
            continue
        dis = args[j] - args[i]
        if dis > k:
            print(':(')
            exit()
print('Yay!')
