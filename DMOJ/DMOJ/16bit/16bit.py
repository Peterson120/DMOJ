numLines = int(input())
arr = []

for i in range(numLines):
    temp = input().split()
    if int(temp[1])*int(temp[0]) != int(temp[2]):
        arr.append("16 BIT S/W ONLY")
    else:
        arr.append("POSSIBLE DOUBLE SIGMA")

for i in arr:
    print(i)
