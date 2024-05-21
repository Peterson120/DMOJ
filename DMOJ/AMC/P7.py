import sys
raw = int(sys.stdin.readline())
c = 0
for i in range(1, raw+1):
    j = 1
    while j * j <= i:
        if i % j == 0:
            c+=1
            if i//j != j:
                c+=1
        j+=1
print(c)
