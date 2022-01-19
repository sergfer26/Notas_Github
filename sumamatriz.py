from random import *
A = [[randint(0,20) for c in range(5)] for r in range(5)]
B = [[randint(0,20) for c in range(5)] for r in range(5)]
C = [[0 for c in range(5)] for r in range(5)]
print A
for r in range(5):
    for c in range(5):
        C[r][c]=A[r][c]+B[r][c]
print 'la suma es:'
for k in C:
    for i in k:
        print '%d\t' %i,
    print 
