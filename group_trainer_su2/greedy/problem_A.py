def simulate(start_type):
    used = [False] * n
    cur_x = x
    cur_type = start_type
    cnt = 0

    while True:
        best_i = -1
        best_m = -1

        for i, (t, h, m) in enumerate(candies):
            if used[i]:
                continue
            if t != cur_type:
                continue
            if h > cur_x:
                continue
            if m > best_m:
                best_m = m
                best_i = i

        if best_i == -1:
            break

        used[best_i] = True
        cur_x += candies[best_i][2]
        cnt += 1
        cur_type = 0 if cur_type else 1

    return cnt


if __name__ == "__main__":
    n, x = map(int, input().split())
    candies = [tuple(map(int, input().split())) for _ in range(n)]
    ans = max(simulate(0), simulate(1))
    print(ans)