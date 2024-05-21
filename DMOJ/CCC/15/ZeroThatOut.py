import sys


def main():
    s = []
    K = int(sys.stdin.readline())
    total = 0
    for i in range(K):
        temp = int(sys.stdin.readline())
        if (temp == 0):
            total -= s[-1]
            s.pop()
        else:
            s.append(temp)
            total += temp
    print(total)


main()

