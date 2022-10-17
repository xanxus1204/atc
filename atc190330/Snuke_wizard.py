# -*- coding: utf-8 -*-
# 整数の入力
# スペース区切りの整数の入力
N, Q = map(int, input().split())
# 文字列の入力
s = input()

t_list = []
d_list = []
for i in range(Q):
    tmp_t, tmp_d = input().split()
    t_list.append(tmp_t)
    d_list.append(tmp_d)
