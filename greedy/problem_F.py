c1, c2, c3, c4 = map(int, input().split())
n, m = map(int, input().split())
bus = list(map(int, input().split()))
trol = list(map(int, input().split()))

cost_bus = 0
for i in bus:
    cost_bus += min(c1 * i, c2)
cost_bus = min(cost_bus, c3)

cost_trol = 0
for i in trol:
    cost_trol += min(c1 * i, c2)
cost_trol = min(cost_trol, c3)

print(min(cost_bus + cost_trol, c4))