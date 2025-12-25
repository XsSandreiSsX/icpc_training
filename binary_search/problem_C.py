def can_place(dist: int) -> bool:
    count = 1
    last = stalls[0]

    for i in range(1, count_stalls):
        if stalls[i] - last >= dist:
            count += 1
            last = stalls[i]
            if count == cows:
                return True

    return False


if __name__ == "__main__":
    count_stalls, cows = map(int, input().split())
    stalls = list(map(int, input().split()))
    stalls.sort()

    left, right = 0, stalls[-1] - stalls[0]
    answer = 0

    while left <= right:
        mid = (left + right) // 2
        if can_place(dist=mid):
            answer = mid
            left = mid + 1
        else:
            right = mid -1

    print(answer)
