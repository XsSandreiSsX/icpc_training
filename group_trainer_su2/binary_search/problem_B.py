



# [1, 2, 3, 4, 5, 6]
# [1, 2] [2, 3] [4, 5], [5, 6]
if __name__ == "__main__":
    N, R, C = map(int, input().split())

    students = [int(input()) for _ in range(N)]
    students.sort()
    print(students)

    for i in range(len(students)):
        curr_c = students[i:i + R + 1]
        print(curr_c)
        if len(curr_c) != C:
            break

        print(curr_c[-1] - curr_c[0])