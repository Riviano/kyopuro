import sys
read = sys.stdin.buffer.read
readline = sys.stdin.buffer.readline
readlines = sys.stdin.buffer.readlines

import itertools
import numpy as np

N = int(readline())
XY = [[] for _ in range(N)]
for i in range(N):
    A = int(readline())
    for _ in range(A):
        x,y = map(int,readline().split())
        XY[i].append((x-1,y))

A = np.array(list(itertools.product([0,1],repeat=N)),np.bool)

for i in range(N):
    for x,y in XY[i]:
        bl = (~A[:,i]) | ((A[:,x]) == bool(y))
        A = A[bl]

answer = A.sum(axis = 1).max()
print(answer)
