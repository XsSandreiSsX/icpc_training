n = int(input())

schedule = []
for _ in range(n):
    schedule.append(tuple(map(int, input().split())))

schedule.sort(key=lambda x: x[1])

l = schedule[0][1]
count = 1

for interval in schedule[1:]:
    start, end = interval
    if l <= start:
        count += 1
        l = end

print(count)
