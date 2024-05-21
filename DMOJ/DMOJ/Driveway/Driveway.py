import sys
import collections
T = sys.stdin.readline().split()
M = int(T[1])
T = int(T[0])
d = collections.deque()

for i in range(T):
    X = sys.stdin.readline().split()
    com = X[1]
    X = X[0]
    if com == "in":
        d.append(X)
    else:
        if d[-1] == X:
            d.pop()
        elif M > 0 and d[0] == X:
            d.popleft()
            M -= 1

for i in d:
	print(i)
