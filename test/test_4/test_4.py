S = int(input())

h = S // 3600
m = S // 60 % 60
s = S % 60

print(str(h) + ":" + str(m) + ":" + str(s))
