N = int(input())
s = []
for i in range(N):
    tmp = input()
    s.append(tmp)
end_a = 0
start_b = 0
has_ab = 0
for c in s:
    if c[-1] == 'A':
        end_a += 1
    if c[0] == 'B':
        start_b += 1
    if 'AB' in c:
        has_ab += 1
ab = start_b if start_b < end_a else end_a
print(ab+has_ab)
