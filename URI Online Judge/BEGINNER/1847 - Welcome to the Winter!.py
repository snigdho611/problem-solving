a, b, c = input().split()

a = int(a)
b = int(b)
c = int(c)

if a > b and b <= c:
    print(":)")
if a < b and b >= c:
    print(":(")
if a < b and b < c:
    if (b-a) > (c-b):
        print(":(")
    if (b-a) <= (c-b):
        print(":)")
if a > b and b > c:
    if (a-b) > (b-c):
        print(":)")
    if (a-b) <= (b-c):
        print(":(")
if a == b and c > b:
    print(":)")
if a == b and c <= b:
    print(":(")
