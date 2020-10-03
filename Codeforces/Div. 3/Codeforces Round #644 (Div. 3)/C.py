t = int(input())
i = 0
while i < t:
    n = int(input())
    s = [int(si) for si in input().split()]
    s.sort()
    odd = [e for e in s if e % 2 == 1]
    even = [e for e in s if e % 2 == 0]
    poss = (len(odd)%2 + len(even)%2) == 0
    j = 0
    while j < n - 1:
        if s[j] + 1 == s[j + 1]:
            poss = True
        j+=1
    if poss:
        print("YES")
    else:
        print("NO")
    i += 1