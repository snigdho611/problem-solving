x = int(input())
y = int(input())
z = int(input())
n = int(input())

x = [i for i in range(x+1)]
y = [i for i in range(y+1)]
z = [i for i in range(z+1)]
print(z)

combo = [[a,b,c] for a in x for b in y for c in z if a+b+c != n]
print(combo)
