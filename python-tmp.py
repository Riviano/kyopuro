import sys
read = sys.stdin.buffer.read
readline = sys.stdin.buffer.readline
readlines = sys.stdin.buffer.readlines
 
import itertools
import numpy as np
 
 A = np.array(list(itertools.product([0,1],repeat=N)),np.bool)
##ビット全探索用のビット作成