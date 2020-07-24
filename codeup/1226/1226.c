#include <stdio.h>
#include <stdlib.h>

int rank(int * lotto, int * mylotto)
{
    int count = 0;
    int bonus = 0;
    int rank = 0;

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        {
            if(lotto[i] == mylotto[j])
                count++;
            if(lotto[6] == mylotto[j])
                bonus++;
        }
    }

    if(count == 6)
        rank = 1;
    else if(count == 5 && bonus > 0)
        rank = 2;
    else if(count == 5)
        rank = 3;
    else if(count == 4)
        rank = 4;
    else if(count == 3)
        rank = 5;

    return rank;
}

int main()
{
    int lotto[7] = {0,};
    int mylotto[6] = {0,};

    for(int i = 0; i < 7; i++)
    {
        scanf("%d", &lotto[i]);
    }

    for(int i = 0; i < 6; i++)
    {
        scanf("%d", &mylotto[i]);
    }

    printf("%d\n", rank(lotto, mylotto));
}