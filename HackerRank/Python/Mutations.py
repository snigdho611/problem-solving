string = input()
index, replace = input().split()
index = int(index)


li = list(string)
li[index] = replace

print(''.join(li))