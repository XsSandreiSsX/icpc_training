from math import lcm
a = int(input())
b = int(input())

lcm_ = lcm(a, b)

if lcm_ == a or lcm_ == b:
    print(-1)
else:
    print(lcm_)