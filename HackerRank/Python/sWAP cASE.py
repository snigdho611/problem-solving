inp = input()

li = []

for i in range(len(inp)):
    if inp[i].isalpha() == True:
        if inp[i].islower():
            li.append(inp[i].upper())
        elif inp[i].isupper():
            li.append(inp[i].lower())
    else:
        li.append(inp[i])

x = ''
print(x.join(li))