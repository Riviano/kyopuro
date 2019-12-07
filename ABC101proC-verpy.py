import sys
read = sys.stdin.buffer.read
readline = sys.stdin.buffer.readline
readlines = sys.stdin.buffer.readlines

n,k = map(int,readline().split())
answer = (n-1+k-2)//(k-1)
print(answer)
