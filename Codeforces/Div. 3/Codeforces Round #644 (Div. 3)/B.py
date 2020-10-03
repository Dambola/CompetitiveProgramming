t = int(input())
i = 0
while i < t:
    n = int(input())
    s = [int(si) for si in input().split()]
    s.sort()
    minimal = float('inf')
    j = 0
    while j < n - 1:
        minimal = min(minimal, abs(s[j]-s[j+1]))
        j += 1
    print(minimal)
    i += 1