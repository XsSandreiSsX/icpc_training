tests = int(input())
for _ in range(tests):
    n, s, x = map(int, input().split())
    sum_ = sum(map(int, input().split()))

    if sum_ <= s and (s - sum_) % x == 0:
        print("YES")
    else:
        print("NO")
