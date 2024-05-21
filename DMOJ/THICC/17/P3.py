import sys


def binarySearch(key, arr):
    left = 0
    right = len(arr) - 1
    while left <= right:
        mid = left + ((right - left) >> 1)
        if arr[mid][0] == key:
            return arr[mid][1]
        elif arr[mid][0] < key:
            left = mid + 1
        else:
            right = mid - 1
    return arr[right][1]


def main():
    n = int(sys.stdin.readline())
    day = 0
    arr = []
    temp = sys.stdin.readline().split()
    for i in range(n):
        new = []
        for j in range(n):
            new.append([day, int(temp[i])])
        arr.append(new)
    n = int(sys.stdin.readline())
    for i in range(n):
        x = sys.stdin.readline().split()
        y = int(x[2])
        q = x[0]
        x = int(x[1]) - 1
        if q == 'C':
            arr[x].append([1 + day, y])
        else:
            print(binarySearch(y, arr[x]))


main()
