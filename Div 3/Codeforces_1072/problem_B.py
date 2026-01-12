t = int(input())
for _ in range(t):
    s, k, m = map(int, input().split())

    q = m // k
    r = m % k

    if s <= k:
        print(max(0, s - r))
    else:
        if q % 2 == 0:
            print(s - r)
        else:
            print(k - r)
