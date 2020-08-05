#include <stdbool.h>
#include <stdio.h>
#include <math.h>

bool prime(int num)
{
    if(num == 1)
        return false;
    
    int n = sqrt(num);

    for(int i = 2; i < n + 1; i++)
        if(num % i == 0)
            return false;
    return true;
}

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);

    for(int i = m; i < n + 1; i++)
        if(prime(i))
            printf("%d\n", i);
}