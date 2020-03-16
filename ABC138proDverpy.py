import sys
read = sys.stdin.buffer.read
readline = sys.stdin.buffer.readline
readlines = sys.stdin.buffer.readlines

N,Q = map(int,readline().split())
ABPX = list(map(int,read().split()))
AB = iter(ABPX[:N+N-2])
PX = iter(ABPX[N+N-2:])

graph = [[] for _ in range(N+1)]
for a,b in zip(AB,AB):
    graph[a].append(b)
    graph[b].append(a)

val = [0] * (N+1)
for p,x in zip(PX,PX):
    val[p] += x

stack = [1]

parent = [0] * (N+1)
while stack:
    x = stack.pop()
    for y in graph[x]:
        if y == parent[x]:
            continue
        parent[y] = x
        stack.append(y)
        val[y] += val[x]

print(' '.join(map(str,val[1:])))
