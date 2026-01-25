tests = int(input())
for _ in range(tests):
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    c = [0] * n
    for i in range(n):
        c[i] = max(a[i], b[i])

    mx = [0] * n
    mx[-1] = c[-1]
    for i in range(n - 2, -1, -1):
        mx[i] = max(mx[i + 1], c[i])

    pref = [0] * (n + 1)
    for i in range(1, n + 1):
        pref[i] = pref[i - 1] + mx[i - 1]

    for _ in range(q):
        l, r = map(int, input().split())
        print(pref[r] - pref[l - 1], end=" ")

    print(end="\n")