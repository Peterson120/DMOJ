import sys

N = sys.stdin.readline().split()
K = int(N[1])
N = int(N[0])
arr = []
for i in range(N):
    arr.append(int(sys.stdin.readline()))
arr.sort()
maxSum = 0
for i in range(N-1, 0, -1):
    if (K <= 0):
        break;
    if (arr[i] > 0):
        maxSum += arr[i]
        K -= 1
print(maxSum)

