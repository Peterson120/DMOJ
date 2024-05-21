a = "100000"
b = "110000"
c = "100100"
d = "100110"
e = "100010"
f = "110100"
g = "110110"
h = "110010"
i = "010100"
j = "010110"
k = "101000"
l = "111000"
m = "101100"
n = "101110"
o = "101010"
p = "111100"
q = "111110"
r = "111010"
letter_s = "011100"
t = "011110"
u = "101001"
v = "111001"
w = "010111"
x = "101101"
y = "101111"
z = "101011"
space = "000000"

var = []


def solution(s):
    global var
    for loop in range(len(s)):
        letters = word[loop]
        if letters == "a":
            var.append(a)
            continue
        if letters == "b":
            var.append(b)
            continue
        if letters == "c":
            var.append(c)
            continue
        if letters == "d":
            var.append(d)
            continue
        if letters == "e":
            var.append(e)
            continue
        if letters == "f":
            var.append(f)
            continue
        if letters == "g":
            var.append(g)
            continue
        if letters == "h":
            var.append(h)
            continue
        if letters == "i":
            var.append(i)
            continue
        if letters == "j":
            var.append(j)
            continue
        if letters == "k":
            var.append(k)
            continue
        if letters == "l":
            var.append(l)
            continue
        if letters == "m":
            var.append(m)
            continue
        if letters == "n":
            var.append(n)
            continue
        if letters == "o":
            var.append(o)
            continue
        if letters == "p":
            var.append(p)
            continue
        if letters == "q":
            var.append(q)
            continue
        if letters == "r":
            var.append(r)
            continue
        if letters == "s":
            var.append(letter_s)
            continue
        if letters == "t":
            var.append(t)
            continue
        if letters == "u":
            var.append(u)
            continue
        if letters == "v":
            var.append(v)
            continue
        if letters == "w":
            var.append(w)
            continue
        if letters == "x":
            var.append(x)
            continue
        if letters == "y":
            var.append(y)
            continue
        if letters == "z":
            var.append(z)
            continue
        if letters == "000000":
            var.append(space)
            continue

    print(*var, sep="")


solution()
