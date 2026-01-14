string = input()

n = len(string)
zf = [0] * n

for i in range(1, n):
    while i + zf[i] < n and string[zf[i]] == string[zf[i] + i]:
        zf[i] += 1


print(*zf)