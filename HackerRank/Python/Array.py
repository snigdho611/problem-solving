n = int(input())

A = map(int, input().split())
print(sorted(list(set(A)))[-2])
