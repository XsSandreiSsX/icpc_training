tests = int(input())
for _ in range(tests):
    arr_len = int(input())
    arr = list(map(int, input().split()))

    s = sum([abs(arr[i] - arr[i+1]) for i in range(0, arr_len - 1)])
    best = s

    # Проверяем начало
    best = min(best, s - abs(arr[0] - arr[1]))

    # Проверяем конец
    best  = min(best, s - abs(arr[-2] - arr[-1]))

    for k in range(1, arr_len - 1):
        cur = s - abs(arr[k-1] - arr[k]) - abs(arr[k] - arr[k+1]) + abs(arr[k-1] - arr[k+1])
        if cur < best:
            best = cur

    print(best)
