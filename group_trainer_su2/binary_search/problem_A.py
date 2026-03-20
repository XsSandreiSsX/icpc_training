def check(x, w, h):
    return (x // w) * (x // h) >= n


if __name__ == '__main__':
    weight, height, n = map(int, input().split())

    left, right = 0, 10 ** 18

    while left < right:
        mid = (left + right) // 2
        if check(mid, weight, height):
            right = mid
        else:
            left = mid + 1

    print(left)