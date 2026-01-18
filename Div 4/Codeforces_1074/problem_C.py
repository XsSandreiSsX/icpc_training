def mex(arr: list) -> int:
    a = set(arr)
    w = 0
    while w in a:
        w += 1
    return w


tests = int(input())
for _ in range(tests):
    n = int(input())
    arr = list(map(int, input().split()))

    larr = []
    jane_doe = sorted(set(arr))

    if len(jane_doe) == 1:
        print(1)
        continue

    cur = [jane_doe[0]]
    for i in range(1, len(jane_doe)):
        if jane_doe[i] == jane_doe[i - 1] + 1:
            cur.append(jane_doe[i])
        else:
            cur = [jane_doe[i]]

        if len(cur) > len(larr):
            larr = cur.copy()

    smash = min(larr)
    arr = list(map(lambda x: x - smash, arr))
    print(mex(arr))

