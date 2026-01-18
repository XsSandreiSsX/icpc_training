tests = int(input())
for _ in range(tests):
    n, m, limit = map(int, input().split())
    orig = list(map(int, input().split()))

    add = [0] * n
    last_ver = [0] * n
    reset_version = 1

    for _ in range(m):
        indx, val = map(int, input().split())
        indx -= 1

        if last_ver[indx] != reset_version:
            add[indx] = 0
            last_ver[indx] = reset_version

        if orig[indx] + add[indx] + val > limit:
            reset_version += 1
        else:
            add[indx] += val

    res = [0] * n
    for i in range(n):
        if last_ver[i] == reset_version:
            res[i] = orig[i] + add[i]
        else:
            res[i] = orig[i]

    print(*res)
