def find_paths(n: int) -> int:
    if n == 0:
        return 0
    if n == 1:
        return 1

    dp = [0] * (n + 1)
    dp[0] = 1
    dp[1] = 1
    dp[2] = 2

    for i in range(3, n + 1):
        dp[i] = dp[i - 3] + dp[i -2] + dp[i - 1]

    return dp[n]

print(find_paths(int(input())))