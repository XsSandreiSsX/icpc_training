def solve():
    _ = int(input())
    string = input()
    print(string.find("L") + 1)

if __name__ == "__main__":
    tests = int(input())
    for _ in range(tests):
        solve()
