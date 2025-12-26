reactions = [int(input()) for _ in range(3)]

s = sum(reactions)
m = max(reactions)

ans = max(m, (s + 1) // 2)
print(ans)
