test = int(input())

for i in range(test):
    name, force = input().split()
    force = int(force)

    if name == "Thor" or name == "THOR":
        print("Y")
    else: 
        print("N")

