ans = []
user = int(input(""))

for i in range(user):
    stuff = input("")
    candy = input("")
    bags = stuff.split()
    amount = candy.split()
    candy = 0

    for s in range(len(amount)):
        candy += int(amount[s])
    ans.append(candy % int(bags[1]))
    if user - 1 == i:
        for j in range(len(ans)):
            print("Case #" + str(j+1) + " : " + str(ans[j]))
