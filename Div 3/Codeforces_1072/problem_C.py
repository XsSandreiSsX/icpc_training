tests = int(input())
for _ in range(tests):
    n, k = map(int, input().split())
    ok = False
    if n == k:
        print(0)
        ok = True
        continue
    for d in range(1, 35):
        if k in (n // 2**d, (n + 2**d - 1) // 2**d):
            print(d)
            ok = True
            break

    if not ok:
        print(-1)