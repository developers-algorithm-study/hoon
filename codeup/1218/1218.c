#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a + b <= c)
        printf("삼각형아님\n");
    else if(a == b && b == c && c == a)
        printf("정삼각형\n");
    else if(a != b && b == c && c == b || a == b && b == a && c != b)
        printf("이등변삼각형\n");
    else if((a * a) + (b * b) == (c * c))
        printf("직각삼각형\n");
    else
        printf("삼각형\n");
}