tests = int(input())
for _ in range(tests):
    length = int(input())
    lst = list(map(int, input().split()))
    print(max(lst) * length)