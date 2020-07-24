hp, shield, time = map(float, input().split(' '))
dmg = float(input())

ignore = ((1 - (100 - (hp/time/dmg * 100)) / shield) * 100)

if ignore < 0:
    print("O")
elif ignore > 100:
    print("X")
else:
    print("%.6f" % ignore)