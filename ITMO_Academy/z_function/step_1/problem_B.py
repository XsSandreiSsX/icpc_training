def count_sub(s: str, sub: str) -> int:
    cnt = 0
    m = len(sub)
    for i in range(0, len(s) - m + 1):
        if s[i:i + m] == sub:
            cnt += 1

    return cnt

tests = int(input())
for test in range(tests):
    string = input()

    count = 0
    prefix = set(string[:i] for i in range(1, len(string)))
    suffix = set(string[i:] for i in range(1, len(string)))

    bad = prefix & suffix

    ans = 0

    for p in prefix:
        if p not in bad:
            ans += count_sub(string, p)

    for s in suffix:
        if s not in bad:
            ans += count_sub(string, s)

    print(ans)