tests = int(input())
for _ in range(tests):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    pref = [0] * (n + 1)
    for i in range(1, n + 1):
        pref[i] = pref[i - 1] + b[i - 1]

    idx = 0
    m = 0
    ans = 0

    a.sort(reverse=True)
    for x in sorted(set(a), reverse=True):
        while idx < n and a[idx] >= x:
            idx += 1
        k = idx

        while m + 1 <= n and pref[m + 1] <= k:
            m += 1

        ans = max(ans, x * m)

    print(ans)

