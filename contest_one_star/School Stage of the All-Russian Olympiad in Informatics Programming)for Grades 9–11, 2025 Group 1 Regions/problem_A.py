dist_ad_t = int(input())
ad_t = int(input())
f_t = int(input())

ad_count = f_t // dist_ad_t

while dist_ad_t * ad_count >= f_t:
    ad_count -= 1

print(f_t + ad_t * ad_count)