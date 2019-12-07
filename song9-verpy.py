from collections import defaultdict
N = int(input())
A = [int(input()) for _ in range(N)]

d = defaultdict(int)

for a in A:
    d[a] ^= 1
answer = sum(d.values())
print(answer)


