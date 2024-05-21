import sys
mod = 1000000007
N = int(sys.stdin.readline())
x = sys.stdin.readline().split()
s = 0
for i in range(N):
    s += int(x[i])
    s %= mod
print(s*2**(N-1)%mod)
