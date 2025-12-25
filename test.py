import math


def S(h):
    return (3 * h * h + h) // 2


def build_houses(n):
    ans = []
    while n >= 3:
        h = int((-1 + math.isqrt(1 + 24 * n)) // 6)

        while h > 0 and S(h) > n:
            h -= 1

        if h < 2:
            break

        cost = S(h)
        ans.append(h)
        n -= cost

    print("Дома:", ans)
    print("Остаток карт:", n)
    return ans


build_houses(int(input()))
