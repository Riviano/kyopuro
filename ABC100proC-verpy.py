import sys
read = sys.stdin.buffer.read
readline = sys.stdin.buffer.readline
readlines = sys.stdin.buffer.readlines

import numpy as np

N = int(readline())
A = np.array(read().split(),np.int32)

answer = 0
for _ in range(32):
    A = A[A%2 == 0]
    answer += len(A)
    A >>= 1
print(answer)
