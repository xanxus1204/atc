# -*- coding: utf-8 -*-
# 整数の入力
N = int(input())

s = input()
rcount = 0
for c in s:
    if c == 'R':
        rcount += 1
bcount = N - rcount
if rcount > bcount:
    print('Yes')
else:
    print('No')
