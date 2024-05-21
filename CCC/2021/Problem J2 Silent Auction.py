myList = []
pay = []

n = int(input())
for x in range(n):
    name = input()
    myList.append(name)
    a = int(input())
    pay.append(a)

x = pay.index(max(pay))
print(myList[pay.index(max(pay))])