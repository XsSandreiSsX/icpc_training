string = input()
k = int(input())

c = set(string)
letters = []
for letter in c:
    letters.append((letter, string.count(letter)))

deleted = [False] * len(letters)
letters.sort(key=lambda x: x[1])

for indx, (letter, count) in enumerate(letters):
    if k >= count:
        k -= count
        deleted[indx] = True

deleted_letters = {letters[indx][0] for indx, t in enumerate(deleted) if t}

print(len(c) - len(deleted_letters))

result = ''.join(ch for ch in string if ch not in deleted_letters)
print(result)