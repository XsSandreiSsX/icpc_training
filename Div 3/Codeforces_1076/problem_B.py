tests = int(input())
for _ in range(tests):
    n = int(input())
    p = list(map(int, input().split()))

    mx = [0] * n

    mx[-1] = p[-1]
    for i in range(n-2, -1, -1):
        mx[i] = max(mx[i+1], p[i])

    if p == mx:
        print(*p)
        continue

    l,r = None, None
    cc = 0

    for i in range(0, n):
        if mx[i] > p[i] and l is None:
            l = i
            cc = mx[i]

        if mx[i] == cc:
            r = i

    p[l:r+1] = p[l:r+1][::-1]
    print(*p)

