from math import sqrt
t = int(input())
i = 0
while i < t:
    n, k = [int(j) for j in input().split()]
    if k >= n:
        print(1)
    else:
        v = 0
        j = 2
        divisors = dict()
        maxj = int(sqrt(n))+1
        new = n
        while j <= maxj:
            if v 
            if n % j == 0 and n//j > 0:
                v += j*(n//j)
                n -= v*(n//j)
            j+=1
        print(n//v)
    i += 1