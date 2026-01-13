# Превышено ограничение времени на тесте 8
# tests = int(input())
# for _ in range(tests):
#     string = input()
#     substring = input()
#
#     count = 0
#     for l in range(len(string)):
#         for r in range(l+1, len(string)+1):
#             if substring not in string[l:r]:
#                 count += 1
#
#     print(count)


# Превышено ограничение времени на тесте 14
# tests = int(input())
# for _ in range(tests):
#     string = input()
#     substring = input()
#
#     count = 0
#     for l in range(len(string)):
#         for r in range(l+1, len(string)+1):
#             if substring in string[l:r]:
#                 break
#
#             count += 1
#
#     print(count)

tests = int(input())
for _ in range(tests):
    string = input()
    substring = input()

    ls = len(substring)
    lss = len(string)

    blck = []
    j = 0
    l = 0
    while j != -1:
        j = string.find(substring, l)

        if j != -1:
            blck.append((j, j+ls))
            l = j + 1

    if not blck:
        print(lss * (lss + 1) // 2)
        continue

    count = 0
    i = 0

    for l in range(lss):
        while i < len(blck) and blck[i][0] < l:
            i += 1

        if i == len(blck):
            count += (lss - l)
        else:
            r = blck[i][1]
            add = r - l - 1
            if add > 0:
                count += add

    print(count)