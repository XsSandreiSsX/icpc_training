from math import ceil


def solution(volume: int, cups: tuple) -> list[int]:
    # ([Индекс, Обьем чашки, налито])
    cups = [[indx, vol, 0] for indx, vol in enumerate(cups)]
    cups.sort(key=lambda x: x[1], reverse=True)

    min_tea_required = sum(map(lambda x: ceil(x[1] / 2), cups))

    if min_tea_required > w:
        return []

    # Разливаем чай на половину обьема
    for cup in cups:
        ml = ceil(cup[1] / 2)
        volume -= ml

        cup[2] = ml

    # Наливаем дополна
    for cup in cups:
        if not volume:
            break

        ml = min(volume, cup[1] - cup[2])
        volume -= ml
        cup[2] += ml

    cups.sort(key=lambda x: x[0])
    return [vol for (_, _, vol) in cups]


if __name__ == '__main__':
    n, w = map(int, input().split())
    cups_ = tuple(map(int, input().split()))
    answer = solution(w, cups_)
    print(*answer if answer else [-1])