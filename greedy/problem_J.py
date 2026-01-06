from math import floor, sqrt

n = int(input())

# Вычислим сколько этажей получится максимум при минииальной
# конфигурации 5 - 4 - 3 - 2 - 1 допустим
max_floors = floor((sqrt(1 + 24 * n) - 1) / 6)
а
for floor in range(1, max_floors + 1):
    print(floor)
print(max_floors)