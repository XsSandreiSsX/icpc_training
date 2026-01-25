tests = int(input())
for _ in range(tests):
    n, h, l = map(int, input().split())
    arr = list(map(int, input().split()))

    m = min(h, l)
    all_, x, y = 0, 0, 0

    for a in arr:
        if a <= m:
            all_ += 1
        elif a <= h:
            x += 1
        elif a <= l:
            y += 1

    x_a, y_a, a_a = all_ + x, all_ + y, all_ + x + y

    print(min(
        x_a,
        y_a,
        a_a // 2
    ))