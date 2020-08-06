#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, s = 0;
    scanf("%d", &n);

    int * a = (int*)malloc(sizeof(int) * n);
    int * b = (int*)malloc(sizeof(int) * n);

    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for(int i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }

        for(int j = 0; j < n - 1 - i; j++)
        { 
            if(b[j] < b[j + 1])
            {
                int tmp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++)
        s += a[i] * b[i];

    printf("%d", s);
}