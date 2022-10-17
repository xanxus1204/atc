S = input()


def ismm(s):
    pat = [i+1 for i in range(12)]
    if int(s) in pat:
        return True
    else:
        return False
s1 = S[0:2]
s2 = S[2:4]
# if s1 == '00' or s2 == '00':
#     print('NA')
#     exit(0)
if ismm(s1):
    if ismm(s2):
        #両方MM
        print('AMBIGUOUS')
    else :
        #前だけMM
        print('MMYY')
else:
    if ismm(s2):
        #後ろだけMM
        print('YYMM')
    else :
        print('NA')




    
