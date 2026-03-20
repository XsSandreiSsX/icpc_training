def solution(count_contestants: int, count_sizes: list) -> list:
    sizes = ("S", "M", "L", "XL", "XXL", "XXXL")
    contestants = [(indx, input().split(",")) for indx in range(count_contestants)]
    issued_sizes = [""] * count_contestants

    # Самое важное решение отсортировать участников тоже
    contestants.sort(key=lambda x: sizes.index(x[1][0]))

    one_size = [(indx, "".join(size)) for indx, size in contestants if len(size) < 2]
    for (indx, cur_size) in one_size:
        size_indx = sizes.index(cur_size)
        if not count_sizes[size_indx]:
            return []

        count_sizes[size_indx] -= 1
        issued_sizes[indx] = cur_size

    for size_indx, size in enumerate(sizes):
        if not count_sizes[size_indx]:
            continue

        cnts = [indx for indx, cnt_sizes in contestants
                if size in cnt_sizes and not issued_sizes[indx]][0:count_sizes[size_indx]]

        for indx in cnts:
            issued_sizes[indx] = size

        count_sizes[size_indx] -= len(cnts)

    if not all(issued_sizes):
        return []
    return ["YES"] + issued_sizes


if __name__ == "__main__":
    count_sizes_ = list(map(int, input().split()))
    count_contestants_ = int(input())

    answer = solution(count_contestants_, count_sizes_)
    if not answer:
        print("NO")
    else:
        print(*answer, sep="\n")