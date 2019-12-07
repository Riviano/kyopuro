S = input()
SA  = S.replace('?','a')
T = input()

def test(i):
    #一文字目から初めてハマるかどうか確認
    S_sub = S[i:i+len(T)]
    for s,t in zip(S_sub,T):
        if s == '?':
            continue
        if s != t:
            return False
    return True

pw = []
for i in range(len(S)-len(T)+1):
    if test(i):
        x = SA[:i] + T + SA[i+len(T):]
        pw.append(x)
if pw:
    answer = sorted(pw)[0]
else:
    answer = 'UNRESTORABLE'
print(answer)
