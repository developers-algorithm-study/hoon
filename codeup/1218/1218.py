a, b, c = map(int, input().split(' '))

if a + b <= c:
    print("삼각형아님")
elif a + b - c == a:
    print("정삼각형")
elif a - b + c == c or a + b - c == a:
    print("이등변삼각형")
elif (a * a) + (b * b) == (c * c):
    print("직각삼각형")
else:
    print("삼각형")
