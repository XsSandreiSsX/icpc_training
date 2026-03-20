def easy_sequence(n: int) -> int:
    dp = [0] * (n + 1)
    if n == 1:
        return 1
    dp[0] = 1
    dp[1] = 1

    for i in range(2, n + 1):
        if i % 2 == 0:
            dp[i] = dp[i // 2] + dp[i // 2 - 1]
        else:
            dp[i] = dp[i // 2] - dp[i // 2 - 1]

    return dp[n]


print(easy_sequence(int(input())))
