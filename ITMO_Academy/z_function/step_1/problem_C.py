tests = int(input())

for _ in range(tests):
    string = input()
    substring = input()

    joker_indx = set(i for i in range(len(substring)) if substring[i] == "?")

    sub_indx = set()

    if len(substring) > len(string):
        print(0)
        print("")
        continue

    m = len(substring)
    for i in range(0, len(string) - m + 1):
        ss = ""
        for j in range(0, m):
            ss += "?" if j in joker_indx else string[i+j]

        if ss == substring:
            sub_indx.add(i)

    print(len(sub_indx))
    print(*sub_indx)
