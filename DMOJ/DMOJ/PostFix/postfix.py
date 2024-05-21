import sys
line = sys.stdin.readline().split()
first = float(line[0])
i = 1
while True:
    second = ""
    while line[i] <= '9' and line[i] >= '0':
        second += line[i]
        i += 1
    second = float(second)
    op = line[i]
    if op == '+':
        first += second
    elif op == '*':
        first *= second
    elif op == '-':
        first -=second
    elif op == '/':
        first /= second
    elif op == '%':
        first %= second
    elif op == '^':
        first **= second
    i += 1
    if i >= len(line):
        break
print(first)
