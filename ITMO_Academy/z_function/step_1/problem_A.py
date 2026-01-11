tests = int(input())
for test in range(tests):
    string = input()
    maxx = 1

    l, r = 0, 0
    for i in range(len(string)-1, 0, -1):
        if string[0] != string[i]:
            continue

        r = i
        ll, rr = 0, i
        ok = True
        while ll < rr:
            if string[ll] != string[rr]:
                ok = False
                break

            ll += 1
            rr -= 1

        if ok:
            maxx = r - l + 1
            break
    print(maxx)