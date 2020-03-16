N,M = map(int,input().split())
AB = [[int(x) for x in input().split()] for _ in range(M)]

se1 = set()
se2 = set()

for a,b in AB:
    if a>b:
        a,b = b,a
    if a==1:
        se1.add(b)
    if b==N:
        se2.add(a)

se = se1&se2
answer = 'POSSIBLE' if se else 'IMPOSSIBLE'
print(answer)
