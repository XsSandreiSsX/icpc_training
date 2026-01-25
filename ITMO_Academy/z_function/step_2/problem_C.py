from string import ascii_lowercase


tests = int(input())
for _ in range(tests):
    n = int(input())
    z = list(map(int, input().split()))

    if len(z) != n:
        print("!")
        continue

    if z[0] != 0:
        print("!")
        continue

    output = ["*"] * n
    block = [[]] * (n + 1)

    prefix_exist = False
    prefix = 0
    fail = False

    cur_l = 0

    for indx, req in enumerate(z):
        if not prefix_exist and req == 0:
            output[indx] = ascii_lowercase[prefix]
            prefix += 1

        if req == 0 and output[indx] == "*":
            output[indx] = ascii_lowercase[prefix + cur_l]
            cur_l += 1

        if req > 0:
            prefix_exist = True

            if indx + req > n:
                print("!")
                fail = True
                break

            for i in range(req):
                if z[indx + i] < min(z[i], req - i):
                    print("!")
                    fail = True
                    break
                output[indx + i] = output[i]

        if fail:
            break


    if not fail:
        print("".join(output))
