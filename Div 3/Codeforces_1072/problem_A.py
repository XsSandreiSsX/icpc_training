tests = int(input())
for _ in range(tests):
    n = int(input())

    if n == 2:
        print(2)
        continue

    if n == 3:
        print(3)
        continue

    if n % 2 == 0:
        print(0)
        continue

    print(1)




