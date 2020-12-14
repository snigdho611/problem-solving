inp = int(input())
list_ = []

for i in range(inp):
    name = input()
    mark = float(input())
    temp = [name, mark]

    list_.append(temp)


min = list_[0][1]
for i in range(len(list_)):
    if min > list_[i][1]:
        min = list_[i][1]

secMin = 101.0
for i in range(len(list_)):
    if list_[i][1] != min:
        if secMin > list_[i][1]:
            secMin = list_[i][1]

namelist = []

for i in range(len(list_)):
    if list_[i][1] == secMin:
        namelist.append(list_[i][0])

namelist = sorted(namelist)
for i in range(len(namelist)):
    print(namelist[i])

print(min, secMin)