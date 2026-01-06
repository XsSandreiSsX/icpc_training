def zero_and_one(n: int) -> int:
    dp = [0] * (n + 1)
    if n == 0:
        return 0
    if n == 1:
        return 2
    dp[1] = 2
    dp[2] = 3
    for i in range(3, n + 1):
        dp[i] = dp[i - 2] + dp[i - 1]

    return dp[n]


print(zero_and_one(int(input())))
