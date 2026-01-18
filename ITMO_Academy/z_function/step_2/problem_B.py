tests = int(input())
for _ in range(tests):
    k, j = map(int, input().split())

    if j == 0:
        print(0)
        continue

    if j % 2 == 1:
        print(0)
        continue

    while k > 2:
        cur_len = 2**k - 1
        mid = (cur_len - 1) // 2

        if j == mid+1:
            print(mid)
            break
        elif j < mid:
            k -= 1
        elif j > mid:
            j = j - (mid + 1)
            k -= 1

    if j == 1:
        print(0)
    elif j == 2:
        print(1)
