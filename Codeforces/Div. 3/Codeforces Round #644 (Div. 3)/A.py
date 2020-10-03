n = int(input())
i = 0
while i < n:
    a, b = [int(i) for i in input().split()]
    a, b = min(a,b), max(a,b)
    r = b
    if 2*a >= b:
        r = 2*a
    print(r**2)
    i += 1